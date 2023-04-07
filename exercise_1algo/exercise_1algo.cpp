//EXERCISE 1 ALGORITMA STRUKTUR DATA
//soal no 1
//sebuah algoritma yang dibuat untuk memecahkan suatu masalah.Algoritma itu adalah alur atau langkah-langkah yang disusun secara tertulis,
//sistematis juga berurutan yang digunakan untuk menyelesaikan masalah. algoritma tersebut sangatlah penting karena jika seseorang memecahkan
//masalah dengan asal asalan tanpa langkah" algoritma yang tepat, maka dipastikan  masalah tersebut akan berantakan dan tidak tersusun secara sistematis.

//soal no 2
//strkture data linear, yaiyu struktur data yang mengorganisir data tersebut secara terutur dan tersusun dalam satu dimensi sepeerti array,lnked list,stack,queue
//strukture adata non linear, yaitu struktur data ini mengorganisir data secara tidak teratur atau tidak terurut, seperti tree, graph, dan hash table

//soal no 3
//- waktu eksekusi, merujuk pada waktu yang dibutuhkan oleh program untuk menyelesaikan tugas yang diberikan. Semakin sedikit waktu yang dibutuhkan oleh program untuk menyelesaikan tugas, semakin efisien program tersebut
//- Scalability, kemampuan suatu program untuk menangani jumlah data yang lebih besar tanpa mengorbankan waktu eksekusi dan penggunaan memori yang berlebihan
//- Algoritma yang Digunakan, algoritma yang tepat dapat mempengaruhi efisiensi program secara signifika, pada algoritma memiliki kompleksitas waktu yang lebih baik daripada yang lain tergantung pada jenis masalah yang akan diselesaikan
//- Kode, kode ode program yang dioptimalkan dengan baik dapat mempengaruhi efisiensi program secara signifikan, yaitu penggunaan kode yang tepat dan penggunaan strutur data yang tepat

//soal no 4
// saya memilih pengurutan data merge short memiliki kompleksitas waktu O(n log n), yang berarti ia dapat mengurutkan array besar dengan relatif cepat. Ini juga merupakan pengurutan yang stabil, yang berarti urutan elemen dengan nilai yang sama dipertahankan selama pengurutan, dan dapat mengurutkan data yang besar yang bisa diimplementasikan

//soal no 5
//yang masuk dalam quadratuic, bubble sort,selection sort,insertion sort,merge sort,quick sort
//yang masuk dalam loglinear, binary search,merge sorrt,heap sort

//soal no 6

#include <iostream>
using namespace std;

void selectionSort(int alya[], int n) {
    for (int ZL = 0; ZL < n - 1; ZL++) {
        int min_index = ZL;
        for (int i = ZL + 1; i < n; i++) {
            if (alya[i] < alya[min_index]) {
                min_index = i;
            }
        }
        if (min_index != ZL) {
            std::swap(alya[ZL], alya[min_index]);
        }
    }
}

int main() {
    int n;
    int alya[100];

    cout << "Masukkan jumlah data (maksimal 100): ";
    cin >> n;

    cout << "Masukkan " << n << " data:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> alya[i];
    }

    selectionSort(alya, n);

    cout << "Hasil setelah diurutkan: " << endl;
    for (int i = 0; i < n; i++) {
        cout << alya[i] << " ";
    }
    cout << endl;

    return 0;
}


