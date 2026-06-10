#pragma once
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>
using namespace std;

//zadanie 1
class Rodzic {
public:
	virtual void Metoda() { cout << "\nMetoda klasy Rodzic"; }
};

class Potomek : public Rodzic {
public:
	void Metoda() override { cout << "\nMetoda klasy Potomek"; }
};

//zadanie 2
class Bryla {
public:
	virtual double Pole_pow() = 0;
	virtual double Objetosc() = 0;
};

class Kula : public Bryla {
private:
	double promien;
public:
	Kula(double r) : promien(r) {}
	double Pole_pow();
	double Objetosc();
};

class Prostopadloscian : public Bryla {
private:
	double a, b, h;
public:
	Prostopadloscian(double a, double b, double h) : a(a), b(b), h(h) {}
	double Pole_pow();
	double Objetosc();
};

//zadanie 3
class Ksztalt {
public:
	virtual void Oblicz_pole() = 0;
};

class Kolo : public Ksztalt {
private:
	float promien;
public:
	Kolo(float r) : promien(r) {}
	void Oblicz_pole();
};

class Kwadrat : public Ksztalt {
private:
	float a;
public:
	Kwadrat(float a) : a(a) {}
	void Oblicz_pole();
};

//zadanie 4
class Question {
private:
	string text, answer;
public:
	Question(string pyt = "", string odp = "") : text(pyt), answer(odp) {}
	virtual ~Question() { // dekonstruktor/destruktor, moze byc tylko jeden na klase, nie moze miec parametrow
		cout << "\nDestruktor klasy Question zostal wywolany\n"; //to ma sie wykonac przed zwolnienie, pamieci zajmowanej przez klase
	}
	void set_text(string question_text); //zadanie pytania
	void set_answer(string correct_response); //podanie poprawnej odpowiedzi na pytanie
	bool check_answer(string response) const; //zwroci wartosc true, jesli odpowiedz jest poprawna, w przeciwnym razie wartosc false
	virtual void display() const; //wyswietla pytanie
};

class Choise_question : public Question {
private:
	vector<string> choices; //dynamiczna tablica stringow, mozna do niej dodawac elementy w kazdej chwili ( choices.push_back("tekst") ) ale trzeba uzyc biblioteki vector, wypisuje sie je jak normalne tablice
public:
	Choise_question() : Question() {} // konstruktor z klasy podstawowej
	~Choise_question() { //po tworzeniu obiektu klasy pochodnej i wywolaniu destruktora klasy pochodnej wywola sie takze destruktor klasy podstawowej
		cout << "\nDestruktor klasy Choise_question zostal wywolany\n"; //to ma sie wykonac przed zwolnienie, pamieci zajmowanej przez klase
	}
	void add_choice(string choice, bool correct); //dodaje do pytania mozliwa odpowiedz
	void display() const; //wyswietla pytanie oraz mozliwe odpowiedzi
};