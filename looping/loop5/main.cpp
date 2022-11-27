#include <iostream>

using namespace std;

int main()
{
    int angka;
    cout<<"program ini berhenti jika anda menginputkan angka -99"<<endl;
    cout<<"masukan nilai anda: ";
    cin>>angka;
    while(angka != -99){
        cout<<"masukkan nilai anda: ";
        cin>>angka;
    }

    return 0;
}
