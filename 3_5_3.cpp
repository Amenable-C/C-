#include <iostream>
using namespace std;

int main(){
    int num, num1, num2;
    int sum = 0;
    int result;
    cin >> num;
    int numF = num;
    int count = 1;
    count = count;
    num1 = num / 10;
    num2 = num % 10;

    sum = num1 + num2;
    sum = sum % 10;


    result = (num2 * 10) + sum;

    while(result != numF) {
        num = result;
        count = count + 1;
        num1 = num / 10;
        num2 = num % 10;

        sum = num1 + num2;
        sum = sum % 10;


        result = (num2 * 10) + sum;


    }
    cout << count;
}
