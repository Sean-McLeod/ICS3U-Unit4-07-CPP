// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on December 2020
// This program can print from 1000 to 2000 with five integers per line

#include <iostream>

int main()  {
    // this function can print from 1000 to 2000, five integers per line

    int counter;

    // process and output
    for (counter = 1000; counter < 2001; counter++) {
        if (counter % 5 == 0) {
            std::cout << "\n";
            std::cout << counter << " ";
        } else {
            std::cout << counter << " ";
        }
        }
}
