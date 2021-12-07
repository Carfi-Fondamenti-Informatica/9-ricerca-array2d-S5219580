#include<iostream>
#include "lib.h"
using namespace std;
void verifica(char array[10][20]){
char nome[20];
cin>>nome;
for(int i=0; i<10;i++){
    if (strcmp(nome,array[i])==0){
        cout<<i+1;
        return;}}
cout<<"non presente";
return;
}
void inserisci(char array[10][20]){
    for(int i=0; i<10;i++){
    cin>>array[i];}
return;}
