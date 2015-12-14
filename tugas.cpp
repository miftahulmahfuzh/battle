//Evan Febrianto

//Membuat segitiga dengan jalur kepulangan maksimal hahaha :D

#include <iostream>
using namespace std;

int T, N;
int temp[14][14];
int max2 (int A, int B);

int main () {
    cout << "Jumlah testcase: ";
    cin >> T;   //asumsi benar, tidak ada validasi
    cout << endl << "Jumlah baris segitiga: ";
    cin >> N;   //asumsi benar, tidak ada validasi
    cout << endl;
    int i, j, k;
    for (i=0; i<=T-1; i++) {
        //inisialisasi matriks
        for (j=0; j<=14; j++) {
            for (k=0; k<=14; k++) {
                temp [j][k] = 0;
            }
        }
        //mengisi segitiga dalam matriks
        for (j=0; j<=N-1; j++) {
            for (k=0; k<=j; k++) {
                cin >> temp [j][k];
            }
        }
        //mencari nilai terbesar
        int sum (temp[0][0]);
        int memo (0);
        int kmax(0);
        for (j=1; j<=N-1; j++) {
            memo = memo + max2(temp[j][kmax], temp[j][kmax+1]);
            if (temp[j][kmax]<temp[j][kmax+1]) {
                kmax=kmax+1;
            }
        }
        sum = sum + memo;
        cout << "Jalur kepulangan terbesar adalah " << sum;
    }
}

//realisasi
int max2 (int A, int B) {
    return (A>B ? A : B);
}
