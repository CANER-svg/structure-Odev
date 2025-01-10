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
    cout << tip << " ad� ve soyad�: ";
    cin.ignore();
    getline(cin, kisi.adi_soyadi);
    cout << tip << " adresi: ";
    getline(cin, kisi.adresi);
    cout << tip << " telefon numaras�: ";
    getline(cin, kisi.telefon_no);
}

void gonderiBilgisiGir(Gonderi &gonderi) {
    cout << "G�nderi numaras�: ";
    cin >> gonderi.gonderi_no;
    cout << "G�nderi a��rl��� (kg): ";
    cin >> gonderi.agirlik;
    cout << "G�nderi hacmi (m^3): ";
    cin >> gonderi.hacim;
    cout << "G�nderi garantisi (E/H): ";
    cin >> gonderi.garanti;
    cout << "G�nderi �creti (TL): ";
    cin >> gonderi.ucret;
    cout << "G�nderen bilgilerini giriniz:\n";
    kisiBilgisiGir(gonderi.gonderen, "G�nderen");
    cout << "Al�c� bilgilerini giriniz:\n";
    kisiBilgisiGir(gonderi.alici, "Al�c�");
}

void gonderiBilgisiListele(const Gonderi &gonderi, int index) {
    cout << "G�nderi " << index + 1 << ":\n";
    cout << "G�nderi numaras�: " << gonderi.gonderi_no << "\n";
    cout << "A��rl�k: " << gonderi.agirlik << " kg\n";
    cout << "Hacim: " << gonderi.hacim << " m^3\n";
    cout << "Garanti: " << (gonderi.garanti == 'E' ? "Evet" : "Hay�r") << "\n";
    cout << "�cret: " << gonderi.ucret << " TL\n";
    cout << "G�nderen ad� ve soyad�: " << gonderi.gonderen.adi_soyadi << "\n";
    cout << "G�nderen adresi: " << gonderi.gonderen.adresi << "\n";
    cout << "G�nderen telefon numaras�: " << gonderi.gonderen.telefon_no << "\n";
    cout << "Al�c� ad� ve soyad�: " << gonderi.alici.adi_soyadi << "\n";
    cout << "Al�c� adresi: " << gonderi.alici.adresi << "\n";
    cout << "Al�c� telefon numaras�: " << gonderi.alici.telefon_no << "\n\n";
}

int main() {
   setlocale(LC_ALL,"turkish");
    Gonderi gonderiler[5];

   
    for (int i = 0; i < 5; i++) {
        cout << "G�nderi " << i + 1 << " bilgilerini giriniz:\n";
        gonderiBilgisiGir(gonderiler[i]);
    }

   
    for (int i = 0; i < 5; i++) {
        gonderiBilgisiListele(gonderiler[i], i);
    }

    return 0;
}

