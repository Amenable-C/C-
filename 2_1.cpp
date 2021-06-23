/*
#include "pointer.h"

#include <iostream>

using namespace std;



int main(){

    int a, b;

    int* pA = &a;

    int* pB = &b;

    cin >> *pA >> *pB;

    update(&a, &b);

    cout << a << endl;

    cout << b << endl;

}*/



#include "pointer.h"

void update(int* a, int* b){

    *a = *a + *b;
    *b = *a - 2*(*b);

}

