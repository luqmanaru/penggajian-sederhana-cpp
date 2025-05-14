#include <iostream>
using namespace std;

int main() {
    string nama, jbtn;
    char gol;
    int nip, gaji, tj, tg;

    // INPUT
    cout << "         MASUKKAN DATA DIRI ANDA" << endl;
    cout << "===========================================" << endl;
    cout << " NIP             : "; cin >> nip;
    cout << " NAMA            : "; cin >> nama;
    cout << " GOLONGAN [A/B/C]: "; cin >> gol;
    cout << " GAJI POKOK      : "; cin >> gaji;
    cout << endl;

    // JABATAN BERDASARKAN GOLONGAN
    if (gol == 'A' || gol == 'a') {
        jbtn = "DIREKTUR";
    } else if (gol == 'B' || gol == 'b') {
        jbtn = "MANAGER";
    } else {
        jbtn = "STAFF";
    }

    // TUNJANGAN 2%
    tj = (gaji * 2) / 100;
    tg = gaji + tj;

    // OUTPUT
    cout << "      DATA GAJI PEGAWAI PT MITRA SARANA" << endl;
    cout << "===========================================" << endl;
    cout << " NIP            : " << nip << endl;
    cout << " NAMA           : " << nama << endl;
    cout << " GOLONGAN       : " << gol << endl;
    cout << " JABATAN        : " << jbtn << endl;
    cout << " GAJI POKOK     : " << gaji << endl;
    cout << " TUNJANGAN      : " << tj << endl;
    cout << " TOTAL GAJI     : " << tg << endl;
    cout << "===========================================" << endl;

    return 0;
}
