/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cBanco.h
 * Author: adils
 *
 * Created on 30 de outubro de 2021, 21:24
 */

#ifndef CBANCO_H
#define CBANCO_H

class cBanco {
public:
    
   struct pessoas{
      char nome[40];
      int cpf;  
      int deposito=0; 
   }vetorConta[3]; 
    
    
    cBanco();
    cBanco(const cBanco& orig);
    virtual ~cBanco();
    
    void lerDados();
    float depoSaqeu(int deposito);
    
private:

};

#endif /* CBANCO_H */

