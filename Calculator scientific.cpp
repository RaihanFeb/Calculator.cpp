#include <iostream>
#include <cmath>
using namespace std;

struct Calculator {
    Penjumlahan(int a, int b) {
        return a + b;
    }

    Pengurangan(int a, int b) {
        return a - b;
    }

    Perkalian(int a, int b) {
        return a * b;
    }

    float Pembagian(float a, float b) {
        return a / b;

    }

    Modulo(int a, int b) {
        return a % b;
    }

    akarKuadrat(double a) {
        return sqrt a;
    }
};

int main() {
    Calculator calc;
    int pilihan, a, b;
    while (true) {
        cout<<"\n----Calculator Scientific---\n";
        cout<<"By group 8 -> Xeexose"<<endl<<endl;
        cout<<"Opsi Pilihan Rumus: "<<endl<<endl;
        cout<<"1. Penjumlahan"<<endl;
        cout<<"2. Pengurangan"<<endl;
        cout<<"3. Perkalian"<<endl;
        cout<<"4. Pembagian"<<endl;
        cout<<"5. Modulo"<<endl;
        cout<<"0. Exit Calculator"<<endl;
        cout<<"Pilihan operasi (0-5): ";
        cin>>pilihan;
        if (pilihan == 0) {
            cout<<"Terimakasih telah menggunakan Calculator :)"<<endl;
            break;
        }


        cout<<"Nilai Pertama: ";
        cin>>a;
        cout<<"Nilai Kedua: ";
        cin>>b;

        switch (pilihan) {
            case 1:
            cout<<"Hasil Penjumlahan: "<<calc.Penjumlahan(a, b)<<endl;
            break;
            case 2:
            cout<<"Hasil Pengurangan: "<<calc.Pengurangan(a, b)<<endl;
            break;
            case 3:
            cout<<"Hasil Perkalian: "<<calc.Perkalian(a, b)<<endl;
            break;
            case 4:
            cout<<"Hasil Pembagian: "<<calc.Pembagian(a, b)<<endl;
            break;
            case 5:
            cout<<"Hasil Modulo: "<<calc.Modulo(a, b)<<endl;
            break;
            default: cout<<"Pilihan tidak valid"<<endl;
        }
    }
    return 0;

}
