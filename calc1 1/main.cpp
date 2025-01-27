// Tegan Jetton 1/27/25 CIS142 C++ I
//
#include <iostream>

using namespace std;
void calcArea(double, double);
int main()
{
    double width;
    double height;
    cout << "Enter width: " << endl;
    cin >> width;
    cout << "\nEnter height: " << endl;
    cin >> height;
    calcArea(width, height);
}

void calcArea(double w, double h){
    double area = w * h;
    cout << "\nThe area of the rectangle is: " << area << endl;
}
