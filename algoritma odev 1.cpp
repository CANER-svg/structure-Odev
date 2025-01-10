#include <iostream>
#include <string>
using namespace std;

struct Otomobil {
    string marka;
    string model;
    int yil;
    char yakit; // 'B' = Benzin, 'D' = Dizel, 'G' = Gaz, 'H' = Hibrit
    int km;
    double fiyat;
};

void veriGirisi(Otomobil &arac, const string &tip) {
    cout << tip << " otomobil marka (�r. Toyota): ";
    cin >> arac.marka;
    cout << tip << " otomobil model (�r. Corolla): ";
    cin >> arac.model;
    cout << tip << " otomobil yil (�r. 2023): ";
    cin >> arac.yil;
    cout << tip << " otomobil yakit (B= Benzin, D= Dizel, G= Gaz, H= Hibrit): ";
    cin >> arac.yakit;
    cout << tip << " otomobil km (�r. 20000): ";
    cin >> arac.km;
    cout << tip << " otomobil fiyat (�r. 150000): ";
    cin >> arac.fiyat;
}

void veriListele(const Otomobil &arac, const string &tip) {
    cout << tip << " Otomobil: " << arac.marka << " " << arac.model << ", Yil: " << arac.yil << ", Yakit: " << arac.yakit << ", KM: " << arac.km << ", Fiyat: " << arac.fiyat << endl;
}

int main() {
	setlocale(LC_ALL,"turkish");
	
    Otomobil binek;
    Otomobil suv;
    Otomobil ticari;

    cout << "L�tfen binek otomobil bilgilerini giriniz:\n";
    veriGirisi(binek, "Binek");
    cout << "\nL�tfen SUV otomobil bilgilerini giriniz:\n";
    veriGirisi(suv, "SUV");
    cout << "\nL�tfen ticari otomobil bilgilerini giriniz:\n";
    veriGirisi(ticari, "Ticari");

    cout << "\nGirilen otomobil bilgileri:\n";
    veriListele(binek, "Binek");
    veriListele(suv, "SUV");
    veriListele(ticari, "Ticari");

    return 0;
}

