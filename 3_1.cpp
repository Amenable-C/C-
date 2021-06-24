#include <iostream>
#include <memory>
using namespace std;

void update(int* a, int* b);

int main(){
    unique_ptr<int>a{new int{}};
    unique_ptr<int>b{new int{}};
    cin >> *a;
    cin >> *b;
    update(a.get(), b.get());
    cout << *a << endl;
    cout << *b << endl;
    //unique_ptr 를 이용하여 프로그램 기능을 구현하세요!
}


void update(int* a, int* b){
    *a = *a + *b;
    *b = *a - 2*(*b);
    //이 함수를 구현하세요!

}