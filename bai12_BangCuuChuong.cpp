﻿#include <iostream>
using namespace std;

int main() {
    for (int i = 2; i <= 9; i++) {
        cout << "Bang cuu chuong " << i << ":" << endl;
        for (int j = 2; j <= 9; j++) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}