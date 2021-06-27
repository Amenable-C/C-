#include <iostream>
#include <memory>
using namespace std;

void update(int* a, int* b);

int main(){
    unique_ptr<int> pa{new int{}};
    unique_ptr<int> pb{new int{}};
    cin >> *pa;
    cin >> *pb;
    update(pa.get(), pb.get());
    cout << *pa << endl << *pb;
}

void update(int* a, int* b){
    int newA, newB;
    newA = *a + *b;
    newB = *a - *b;
    *a = newA;
    *b = newB;
}
// 포인터를 하나만 사용해서 할 수는 없나?