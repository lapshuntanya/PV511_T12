#pragma once
#include <iostream>
using namespace std;

template <typename T>
void createMemory(T** &matr, int row, int col) {
    //Створюємо масив покажчиків
    matr = new T *[row];

    for (int i = 0; i < row; i++) {
        //Під кожний покажчик створюємо масив значень
        matr[i] = new T[col]{0};
    }
}


template <typename T>
void destroyMemory(T** &matr, int &row, int &col) {
    //видаляємо масиви значень
    for (int i = 0; i < row; i++) {
        delete[] matr[i];
    }
    //видаляємо масив покажчиків
    delete[] matr;
    matr = nullptr;
    row = col = 0;
}