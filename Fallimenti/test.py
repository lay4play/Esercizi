#scrivere un programma che faccia una clonazione di una chiavetta usb mountata su /mnt/tmp su un'altra chiavetta montata in /mnt
import os
from time import sleep
if os.path.exists("/tmp/cloning") == False:
    print("e consigliabile eseguire questo script con screen in modo da poter utilizzare il terminale per altre operazioni")
    conf1 = input("Vuoi visualizzare questo avviso la prossima volta? [Y/n]")
    if conf1 != "Y" or conf1 != "y":
        os.system("touch /tmp/cloning")

conf2 = input("Inserisci il tipo di dispositivo che vuoi clonare:\n1 SD-USB\n2 USB-USB\n3 USB-SD\n")
if conf2 == 1:
    init="mmc"
    end="sd"
else:
    if conf2 == 2:
        init="sd"
        end=init
    else:
        init="sd"
        end="mmc"
os.system("lsblk | grep " + init)
device = input("selezionare un disco\n") #disco su cui copiare i dati
os.system("mount /dev/" + device + "1 /mnt")
print(os.system(" lsblk | grep" + end))
while True:
    device1 = input("selezionare il secondo disco\n") #disco da cui copiare i dati
    if os.path.exists("/dev/" + device1) and device1 != device:
        break
    else:
        print("disco non valido")
if os.path.exists("/mnt/tmp") == False:
    os.system("mkdir /mnt/tmp")
os.system("mount /dev/" + device1 + "1 /mnt/tmp")
os.system("rsync -rv /mnt/tmp/* /mnt")
os.system("umount -l /mnt")
