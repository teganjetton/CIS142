// Author: Tegan Jetton
#include <iostream>

using namespace std;

int main()
{
    int Hours;
    double PayRate;
    double Payment;

    cout << "Enter hours worked this week (integer): ";
    cin >> Hours;
    cout << "Enter pay rate (decimal): ";
    cin >> PayRate;
    Payment = Hours * PayRate;

    cout << "\nYour payment for your undervalued labor is: $" << Payment << endl;
    cout << "...except you forgot taxes. Here's the actual amount lol: $" << Payment * .75 << "\n" << endl;
}
