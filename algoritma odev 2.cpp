#include <iostream>
#include <string>
using namespace std;


struct Kumas {
    string ipliktipi;
    float dm2agirlik;
    string dokumatipi;
    string renk;
    int miktar;
};


struct Iskelet {
    string malzeme;
    string birlestirme;
    string tarz;
    string boyut;
    int miktar;
};


struct Mobilya {
    Kumas kaplama;
    Iskelet malzeme;
    int fiyat;
    int adet;
};


void veriGirisi(Mobilya &urun) {
    cout << "Kumas - Iplik tipi (ör. Pamuk, Polyester, Yün): ";
    cin >> urun.kaplama.ipliktipi;
    cout << "Kumas - DM2 Agirlik: ";
    cin >> urun.kaplama.dm2agirlik;
    cout << "Kumas - Dokuma tipi (ör. Düz, Atlama, Saten): ";
    cin >> urun.kaplama.dokumatipi;
    cout << "Kumas - Renk: ";
    cin >> urun.kaplama.renk;
    cout << "Kumas - Miktar: ";
    cin >> urun.kaplama.miktar;

    cout << "Iskelet - Malzeme (ör. Ahþap, Metal, Plastik): ";
    cin >> urun.malzeme.malzeme;
    cout << "Iskelet - Birleþtirme (ör. Çivili, Vidali, Kaynak): ";
    cin >> urun.malzeme.birlestirme;
    cout << "Iskelet - Tarz (ör. Modern, Klasik, Rustik): ";
    cin >> urun.malzeme.tarz;
    cout << "Iskelet - Boyut: ";
    cin >> urun.malzeme.boyut;
    cout << "Iskelet - Miktar: ";
    cin >> urun.malzeme.miktar;

    cout << "Fiyat: ";
    cin >> urun.fiyat;
    cout << "Adet: ";
    cin >> urun.adet;

    cout << endl;
}


void veriListele(const Mobilya &urun, int index) {
    cout << "Urun " << index + 1 << ":\n";
    cout << "Kumas - Iplik tipi: " << urun.kaplama.ipliktipi << ", DM2 Agirlik: " << urun.kaplama.dm2agirlik << ", Dokuma tipi: " << urun.kaplama.dokumatipi << ", Renk: " << urun.kaplama.renk << ", Miktar: " << urun.kaplama.miktar << "\n";
    cout << "Iskelet - Malzeme: " << urun.malzeme.malzeme << ", Birleþtirme: " << urun.malzeme.birlestirme << ", Tarz: " << urun.malzeme.tarz << ", Boyut: " << urun.malzeme.boyut << ", Miktar: " << urun.malzeme.miktar << "\n";
    cout << "Fiyat: " << urun.fiyat << ", Adet: " << urun.adet << "\n\n";
}

int main() {
	setlocale(LC_ALL,"turkish");
    
    Mobilya urunler[10];

   
    for (int i = 0; i < 10; i++) {
        cout << "Urun " << i + 1 << " bilgilerini giriniz:\n";
        veriGirisi(urunler[i]);
    }


    for (int i = 0; i < 10; i++) {
        veriListele(urunler[i], i);
    }

   
    int toplamFiyat = 0;
    for (int i = 0; i < 10; i++) {
        toplamFiyat += urunler[i].fiyat * urunler[i].adet;
    }
    cout << "10 urunun toplam fiyati: " << toplamFiyat << endl;

    return 0;
}

