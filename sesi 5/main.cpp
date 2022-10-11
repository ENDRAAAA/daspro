#include <iostream>

using namespace std;

int main()
{
    int tanggal,bulan;
    cout << "masukan tanggal: ";
    cin >> tanggal;
    cout << "maasukan bulan: ";
    cin >> bulan;

    if ((tanggal >=1 && tanggal <=31)&&(bulan==1 || bulan==3 || bulan==5 || bulan==7 || bulan==8 || bulan==10 || bulan==12))
    {
        cout << "valid";
    }
    else if ((tanggal >=1 && tanggal <=30)&&(bulan==4 || bulan==6 || bulan==9 || bulan==11))
    {
        cout << "valid" ;
    }
    else if ((tanggal>=1 && tanggal <=29)&& (bulan==2))
        cout << "valid" ;
    else {cout << "tidak valid";

    }
    return 0;
}
