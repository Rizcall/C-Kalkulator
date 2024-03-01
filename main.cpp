#include <iostream>

using namespace std;

int main()
{
   float a,b,hasil;
   char aritmatika;

   cout << " Masukkan angka pertama : ";
   cin >> a;

   cout << " Pilih operator +,-,*,/ : ";
   cin >> aritmatika;

   cout << " Masukkan angka kedua : ";
   cin >> b;

   cout << a << aritmatika << b;

   if (aritmatika = '+'){
        hasil = a + b;
   }

   else if (aritmatika = '-'){
        hasil = a - b;
   }
   else if (aritmatika = '*'){
        hasil = a * b;
   }
   else if (aritmatika = '/'){
        hasil = a / b;
   }
   else{
    cout << " Operator tidak ditemukan " << endl;
   }

   cout << " = " << hasil << endl;
}
