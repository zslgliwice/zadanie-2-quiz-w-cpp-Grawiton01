#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;

string imie;
string odp;

void czekaj(int milisekundy) {
    usleep(milisekundy * 1000);
}

void wyswietlOdpowiedz(const string &poprawnaOdpowiedz, int &pkt) {
    string odpowiedz;
    cout << "Twoja odpowiedz: ";
    cin >> odpowiedz;

    czekaj(1000);
    system("clear");

    if (odpowiedz == poprawnaOdpowiedz) {
        cout << "Poprawna odpowiedz!" << endl;
        pkt++;
    } else {
        cout << "Zle! Poprawna odpowiedz to " << poprawnaOdpowiedz << endl;
    }

    czekaj(3000);
    system("clear");
}

int main() {
    cout << "Podaj imie: ";
    cin >> imie;
    int pkt = 0;

    system("clear");

    cout << imie << " witaj w tescie z CS:GO" << endl;
    czekaj(3000);
    system("clear");

    cout << "Jakie jest pelne rozwiniecie skrotu CS:GO?" << endl;
    cout << "a) Counter-Side: Global Offensive" << endl;
    cout << "b) Counter-Strike: Global Offensive" << endl;
    cout << "c) Counter-Strike: Golden Offensive" << endl;
    wyswietlOdpowiedz("b", pkt);

    cout << "Ile jest rang w CS:GO?" << endl;
    cout << "a) 15" << endl;
    cout << "b) 18" << endl;
    cout << "c) 16" << endl;
    wyswietlOdpowiedz("b", pkt);

    cout << "Co oznacza S w broni USP-S?" << endl;
    cout << "a) Tlumik" << endl;
    cout << "b) Secondshot" << endl;
    cout << "c) Serie" << endl;
    wyswietlOdpowiedz("a", pkt);

    cout << "Czy istnieje cos takiego jak decoy?" << endl;
    cout << "a) Tak" << endl;
    cout << "b) Nie" << endl;
    cout << "c) Nie wiem" << endl;
    wyswietlOdpowiedz("a", pkt);

    cout << "W jaki sposob mozna zdobyc staty na minusie?" << endl;
    cout << "a) Zabijajac kolege z druzyny lub zbijajac sie" << endl;
    cout << "b) Wyrzucajac bron" << endl;
    cout << "c) Nie da sie" << endl;
    wyswietlOdpowiedz("a", pkt);

    cout << "Wynik testu: " << pkt << "/5 punktow" << endl;

    return 0;
}
