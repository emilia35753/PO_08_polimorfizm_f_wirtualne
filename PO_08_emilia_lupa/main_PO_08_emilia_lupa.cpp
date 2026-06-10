#include "header_PO_08_emilia_lupa.h"

int main() {
	//zadanie 1
	/*Rodzic ro;
	Potomek po;
	
	cout << "Wywolanie metody Metoda() przez obiekty";
	ro.Metoda();
	po.Metoda();
	cout << endl;
	
	Rodzic* wsk_ro = &po;
	cout << "\nWywolanie metody Metoda() przez wskaznik";
	wsk_ro->Metoda();
	cout << endl;
	*/

	//zadanie 2
	/*Kula ku(4);
	cout << "Pole powierzchni kuli o promieniu 4 wynosi: " << ku.Pole_pow() << endl;
	cout << "Objetosc kuli o promieniu 4 wynosi: " << ku.Objetosc() << endl << endl;

	Prostopadloscian p(1, 1, 1);
	cout << "Pole powierzchni prostopadloscianu o bokach 1 x 1 x 1 wynosi: " << p.Pole_pow() << endl;
	cout << "Objetosc prostopadloscianu o bokach 1 x 1 x 1 wynosi: " << p.Objetosc() << endl;

	//Bryla b; //nie da sie bo "nie mozna utworzyc wystapienia klasy abstrakcyjnej"
	*/

	//zadanie 3
	/*Kolo kolo(3);
	Kwadrat kwadrat(3);
	Ksztalt* k1 = &kolo;
	Ksztalt* k2 = &kwadrat;

	k1->Oblicz_pole();
	k2->Oblicz_pole();
	*/

	//zadanie 4
	/*Question pytanie;
	pytanie.set_text("\nCzy koty to zwierzeta? ");
	pytanie.set_answer("Tak");
	pytanie.display();
	pytanie.check_answer("Tak");
	pytanie.check_answer("Nie");
	*/

	/*Choise_question ques;
	string odp;
	ques.set_text("\nIle jest wojewodztw w Polsce?");
	ques.add_choice("12", false);
	ques.add_choice("16", true);
	ques.add_choice("17", false);
	ques.add_choice("18", false);
	ques.display();
	ques.check_answer("16");
	ques.check_answer("18");
	//cout << "Podaj swoja odpowiedz (nie jej numer): ";
	//cin >> odp;
	//ques.check_answer(odp);
	*/



	return 0;
}