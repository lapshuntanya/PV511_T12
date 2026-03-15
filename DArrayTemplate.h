#pragma once
#include <iostream>
using namespace std;

template <typename T>
void createMemory(T** &matr, int row, int col) {

    //Створюємо масив покажчиків
    matr = new T*[row];

    for ( int i =0; i < row; i++) {
        //Під кожний покажчик створюємо масив значень
        matr[i] =new T[col] {0};
    }
}