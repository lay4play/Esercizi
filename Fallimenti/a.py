#scrivere un programma che faccia una clonazione di una chiavetta usb mountata su /mnt/tmp su un'altra chiavetta montata in /mnt
import os
from time import sleep
if os.path.exists("/tmp/cloning") == False:
    print("e consigliabile eseguire questo script con screen in modo da poter utilizzare il terminale per altre operazioni")
    conf1 = input("Vuoi visualizzare questo avviso la prossima volta? [Y/n]")
    if conf1 != "Y" or conf1 != "y":
        os.system("touch /tmp/cloning")

conf2 = input("Inserisci il tipo di dispositivo che vuoi clonare:\n1 USB --> SD\n2 USB --> USB\n3 SD  --> USB\n")
if conf2 == "1":
    init="mmc"
    end="sd"
else:
    if conf2 == "2":
        init="sd"
        end=init
    else:
        init="sd"
        end="mmc"
os.system("lsblk | grep " + init)
device = input("selezionare un disco\n") #disco su cui copiare i dati
if conf2 == "1":
    os.system("mount /dev/" + device + "p1 /mnt")
else:
    os.system("mount /dev/" + device + "1 /mnt")
print(os.system(" lsblk | grep " + end))
while True:
    device1 = input("selezionare il secondo disco\n") #disco da cui copiare i dati
    if os.path.exists("/dev/" + device1) and device1 != device:
        break
    else:
        print("disco non valido")
    os.system("mkdir /mnt/tmp")
if conf2 == "3":
    os.system("mount /dev/" + device1 + "p1 /mnt/tmp")
else:
    os.system("mount /dev/" + device1 + "1 /mnt/tmp")
os.system("rsync -rv /mnt/tmp/* /mnt")
os.system("umount /mnt/tmp")
os.system("umount /mnt")
#os.system("rm -rf /mnt/tmp")
