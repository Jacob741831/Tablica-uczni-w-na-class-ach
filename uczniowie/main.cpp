#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// klasa uczniow
class Uczen
{
public:
    // zmienna przechowujaca imiona uczniow
    string imie;
    // zmienna przechowujaca nazwiska uczniow
    string nazwisko;
    // zmienna przechowujaca numery uczniow
    int numer;
};
// klasa dziennika
class Dziennik
{
private:
    // maksymalna ilosc uczniow w dzienniku ustawiona na 100
    Uczen uczniowie[100];
    // licznik uczniow
    int liczbaUczniow = 0;

public:
    // funkcja dodawania uczniow
    void dodajUcznia()
    {
        if (liczbaUczniow >= 100)
        {
            cout << "Brak miejsca w tablicy!" << endl;
            return;
        }

        cout << "Podaj imie: ";
        cin >> uczniowie[liczbaUczniow].imie;

        cout << "Podaj nazwisko: ";
        cin >> uczniowie[liczbaUczniow].nazwisko;

        cout << "Podaj numer w dzienniku: ";
        cin >> uczniowie[liczbaUczniow].numer;

        liczbaUczniow++;

        cout << "Dodano ucznia!" << endl;
    }
    // funkcja usuwania ucznia po numerze
    void usunUcznia()
    {
        int nr;

        cout << "Podaj numer ucznia do usuniecia: ";
        cin >> nr;

        for (int i = 0; i < liczbaUczniow; i++)
        {
            if (uczniowie[i].numer == nr)
            {

                for (int j = i; j < liczbaUczniow - 1; j++)
                {
                    uczniowie[j] = uczniowie[j + 1];
                }

                liczbaUczniow--;

                cout << "Usunieto ucznia!" << endl;
                return;
            }
        }

        cout << "Nie znaleziono ucznia!" << endl;
    }
    // funkcja zapisujaca dane uczniow do pliku dane.txt
    void zapiszDoPliku()
    {
        ofstream plik("dane.txt");

        for (int i = 0; i < liczbaUczniow; i++)
        {
            plik << uczniowie[i].imie << " "
                 << uczniowie[i].nazwisko << " "
                 << uczniowie[i].numer << endl;
        }

        plik.close();

        cout << "Zapisano dane do pliku dane.txt" << endl;
    }
    // funkcja wyswietla dane uczniow w konsoli
    void wyswietlUczniow()
    {
        for (int i = 0; i < liczbaUczniow; i++)
        {
            cout << "Imie: " << uczniowie[i].imie
                << ", Nazwisko: " << uczniowie[i].nazwisko
                 << ", Numer: " << uczniowie[i].numer << endl;
        }
    }
};

int main()
{
    // zmienna dziennika do wywolania
    Dziennik dziennik;
    // wybor z funkcji switch
    int wybor;

    do
    {
        cout << endl;
        cout << "1. Dodaj ucznia" << endl;
        cout << "2. Usun ucznia" << endl;
        cout << "3. Wyswietl uczniow" << endl;
        cout << "4. Zapisz do pliku" << endl;
        cout << "0. Wyjscie" << endl;

        cout << "Wybor: ";
        cin >> wybor;

        switch (wybor)
        {
        case 1:
            dziennik.dodajUcznia();
            break;

        case 2:
            dziennik.usunUcznia();
            break;

        case 3:
            dziennik.wyswietlUczniow();
            break;

        case 4:
            dziennik.zapiszDoPliku();
            break;

        case 0:
            cout << "Koniec programu." << endl;
            break;

        default:
            cout << "Nieprawidlowy wybor!" << endl;
        }

    } while (wybor != 0);

    return 0;
}
