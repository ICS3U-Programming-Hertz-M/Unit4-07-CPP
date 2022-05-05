// Copyright (c) 2022 Hertz All rights reserved.
//
// Created by: Hertz Antonella
// Created on: may,5, 2022.
// This program print a new line evry time the number is
// divisible  by 5 0r equal to 1000
#include <iostream>

int main() {
    int counter;
    for(counter = 1000; counter <= 2000;counter ++) {
        
        if (counter % 5== 0 and counter != 1000) {
            std::cout << std::endl;
        }  

        std::cout << counter << " " ;
    }
}

