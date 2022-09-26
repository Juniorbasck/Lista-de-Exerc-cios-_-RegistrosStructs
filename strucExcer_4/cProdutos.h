/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cProdutos.h
 * Author: adils
 *
 * Created on 30 de outubro de 2021, 20:35
 */

#ifndef CPRODUTOS_H
#define CPRODUTOS_H

class cProdutos {
public:
    

  struct pessoas{
     char nome[40];  
     float preco; 
     int codigo; 
  }vetorProdutos[3];
    
    cProdutos();
    cProdutos(const cProdutos& orig);
    virtual ~cProdutos();
    
    void lerDados();
    void imprimirDados(int contador); 
    int buscaBinaria(int contador, int codigoBusc); 
    void ordenarbolha(int contador);
    
    
private:
 
};

#endif /* CPRODUTOS_H */

