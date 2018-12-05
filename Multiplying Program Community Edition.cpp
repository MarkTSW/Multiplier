#include <iostream>
#include <string>
using namespace std;
int main() {
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
	
	

	