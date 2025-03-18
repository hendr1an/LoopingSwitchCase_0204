#include <iostream>
using namespace std;

double hitungIpk(double total, int sks)
{
    return total / sks;
}

string predikat (double ipk){
    if (ipk < 10){
        return "memuaskan";
    }
    else{
        return "cumlaude";
    }
}

int main()
{
    char pilihan;
    int sks;
    double total;
    do
    {
        cout << "Pilih Menu" << endl;
        cout << "1. Cek nilai IPK" << endl;
        cout << "2. Cek predikat kelulusan" << endl;
        cout << "3. Keluar" << endl;

        cout << "masukkan pilihan (1/2/3) : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case '1':
            
            cout << "masukkan total nilai = ";
            cin >> total;
            cout << "masukkan jumlah sks = ";
            cin >> sks;

            cout << "Nilai Ipk = " << hitungIpk(total, sks);
            break;
        case '2':
            cout << "Predikat anda adalah " << predikat(hitungIpk(total,sks)) << endl;
            break;
        case '3':
            break;
        default:
            cout << "pilihan anda salah " << endl;
            break;
        }
    }while (pilihan != 3);
    
}