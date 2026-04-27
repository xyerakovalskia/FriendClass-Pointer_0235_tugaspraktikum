#include <iostream>
#include <cmath>

using namespace std;

class BelahKetupat;

class LayangLayang {
private:
    double d1, d2, s1, s2;

public:
    void inputData() {
        cout << "--- Input Layang-Layang ---" << endl;
        cout << "Masukkan Diagonal 1: "; cin >> d1;
        cout << "Masukkan Diagonal 2: "; cin >> d2;
        cout << "Masukkan Sisi Miring A: "; cin >> s1;
        cout << "Masukkan Sisi Miring B: "; cin >> s2;
    }