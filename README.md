# Dziennik uczniów – C++

## Opis projektu

Program napisany w języku C++, który umożliwia zarządzanie listą uczniów za pomocą tablicy obiektów.

Każdy uczeń posiada trzy dane:

- **Imię** – imię ucznia.
- **Nazwisko** – nazwisko ucznia.
- **Numer** – numer ucznia w dzienniku.

## Funkcjonalności

Program umożliwia:

1. **Dodawanie ucznia** – wprowadzenie imienia, nazwiska oraz numeru w dzienniku.
2. **Usuwanie ucznia** – usunięcie ucznia na podstawie numeru w dzienniku.
3. **Wyświetlanie uczniów** – wyświetlenie wszystkich zapisanych uczniów.
4. **Zapisywanie do pliku** – zapisanie danych uczniów do pliku `dane.txt`.

## Technologie

- Język programowania: C++
- Biblioteki: `iostream`, `fstream`, `string`
- Tablica statyczna o maksymalnej pojemności 100 uczniów.

## Struktura programu

- `class Uczen` – przechowuje dane ucznia:
  - `imie`
  - `nazwisko`
  - `numer`
- `class Dziennik` – zarządza uczniami i zawiera funkcje:
  - `dodajUcznia()`
  - `usunUcznia()`
  - `zapiszDoPliku()`
  - `wyswietlUczniow()`

## Menu programu

Po uruchomieniu programu dostępne są następujące opcje:

text

```text
--- DZIENNIK ---
1. Dodaj ucznia
2. Usun ucznia
3. Wyswietl uczniow
4. Zapisz do pliku
0. Wyjscie
```

## Plik z danymi

Dane uczniów zapisywane są w pliku `dane.txt`.

Przykładowa zawartość:

text

```text
Jan Kowalski 1
Adam Nowak 2
Piotr Wisniewski 3
```

## Uruchomienie programu

1. Skompiluj kod źródłowy za pomocą kompilatora C++.
2. Uruchom skompilowany program.
3. Wybierz odpowiednią opcję z menu.
4. Dodawaj, usuwaj i wyświetlaj uczniów.
5. Wybierz opcję 4, aby zapisać dane do pliku `dane.txt`.

## Autor

Projekt edukacyjny – zarządzanie uczniami w języku C++.
