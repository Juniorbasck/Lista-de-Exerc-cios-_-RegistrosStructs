/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: adils
 *
 * Created on 30 de outubro de 2021, 19:49
 */

#include <cstdlib>

#include "cProdutos.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    cProdutos *obj1 = new cProdutos();
    obj1->lerDados(); 

    return 0;
}

