# include <iostream>
using namespace std;
int main()

{
	string sugar, rice, sardines, coffee, milk;
	float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD, usdToPhp, poundToPhp, totalCostPhp;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	
	
	usdToPhp = 1.00*56.50;
	poundToPhp = 1.00*74.72;
	
	cout << "item name:\n";
	cin >> sugar;
	cout << "Quantity you want to purchase:\t";
	cin >> sugarQty;
	sugarPriceUSD = sugarQty*usdToPhp;
	cout << "price per Item in Php:\n" << sugarPriceUSD << endl;
	
	cout << "item name:\n";
	cin >> rice;
	cout << "Quantity you want to purchase:\t";
	cin >> riceQty;
	ricePricePound = riceQty*poundToPhp;
	cout << "price per Item in Php:\n" << ricePricePound << endl;
	
	cout << "item name:\n";
	cin >> sardines;
	cout << "Quantity you want to purchase:\t";
	cin >> sardinesQty;
	sardinesPricePound = sardinesQty*poundToPhp;
	cout << "Price per Item in Php:\n" << sardinesPricePound << endl;
	
	cout << "item name:\n";
	cin >> coffee;
	cout << "Quantity you want to purchase:\t";
	cin >> coffeeQty;
	coffeePriceUSD = coffeeQty*usdToPhp;
	cout << "Price per Item in Php:\n" << coffeePriceUSD << endl;
	
	cout << "item name:\n";
	cin >> milk;
	cout << "Quantity you want to purchase:\t";
	cin >> milkQty;
	milkPriceUSD = milkQty*usdToPhp;
	cout << "Price per Item in Php:\n" << milkPriceUSD << endl;
	
		
	
	return 0;
		
	
} 