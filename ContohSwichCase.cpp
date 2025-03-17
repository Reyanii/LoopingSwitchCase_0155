#include <iostream>
using namespace std;

double hitungIpk(double total, int sks, )
{
    return total / sks;
}

string predikat (double Ipk){
    if (Ipk < 10 ){
        return "Memuaskan";
    }
    else{
        return "Cuml"
    }
}
 
int main()
{
    int pilihan;
    int sks;
    double total;
    do
    {
      cout << "Pilihan Menu"<< endl;
      cout << "1. Cek nilai IPK" << endl;
      cout << "2. Cek Predikat Kelulusan" << endl;
      cout << "3. Keluar";

      cout << "masukan pilihan (1/2/3) : ";
      cin >> Pilihan

      switch (Pilihan)
      {
      case '1':
        
        cout << "Masukan total nilai = ";
        cin >> total;
        cout << "Masukan jumlah sks = ";
        cin >> sks;

        cout << "Nilai Ipk = " << hitungIPK(total,sks);
        break;
      case '2':
        cout << "Predikat anda adalah" << endl;
         break;
      case '3':
        break:

      default:
        cout << "Pilihan anda salah" << endl
        break;
      }
        /* code */
    } while (pilihan !=3);
    
}

