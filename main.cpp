#include "DArrayTemplate.h"

int main() {
    srand(time(0));

    int row = 0, col = 0;
    cout << "input row: "; cin >> row;
    cout << "input col: " ; cin >> col;

    int** m = nullptr;
    cout << "Memory: " << m << endl;
    createMemor(m, row, col);
    cout << "Memory: " << m << endl;

    randArray(m, row, col);
    printArray(m, row, col);
    cout << "Memory: " << m << endl;


    destroyMemor(m, row, col);
    cout << "Memory: " << m << endl;

    return 0;

}