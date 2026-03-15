#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
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

template <typename  T>
void randArray(T** matr, int row, int col, int A = 1, int B = 10) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            matr[i][j] = rand()%(B-A +1) + A;
        }
    }
}

template <typename T>
void printArray(T** matr, int row, int col, int c_width = 3) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout.width(c_width);
            cout << matr[i][j];
        }
        cout << endl;
    }
    cout << "\n\n";
}