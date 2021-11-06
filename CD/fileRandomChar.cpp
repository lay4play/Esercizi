#include "stdafx.h"      // per VisualStudio 2017 
#include <iostream>
#include <stdlib.h>      // srand, rand 
#include <ctype.h>
using namespace std;
int main(){
  char nomeFile[] = { "/proveFile/caratteri.txt" };
  char unCar;
  FILE *pFile;
  //scrittura alfabeto
  int err1 = fopen_s(&pFile, nomeFile, "wb"); //w blocchi
  for (unCar = 'a'; unCar <= 'z'; unCar++)
    fwrite(&unCar, sizeof(unCar), 1, pFile);
  fclose(pFile);
  // lettura diretta "a ritroso"
  err1 = fopen_s(&pFile, nomeFile, "rb");     //r blocchi
  for (int k = 6; k >= 2; k--) {
    err1 = fseek(pFile, sizeof(unCar) * (k), SEEK_SET);
    unCar = fgetc(pFile);
    cout << unCar << endl;
  }
}