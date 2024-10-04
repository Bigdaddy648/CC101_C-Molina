#include <iostream>
using namespace std;
int main()

{
	string nickname, cyl, school;
	
	cout << "Nickname: ";
	cin >> nickname;
	
	cout << "Course, year level: ";
	cin >> cyl;
	
	cout << "School: ";
	cin >> school;
	
	cout << "Wow congrats" <<nickname<< "!" <<cyl<< "is a nice course, and you are studying in" <<school<< "which is one of the Center of Excellence in Tertiary education" << endl;
	
	return 0;
}