#include "../tipe_data.h"
#include "menu2.h"
#include "parent2.h"
#include "child2.h"
#include "relasi2.h"
#include <iostream>

using namespace std;

void menu_2(List_parent2 &L_p2, List_child2 &L_c2, List_rel2 &L_r2) {

    adr_parent2 P_p2;
    adr_child2 P_c2;
	adr_rel2 P_r2;

    info_parent2 x_p2;
    info_child2 x_c2;

    int pilihan;
    do {
        cout << "\n==================================================\n";
        cout << "  KEANGGOTAAN DAN PEMINJAMAN \n";
        cout << "==================================================\n";
        cout << "1. Tambah Anggota Baru\n";
        cout << "2. Tampilkan List Anggota\n";
        cout << "3. Cari Anggota\n";
        cout << "4. Tambah Data Peminjaman\n";
        cout << "5. Tampilkan List Peminjaman\n";
        cout << "6. Cari Data Peminjaman\n";
        cout << "7. Menambah Peminjaman ke Anggota\n";
        cout << "8. Menghapus Peminjaman dari Anggota\n";
        cout << "9. Hapus Peminjaman\n";
        cout << "10. Tampilkan Semua Anggota dan Peminjaman\n";
        cout << "0. Kembali\n";
        cout << "Pilih modul: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
        cout << "1. Insert PARENT Baru\n";
            break;
        case 2:
        cout << "2. Show List PARENT\n";
            break;
        case 3:
        cout << "3. Search PARENT\n";
            break;
        case 4:
        cout << "4. Insert CHILD Baru\n";
            break;
        case 5:
        cout << "5. Show List CHILD\n";
            break;
        case 6:
        cout << "6. Search CHILD\n";
            break;
        case 7:
        cout << "7. Add CHILD ke dalam PARENT\n";
            break;
        case 8:
        cout << "8. Remove CHILD dari PARENT\n";
            break;
        case 9:
        cout << "9. Delete CHILD\n";
            break;
        case 10:
        cout << "10. Print All\n";
            break;
        case 0:
            cout << "Kembali ke menu utama.\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 0);
}
