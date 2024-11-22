# include <iostream>
using namespace std;
int main()

{
	int temperature;
	cout << "How cold is it in your area?  " << endl;
	cout << "Enter temperature: ";
	cin >> temperature;
	if (temperature >= 0 && temperature <= 35) {
			cout << "Bring a jacket";
	} else if (temperature >= 35 && temperature <= 50){
		cout << "Wear a light jacket or don't at all";
	} else if (temperature >= 50) {
			cout << "Don't bring any jacket";
		}
	
	return 0;
	
}