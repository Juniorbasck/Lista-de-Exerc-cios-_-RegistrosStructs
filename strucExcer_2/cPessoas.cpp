/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cPessoas.cpp
 * Author: adils
 * 
 * Created on 25 de outubro de 2021, 15:26
 */

#include "cPessoas.h"
#include <iostream> 
#include <math.h> 

using namespace std; 

cPessoas::cPessoas() {
}

cPessoas::cPessoas(const cPessoas& orig) {
}

cPessoas::~cPessoas() {
}

void cPessoas::lerDados(){
   
 int cpfBusca;
 char opcao;   
 int contador=0; 

   do{  
     cout<<"Digite seu nome"<<endl; 
     cin>>this->vetorPessoas[contador].nome; 
  
     cout<<"Digite seu altura"<<endl; 
     cin>>this->vetorPessoas[contador].altura;
  
     cout<<"Digite seu peso"<<endl;  
     cin>>this->vetorPessoas[contador].peso;
   
     cout<<"Digite seu cpf"<<endl; 
     cin>>this->vetorPessoas[contador].cpf;
  
     cout<<"Digite seu sexo"<<endl;  
     cin>>this->vetorPessoas[contador].sexo;
   
     contador++; 
  
     cout<<"deseja cotinuar cadastrando? S para continuar"endl; 
     cin>>opcao;  
  
   }while((opcao == 'S')&&(contador<3)); 
   
   cout<<"Digite um CPF para localizar o cacular o IMC"<<endl;
   cin>>cpfBusca;
   cout<<this->localizaCalcIMC(cpfBusca, contador); 
           
         
}

float cPessoas::localizaCalcIMC(int cpfBusca, int contador){
 
 float imc=0.0;    
    
 for (int i=0; i<contador; i++){   
     if(cpfBusca == this->vetorPessoas[i].cpf)
         imc= (this->vetorPessoas[i].peso / pow(this->vetorPessoas[i].altura, 2)); 
   }
 return imc; 
}