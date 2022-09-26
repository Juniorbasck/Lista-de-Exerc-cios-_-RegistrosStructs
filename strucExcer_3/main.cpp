/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: adils
 *
 * Created on 25 de outubro de 2021, 23:40
 */

#include <cstdlib>

#include "cPessoabc.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cPessoabc *obj1 = new cPessoabc();
    obj1->lerDados(); 

    return 0;
}

