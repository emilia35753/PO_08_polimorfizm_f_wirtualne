# Funkcje wirtualne i polimorfizm w C++ / Virtual Functions and Polymorphism in C++
 
> 🇵🇱 [Polski] | 🇬🇧 [English] (below)
 
---
 
## 🇵🇱 Opis
 
Projekt z przedmiotu **Programowanie obiektowe** poświęcony funkcjom wirtualnym, klasom abstrakcyjnym i polimorfizmowi w C++. Projekt podzielony jest na trzy pliki.
 
### Struktura projektu
 
```
├── header_PO_08_emilia_lupa.h                     # deklaracje klas
├── source_PO_08_emilia_lupa.cpp                   # implementacja metod
└── main_PO_08_emilia_lupa.cpp                     # funkcja główna
```
 
### Co robi program
 
Program zawiera cztery niezależne zadania:
 
- **`Rodzic` → `Potomek`** – demonstracja funkcji wirtualnej i słowa kluczowego `override`; wywołanie metody przez wskaźnik na klasę bazową pokazuje działanie polimorfizmu w czasie wykonania
- **`Bryla` → `Kula`, `Prostopadloscian`** – klasa abstrakcyjna z czystymi funkcjami wirtualnymi (`= 0`); klasy pochodne implementują obliczenia pola powierzchni i objętości
- **`Ksztalt` → `Kolo`, `Kwadrat`** – kolejny przykład klasy abstrakcyjnej; obiekty różnych typów wywoływane przez wskaźniki na klasę bazową (`Ksztalt*`)
- **`Question` → `Choise_question`** – rozbudowana hierarchia z wirtualnym destruktorem i przesłoniętą metodą `display()`; demonstracja kolejności wywoływania destruktorów klasy pochodnej i bazowej
### Technologie
 
- C++, STL (`vector`)
- Kompilacja: g++ / dowolny kompilator C++
### Uruchomienie
 
```bash
g++ main.cpp source.cpp -o program
./program
```
 
---
 
## 🇬🇧 Description
 
A coursework project for **Object-Oriented Programming** focused on virtual functions, abstract classes, and polymorphism in C++. The project is split across three files.
 
### Project structure
 
```
├── header_PO_08_emilia_lupa.h                     # class declarations
├── source_PO_08_emilia_lupa.cpp                   # method implementations
└── main_PO_08_emilia_lupa.cpp                     # main function
```
 
### What the program does
 
The program covers four independent tasks:
 
- **`Rodzic` → `Potomek`** – demonstrates a virtual function and the `override` keyword; calling the method through a base-class pointer shows runtime polymorphism in action
- **`Bryla` → `Kula`, `Prostopadloscian`** – an abstract class with pure virtual functions (`= 0`); derived classes implement surface area and volume calculations
- **`Ksztalt` → `Kolo`, `Kwadrat`** – another abstract class example; objects of different types called through base-class pointers (`Ksztalt*`)
- **`Question` → `Choise_question`** – an extended hierarchy featuring a virtual destructor and an overridden `display()` method; demonstrates the order in which derived and base class destructors are called
### Technologies
 
- C++, STL (`vector`)
- Build: g++ / any C++ compiler
### How to run
 
```bash
g++ main.cpp source.cpp -o program
./program
```
 
---
 
*Projekt studencki / Student project*
