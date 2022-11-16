#include <iostream>

using namespace std;

int main()
{
    /*ardian ingin membeli permen. dia memiliki uang 5.000.dia membeli permen dengan ketentuan berikut:
    * 1. jika harga permen 1.000,ia membeli 3 permen
    * 2. jika harga permen 500,ia membeli sampai uang habis.
    * 3. jika harga permen 300 maka ia hitung dulu ang yang dimiliki dalam kelipatan 300,600,900, ...)mencetak dilayar 300,600,900, ...)sampai uang yang di miliki*
    *berapakah permen yang dimiliki ardian?
    */

        while(true){
            int cash,price,buyamount;
            buyamount=0;
            cash=5000;
            cout<<"harga permen: ";
            cin>>price;

            if(price==1000){
                buyamount=3;
            }else if(price==500){
            buyamount=cash/price;
            }else if(price==300){
            int i=0;
            while(i*price<cash){
                cout<<i*price<<endl;
                i++;
            }
            buyamount=i-1;}
            cout<<"ardian membeli "<<buyamount<<"permen\n\n";
    }
    return 0;
}
