#include <iostream>
using namespace std;

int main(){
    int num1, num2;
    int first, second, third;

    cin >> num1 >> num2;
    first = num2 % 10;
    second = (num2 / 10) % 10;
    third = (num2 / 100);

    cout << num1 * first << endl;
    cout << num1 * second << endl;
    cout << num1 * third << endl;
    cout << num1 * num2 << endl;
}