/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cAlunos.h
 * Author: adils
 *
 * Created on 25 de outubro de 2021, 16:42
 */

#ifndef CALUNOS_H
#define CALUNOS_H

class cAlunos {
public:
  
  struct Aluno{  
    char nome[40];
    long int matricula;
    float n1, n2;
 }vetorAlunos[3];
    
    cAlunos();
    cAlunos(const cAlunos& orig);
    virtual ~cAlunos();
    
    void lerdados(); 
    float ImprCal(int contador); 
    
    
private:

};

#endif /* CALUNOS_H */

