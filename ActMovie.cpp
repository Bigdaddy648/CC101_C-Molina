# include <iostream>
using namespace std;
int main()

{
	int age;
	char parent;
	float money;
	
	cout << "Enter age: ";
	cin >> age;
	
	if (age < 13) {
		cout << "With or without parent? [y = yes, n = no]" << endl;
		cin >> parent;
	} 
	if (parent == 'y') {
			cout << "G only movie \n";
		}  else if (parent == 'n') {
		cout << "G only \n";
	} else if (age >= 14 && age <= 15) {
		cout << "with or without parent? [y = yes, n = no]" << endl;
		cin >> parent;
		if (parent == 'y') {
			"cout << G,PG only movie\n";
		} else if (age >= 16) {
			cout << "G,PG,R movie\n";
		}
		cout << "Enter your money: " << endl;
		cin >> money;
		if (money <= 7.50) {
			cout << "matinee";
	}	else if (money >= 7.50) {
	cout << "Evening";}
	
	return 0;
} }