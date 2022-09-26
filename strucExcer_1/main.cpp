/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: adils
 *
 * Created on 25 de outubro de 2021, 16:42
 */

#include <cstdlib>

#include "cAlunos.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cAlunos *obj1 = new cAlunos();
    obj1->lerdados();
    obj1->ImprCal();

    return 0;
}

