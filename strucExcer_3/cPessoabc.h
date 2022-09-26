/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cPessoabc.h
 * Author: adils
 *
 * Created on 30 de outubro de 2021, 18:44
 */

#ifndef CPESSOABC_H
#define CPESSOABC_H

class cPessoabc {
public:
    
    struct pessoas{
      int cpf; 
      char nome; 
    }vetorPessoas[7]; 
    
    
    cPessoabc();
    cPessoabc(const cPessoabc& orig);
    virtual ~cPessoabc();
    
    void lerDados(); 
    void ordenacaoBolha(int contador);
    int buscaBinaria(int contador,int cpfbusca);
    
    
private: 

};

#endif /* CPESSOABC_H */

