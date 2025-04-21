#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter Your Grade: ";
    cin >> grade;

    if (grade >= 90 && grade <= 100)
        cout << "You got: A ";
    else if (grade >= 80 && grade <= 90)
        cout << "You got: B";
    else if (grade >= 70 && grade <= 80)
        cout << "You got: C";
    else if (grade >= 60 && grade <= 70)
        cout << "You got: D";
    else if (grade < 60)
        cout << "You got: F";
    else
        cout << "This Is not Found";
}