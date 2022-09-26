/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cPessoas.h
 * Author: adils
 *
 * Created on 25 de outubro de 2021, 15:26
 */

#ifndef CPESSOAS_H
#define CPESSOAS_H

class cPessoas {
public:
    
    struct pessoas{
      char nome[40], sexo; 
      float altura, peso; 
      int cpf; 
    }vetorPessoas[3]; 
    

    cPessoas();
    cPessoas(const cPessoas& orig);
    virtual ~cPessoas();
    
    void lerDados();
    float localizaCalcIMC(int cpfBusca, int contador); 
    
private:

};

#endif /* CPESSOAS_H */

