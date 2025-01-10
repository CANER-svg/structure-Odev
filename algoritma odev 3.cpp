#include <iostream>
#include <string>
using namespace std;


struct Kisi {
    string adi_soyadi;
    string adresi;
    string telefon_no;
};


struct Gonderi {
    int gonderi_no;
    float agirlik;
    float hacim;
    char garanti; 
    float ucret;
    Kisi gonderen;
    Kisi alici;
};


struct Kurye {
    string adi_soyadi;
    string telefon_no;
};


void kisiBilgisiGir(Kisi &kisi, const string &tip) {
    cout << tip << " adý ve soyadý: ";
    cin.ignore();
    getline(cin, kisi.adi_soyadi);
    cout << tip << " adresi: ";
    getline(cin, kisi.adresi);
    cout << tip << " telefon numarasý: ";
    getline(cin, kisi.telefon_no);
}

void gonderiBilgisiGir(Gonderi &gonderi) {
    cout << "Gönderi numarasý: ";
    cin >> gonderi.gonderi_no;
    cout << "Gönderi aðýrlýðý (kg): ";
    cin >> gonderi.agirlik;
    cout << "Gönderi hacmi (m^3): ";
    cin >> gonderi.hacim;
    cout << "Gönderi garantisi (E/H): ";
    cin >> gonderi.garanti;
    cout << "Gönderi ücreti (TL): ";
    cin >> gonderi.ucret;
    cout << "Gönderen bilgilerini giriniz:\n";
    kisiBilgisiGir(gonderi.gonderen, "Gönderen");
    cout << "Alýcý bilgilerini giriniz:\n";
    kisiBilgisiGir(gonderi.alici, "Alýcý");
}

void gonderiBilgisiListele(const Gonderi &gonderi, int index) {
    cout << "Gönderi " << index + 1 << ":\n";
    cout << "Gönderi numarasý: " << gonderi.gonderi_no << "\n";
    cout << "Aðýrlýk: " << gonderi.agirlik << " kg\n";
    cout << "Hacim: " << gonderi.hacim << " m^3\n";
    cout << "Garanti: " << (gonderi.garanti == 'E' ? "Evet" : "Hayýr") << "\n";
    cout << "Ücret: " << gonderi.ucret << " TL\n";
    cout << "Gönderen adý ve soyadý: " << gonderi.gonderen.adi_soyadi << "\n";
    cout << "Gönderen adresi: " << gonderi.gonderen.adresi << "\n";
    cout << "Gönderen telefon numarasý: " << gonderi.gonderen.telefon_no << "\n";
    cout << "Alýcý adý ve soyadý: " << gonderi.alici.adi_soyadi << "\n";
    cout << "Alýcý adresi: " << gonderi.alici.adresi << "\n";
    cout << "Alýcý telefon numarasý: " << gonderi.alici.telefon_no << "\n\n";
}

int main() {
   setlocale(LC_ALL,"turkish");
    Gonderi gonderiler[5];

   
    for (int i = 0; i < 5; i++) {
        cout << "Gönderi " << i + 1 << " bilgilerini giriniz:\n";
        gonderiBilgisiGir(gonderiler[i]);
    }

   
    for (int i = 0; i < 5; i++) {
        gonderiBilgisiListele(gonderiler[i], i);
    }

    return 0;
}

