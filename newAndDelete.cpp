#include <iostream>

using namespace std;

int main(){
    cout << "Enter the length of a name" << endl;
    int length;
    cin >> length;
    char* name = new char[length + 1]; // 아... name이라는 포인터가 heap에 있는 부분을 가르킨다고...
    //그리고 그 크기가 "length + 1"인 char라고...
    cin >> name;
    cout << name << endl;
    delete [] name; // 할당한 것을 지우는거!!
}