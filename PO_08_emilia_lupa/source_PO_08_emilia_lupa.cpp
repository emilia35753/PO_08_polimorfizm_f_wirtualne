#include "header_PO_08_emilia_lupa.h"

//zadanie 2
double Kula::Pole_pow()
{
	double pole = 4 * M_PI * promien * promien * promien;
	return pole;
}

double Kula::Objetosc()
{
	double objetosc = 4 / 3 * M_PI * promien * promien;
	return objetosc;
}

double Prostopadloscian::Pole_pow()
{
	double pole = 2 * a * b + 2 * a * h + 2 * b * h;
	return pole;
}

double Prostopadloscian::Objetosc()
{
	double objetosc = a * b * h;
	return objetosc;
}

//zadanie 3
void Kolo::Oblicz_pole() {
	float pole;
	pole = M_PI * promien * promien;
	cout << "Pole kola o promieniu " << promien << " wynosi: " << pole << "\n";
}

void Kwadrat::Oblicz_pole()
{
	float pole = a * a;
	cout << "Pole kwadratu o boku " << a << " wynosi: " << pole << "\n";
}
//zadanie 4
void Question::set_text(string question_text) {
	text = question_text;
}

void Question::set_answer(string correct_response) {
	answer = correct_response;
}

bool Question::check_answer(string response) const {
	if (response == answer) {
		cout << endl << response << " to dobra odpowiedz!\n";
		return true;
	}
	else {
		cout << endl << response << " to zla odpowiedz!\n";
		return false;
	}
}

void Question::display() const {
	cout << text << "\n";
}

void Choise_question::add_choice(string choice, bool correct) {
	choices.push_back(choice);
	if (correct) {
		set_answer(choice); //gdy choice jest poprawne ustawia go jako poprawna odpowiedz (czyli set_answer)
	}
}

void Choise_question::display() const {
	Question::display();
	cout << " " << endl;
	for (int i = 0; i < choices.size(); i++) {
		cout << i + 1 << ". " << choices[i] << endl;
	}
}