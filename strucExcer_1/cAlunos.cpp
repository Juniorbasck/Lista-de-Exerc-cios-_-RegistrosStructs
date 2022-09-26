/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cAlunos.cpp
 * Author: adils
 * 
 * Created on 25 de outubro de 2021, 16:42
 */

#include "cAlunos.h"
#include <iostream>

using namespace std; 

cAlunos::cAlunos() {
}

cAlunos::cAlunos(const cAlunos& orig) {
}

cAlunos::~cAlunos() {
}

void cAlunos::lerdados(){
    
   int contador=0;  
   char opcao;  
   
    do{
       cout<<"digite o nome"<<endl; 
       cin>>this->vetorAlunos[contador].nome;
       
       cout<<"digite a matricula"<<endl; 
       cin>>this->vetorAlunos[contador].matricula;
       
       cout<<"digite a primeira nota"<<endl; 
       cin>>this->vetorAlunos[contador].n1;
       
       cout<<"digite a segunda nota"<<endl; 
       cin>>this->vetorAlunos[contador].n2;
       
       contador++; 
       
       cout<<"deseja cotinuar cadastrando? S para continuar"endl; 
       cin>>opcao;  
  
    }while((opcao == 'S')&&(contador<3)); 
   
   cout<<this->ImprCal(contador);    
   
}

float cAlunos::ImprCal(int contador){
    
    float media; 
    
    for (int i=0; i<contador; i++){
       cout<<this->vetorAlunos[contador].nome;
       cout<<this->vetorAlunos[contador].matricula;
       media = (vetorAlunos[contador].n1 + vetorAlunos[contador].n2)/2;
       cout<<media;    
    }
}