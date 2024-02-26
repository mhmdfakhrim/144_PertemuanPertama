#include <iostream>
using namespace std;

int main()
{//begin

    //numeric nPanjang,nLebar, nLuas
    //display 'masukkan panjang'
    //accept nPanjang
    //display 'masukkan lebar'
    //accept other
    //compute nLuas = nPanjang * nLebar
    //display 'luasnya adalah = ' * nLuas

    int nPanjang, nLebar, nLuas;
    cout << "Masukkan Panjang = ";
    cin >> nPanjang;
    cout << "Masukkan Lebar = ";
    cin >> nLebar;
    nLuas = nPanjang * nLebar;
    cout << "Luasnya adalah = " << nLuas << endl;

    system("pause");

}//end

