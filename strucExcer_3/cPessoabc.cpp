/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cPessoabc.cpp
 * Author: adils
 * 
 * Created on 30 de outubro de 2021, 18:44
 */

#include "cPessoabc.h"
#include <iostream>

using namespace std; 

cPessoabc::cPessoabc() {
}

cPessoabc::cPessoabc(const cPessoabc& orig) {
}

cPessoabc::~cPessoabc() {
}

void cPessoabc::lerDados(){
    
    
    int contador=0; 
    
    do{
    cout<<"Digite os Cpfs"<<endl; 
    cin>>this->vetorPessoas[contador].cpf; 
     
     contador++;  
    }while(contador<=7); 
    
    int cpfbusca; 
    cout<<"Digite o cpf para buscar"<<endl; 
    cin>>cpfbusca; 
    
    
   cout<<this->ordenacaoBolha(contador); 
   
   if ((this->buscaBinaria(int contador, int cpfbusca)) == -1)
       cout<<"encontrado"<<endl;
     else  
       cout<<"não encontado"<<endl;  
   
}

void cPessoabc::ordenacaoBolha(int contador){
    
     int i, j;
     pessoas temp;
     
       for (i= contador-1; i >= 1; i--) {
         for (j= 0; j < i ;j++) {
           if (this->vetorPessoas[j].cpf > this->vetorPessoas[j+1].cpf){
             temp = this->vetorPessoas[j];
             this->vetorPessoas[j] = this->vetorPessoas[j+1];
             this->vetorPessoas[j+1]= temp;
            }
        }
    }
       
    
}
int cPessoabc::buscaBinaria(int contador, int cpfbusca){
    
int inf,sup,meio;
  inf=0;
  sup=contador-1;
     while (inf<=sup){
       meio=(inf+sup)/2;
       if (cpfbusca==this->vetorPessoas[meio].cpf)
       return meio;
       else if (cpfbusca<vetorPessoas[meio].cpf)
         sup=meio-1;
       else
         inf=meio+1;
 }
 return -1; /* não encontrado */    
    
    
    
    
}