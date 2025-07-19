#include <iostream>
using namespace std;

int main()
{
int grade;
cout << "Enter Your Grade: ";
cin >> grade;

if (grade < 0 || grade > 100) {
	cout << "Bad input" << endl;
}
else if (grade >= 90) {
	cout << "You got Excellent" << endl;
}
else if (grade >= 80) {
	cout << "You got Very Good" << endl;
}
else if (grade >= 70) {
	cout << "You got Good" << endl;
}
else if (grade >= 60) {
	cout << "You got Acceptable" << endl;
}
else {
	cout << "You got Failed" << endl;
}

}
