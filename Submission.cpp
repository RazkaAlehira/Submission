#include <iostream>
#include <cstring>

using namespace std;

// Tipe data struktur (struct)
struct Mahasiswa {
    char nama[50];
    int umur;
    float ipk;
};

// Tipe data union
union Data {
    int angka;
    float nilai;
};

int main() {
    // Tipe data
    int umur = 21;
    float gaji = 5000.50;

    // Array 1D
    int nilaiUjian[5] = {90, 85, 78, 92, 88};

    // Array 2D
    int matriks[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Array 3D
    int kubus[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};

    // Tipe data struktur
    struct Mahasiswa mahasiswa1;
    strcpy(mahasiswa1.nama, "John");
    mahasiswa1.umur = 20;
    mahasiswa1.ipk = 3.75;

    // Tipe data union
    union Data dataUnion;
    dataUnion.angka = 10;
    dataUnion.nilai = 3.14;

    // Variabel statis
    static int counter = 0;
    counter++;

    // Variabel dinamis (alokasi memori dinamis)
    int *arrayDinamis = new int[5];
    for (int i = 0; i < 5; i++) {
        arrayDinamis[i] = i * 2;
    }

    // Menampilkan hasil
    cout << "Umur: " << umur << endl;
    cout << "Gaji: " << gaji << endl;

    cout << "Nilai Ujian: ";
    for (int i = 0; i < 5; i++) {
        cout << nilaiUjian[i] << " ";
    }
    cout << endl;

    cout << "Matriks 2D:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Kubus 3D:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << kubus[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    cout << "Data Mahasiswa: " << mahasiswa1.nama << ", " << mahasiswa1.umur << " tahun, IPK: " << mahasiswa1.ipk << endl;

    cout << "Data Union: Angka = " << dataUnion.angka << ", Nilai = " << dataUnion.nilai << endl;

    cout << "Variabel Statis: Counter = " << counter << endl;

    cout << "Variabel Dinamis: ";
    for (int i = 0; i < 5; i++) {
        cout << arrayDinamis[i] << " ";
    }
    cout << endl;

    // Menghapus memori yang dialokasikan secara dinamis
    delete[] arrayDinamis;

    return 0;
}