#include <iostream>

using namespace std;

int main()
{
    int angka,maxi,mini;
    cout<<"program ini berhenti jika anda menginputkan angka -99"<<endl;
    cout<<"masukan nilai anda: ";
    cin>>angka;
    while(angka != -99){
        cout<<"masukkan nilai anda: ";
        cin>>angka;
    }
    maxi=angka;mini=angka;
    if(angka>maxi){
        maxi=angka;
    }
    if(angka<mini){
        mini=angka;
    }
    cout<<"maximal"<<maxi<<endl;
    cout<<"minimal"<<mini<<endl;

    return 0;
}
