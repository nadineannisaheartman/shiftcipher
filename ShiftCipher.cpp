/*  Nama      : Nadine Annisa Heartman
    NPM       : 140810190004
    Kelas     : A
    Deskripsi : Program Shift Cipher Enkripsi dan Dekripsi */


#include <iostream>
using namespace std;

// berfungsi untuk merubah plainteks ke cipherteks

string enkripsi(string plainTeks, int k){
  string cipherTeks = "";
  for(int i=0; i<plainTeks.size(); i++){
    if(isupper(plainTeks[i])){
        cipherTeks += char(int(plainTeks[i]+k-65)%26+65);
    }
    
    else{
        cipherTeks += char((int(plainTeks[i]))); // berfungsi untuk menambahkan spasi
    }
  }
    return cipherTeks;
}

// berfungsi untuk merubah cipherteks ke plainteks

string dekripsi(string cipherTeks, int k){
  string plainTeks = "";
  for(int i=0; i<cipherTeks.size(); i++){
    if(isupper(cipherTeks[i])){
      plainTeks += char((int(cipherTeks[i]-k-65)%26+26)%26+65);
    }
    else{
      plainTeks += char((int(cipherTeks[i]))); // berfungsi untuk menambahkan spasi
    }
  }
    return plainTeks;
}

int main(){
    bool isLoop = true;
    char x;
    while (isLoop == true){
    string plainTeks;
    cout << endl;
    cout << "Nama               : Nadine Annisa Heartman\n";
    cout << "NPM                : 140810190004\n";
    cout << "Kelas              : A\n";
    cout << "Deskripsi          : Program Shift Cipher Enkripsi dan Dekripsi\n";
    cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
    cout << "Input Plainteks    : ";

    getline(cin, plainTeks);
    int k;
    cout << "Input Nilai k      = ";
    cin >> k;
    cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";

    string cipherTeks = enkripsi(plainTeks, k);
    string plain_Teks = dekripsi(cipherTeks, k);

    cout << "Hasil Enkripsi     : " << cipherTeks;
    cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
    cout << "Hasil Dekripsi     : " << plain_Teks;
    cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
    do{
        cout << "Apakah akan diulang? (Y/N)\n";
        cin >> x;
        cin.ignore();
        if (x == 'y' || x == 'Y'){
        isLoop = true;
    }
        else if (x == 'n' || x == 'N'){
        isLoop = false;
        }
    }
        while (x != 'y' && x != 'Y' && x != 'n' && x != 'N');
    }
}