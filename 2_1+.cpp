#include "pointer.h"
#include <iostream>
using namespace std;

int main_1(){
    int a, b;
    int* pA = &a;
    int* pB = &b;
    cin >> *pA >> *pB;
    update(&a, &b);
    cout << a << endl;
    cout << b << endl;
}

#include "pointer.h"
void update(int* a, int* b){
    int newA, newB;
    newA = *a + *b;
    newB = *a - *b;
    *a = newA;
    *b = newB;
}