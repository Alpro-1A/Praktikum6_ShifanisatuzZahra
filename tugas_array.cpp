#include <iostream>

using namespace std;

int main()
{
    cout << "##  PROGRAM MENENTUKKAN NILAI TERTINGGI PADA ARRAY ##" << endl;
    cout << "-----------------------------------------------------" << endl;

//Menentukkan banyak elemen dalam array
    int jmlh, tinggi, hasil, indeks;
    cout << "Masukkan banyaknya elemen pada array = ";
    cin >> jmlh;
    cout << endl;
    cout << "# Masukkan nilai pada indeks #" << endl;
    cout << "------------------------------" << endl;

//Menentukkan nilai pada indeks
    int Data[jmlh];
    for (int i = 0; i < jmlh; i++){
        cout << "Masukkan nilai pada indeks ke - " << i << " = ";
        cin >> Data[i];
    }

//Menentukkan nilai tertinggi
    cout << endl;
    tinggi = Data[0];
    for (int s = 0; s < jmlh; s ++){
        if (Data[s] > tinggi){
            tinggi = Data[s];
            indeks = s;
        }

    }
//output
    cout << "Nilai tertinggi dari array tersebut adalah = " << tinggi << endl;

    if (Data == 0){
        cout << "Indeks tidak ditemukkan." << endl;
    } else {
        cout << "Terdapat pada indeks ke - " << indeks << endl;
            }

    cout << endl;

    return 0;
}
