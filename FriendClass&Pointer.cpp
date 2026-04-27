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

    void tampilkanLuas() {
        double luas = 0.5 * d1 * d2;
        cout << "Luas Layang-Layang: " << luas << endl;
    }

    friend void hitungKelilingGabungan(LayangLayang objL, BelahKetupat objB);
};

class BelahKetupat {
private:
    double d1, d2, sisi;

public:
    void inputData() {
        cout << "\n--- Input Belah Ketupat ---" << endl;
        cout << "Masukkan Diagonal 1: "; cin >> d1;
        cout << "Masukkan Diagonal 2: "; cin >> d2;
        cout << "Masukkan Sisi: "; cin >> sisi;
    }

    void tampilkanLuas() {
        double luas = 0.5 * d1 * d2;
        cout << "Luas Belah Ketupat: " << luas << endl;
    }

    friend void hitungKelilingGabungan(LayangLayang objL, BelahKetupat objB);
};