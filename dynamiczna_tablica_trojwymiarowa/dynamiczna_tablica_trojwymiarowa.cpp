#include <iostream>
using namespace std;

int main()
{

    int x = 3, y = 4, z = 5;
    int*** tab = new int** [x];

    for (int i = 0; i < x; ++i) {
        tab[i] = new int* [y];
        for (int j = 0; j < y; ++j) {
            tab[i][j] = new int[z];
            for (int k = 0; k < z; ++k) {
                tab[i][j][k] = i * y * z + j * z + k;
            }
        }
    }


    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            for (int k = 0; k < z; ++k) {
                cout << tab[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }


    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            delete[] tab[i][j];
        }
        delete[] tab[i];
    }
    delete[] tab;

}