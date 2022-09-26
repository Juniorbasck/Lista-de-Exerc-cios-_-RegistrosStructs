/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cProdutos.cpp
 * Author: adils
 * 
 * Created on 30 de outubro de 2021, 20:35
 */

#include "cProdutos.h"
#include <iostream>

using namespace std; 

cProdutos::cProdutos() {
}

cProdutos::cProdutos(const cProdutos& orig) {
}

cProdutos::~cProdutos() {
}

void cProdutos::lerDados(){
    
   int contador;  
   char opcao;  
   int codigoBusc; 
    
    do{
        
     cout<<"Digite o nome do produto"<<endl; 
     cin>>this->vetorProdutos[contador].nome; 
           
     cout<<"Digite o nome do codigo"<<endl; 
     cin>>this->vetorProdutos[contador].codigo; 
     
     cout<<"Digite o nome do preço"<<endl; 
     cin>>this->vetorProdutos[contador].preco; 
     
     contador++; 
     
     cout<<"deseja cotinuar cadastrando? S para continuar"endl; 
     cin>>opcao; 
     
    }while((opcao == 'S')&&(contador<3));    
    
    cout<<this->imprimirDados(contador); 
    
    cout<<"Digite um codigo para consutar o produto"<<endl;
   cin>>codigoBusc;
   
   cout<<this->ordenarbolha(contador);
   
   this->buscaBinaria(int contador, int codigoBusc);
  
}

void cProdutos::imprimirDados(int contador){
   
  int i;
  
  for (i =0; i<contador; i++)
      cout<<this->vetorProdutos[i].nome;
      cout<<this->vetorProdutos[i].codigo;
    
 }

void cProdutos::ordenarbolha(int contador){
    
     int i, j;
     int temp;
     
       for (i= contador-1; i >= 1; i--) {
         for (j= 0; j < i ;j++) {
           if (this->vetorProdutos[j].codigo > this->vetorProdutos[j+1].codigo){
             temp = this->vetorProdutos[j].codigo;
             this->vetorProdutos[j].codigo = this->vetorProdutos[j+1].codigo;
             this->vetorProdutos[j+1].codigo = temp;
            }
        }
    }
    
}





int cProdutos::buscaBinaria(int contador, int codigoBusc){
    
  int inf,sup,meio;
  inf=0;
  sup=contador-1;
     while (inf<=sup){
       meio=(inf+sup)/2;
       if (codigoBusc==this->vetorProdutos[meio].codigo)
       return meio;
       else if (codigoBusc<vetorProdutos[meio].codigo)
         sup=meio-1;
       else
         inf=meio+1;
 }
 return vetorProdutos[meio].preco; /* não encontrado */      
    
}