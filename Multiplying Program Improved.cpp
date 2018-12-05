#include <iostream>
#include<string>
using namespace std;
int main() {
	cout << "English or Bulgarian ? " << endl;
	string language;
	cin >> language;
	if (language == "English" or "english" or "eng" or "Eng" or "en" or "En" or "e" or "E" or "Mark" or "Owner") {
		int num = 3;
		cout << "Enter your number: ";
		cin >> num;
		cout << "You wrote " << num << " , is that correct ? " << endl;
		string input;
		cin >> input;
		if (input == "Yes" or "yes") {
			cout << "Proceeding" << endl;
		}
		else {
			cout << "Returning" << endl;
			return main();
		}
		int mult = (num + 1);
		while (num < 1000000) {
			cout << "The answer is: ";
			cout << num;
			cout << endl;
			num = (num * mult);
		}
		cout << "Do you wish to return ? yes or no " << endl;
		string cont;
		cin >> cont;
		if (cont == "Yes" or "yes") {
			cout << "Returning ... " << endl;
			return main();
		}
		else {
			cout << "Goodbye " << endl;
			return 0;
		}

	}
	else if (language == "Bulgarian" or "bulgarian" or "Bg" or "BG" or "bg" or "B" or "b" or "teacher") {
		int num = 3;
		cout << "Vuvedi chislo: ";
		cin >> num;
		cout << "Vie vuvedohte " << num << " , nali ? " << endl;
		string input;
		cin >> input;
		if (input == "Da" or "da") {
			cout << "Programata produljava " << endl;
		}
		else {
			cout << "Vrushtane" << endl;
			return main();
		}
		int mult = (num + 1);
		while (num < 1000000) {
			cout << "Otgovora e: ";
			cout << num;
			cout << endl;
			num = (num * mult);
		}
		cout << "Iskash li da produljish ? da ili ne " << endl;
		string cont;
		cin >> cont;
		if (cont == "Da" or "da") {
			cout << "Vrushtane ... " << endl;
			return main();
		}
		else {
			cout << "Dovijdane " << endl;
			return 0;
		}
		return main();
	}
}