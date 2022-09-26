/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cBanco.cpp
 * Author: adils
 * 
 * Created on 30 de outubro de 2021, 21:24
 */

#include "cBanco.h"
#include <iostream>


using namespace std; 
cBanco::cBanco() {
}

cBanco::cBanco(const cBanco& orig) {
}

cBanco::~cBanco() {
}

void cBanco::lerDados(){
    
  int contador=0; 
    
   do{
       
     cout<<" Digite o nome"<<endl; 
     cin>>this->vetorConta[contador].nome; 
            
     cout<<" Digite o cpf"<<endl; 
     cin>>this->vetorConta[contador].cpf;
            
     cout<<"digite o valor depositado"<<endl; 
     cin>>this->vetorConta[contador].deposito; 
   
     contador++
   }while(contador<=3);       

  cout<<this->depoSaqeu(int deposito) 
  
}


float cBanco::depoSaqeu(int deposito){
    
   int escolha, D, total, S;  
    
   cout<<"vc quer depositar ou sacar? 1 para depositar e 2 para saxar"endl; 
   cin>>escolha; 
    
    if (escolha==1);
      cout<<"Digite o valor para deposito"endl;
      cin>>D;
      total = D + deposita;
     else if   
        cout<<"digite o valor para sacar"<<endl,
        cin>>S; 
        total = S - deposita;  
       
       return total; 
}