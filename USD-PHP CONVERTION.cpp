#include <iostream>
using namespace std;
int main()

{
	float usd, php;
	const float conversionRate = 56.50;
	
	cout << "Enter amount in USD: ";
	cin >> usd;
	
	php = usd * conversionRate;
	
	cout << usd << "USD is equal to" << php << "PHP." << endl;
	
	return 0;

}