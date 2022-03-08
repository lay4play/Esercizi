#! /bin/bash

#Script per scaricare canzoni con yt-dlp da url scritti in un file

filename="database" 
# si riferisce al nome del file, ove presente aggiungere l'estensione del file
flag="--extract-audio --audio-format mp3"
# le flag sono le opzioni da far eseguire dopo il comando --extract-audio serve ad estrarre 
# solo l'audio e non solo il video --audio-format mp3 serve per convertire l'audio estratto in # mp3, cambiare il valore per scaricarlo in altri formati

righe=$(wc -l $filename | awk '{print $1}')

riga=0

while [ $riga -lt $righe ]; do
let riga+=1
current=$(head -$riga $filename | tail -1)
yt-dlp $current $flag

done
