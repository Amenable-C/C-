#include <iostream>
#include <memory>

using namespace std;

unique_ptr<int> generate_pu_int(int arg){
    return unique_ptr<int> {new int(arg)}; // 값을 받아와서 그것을 arg에 저장하고 스마트 포인터로 가르키기
}
int main(){
    unique_ptr<int> pui{new int(3)};
    cout << *pui << endl;
    unique_ptr<int> pui2{move(pui)}; // pui가 가르키는 것이 pui2로 가는거
    cout << *pui2 << endl;
//    cout << "check the pui" << *pui << endl; // 여기는 없음.
//    cout << "check 2" << endl; // 이것이 출력이 안됨. 왜냐하면 위에서 포인터로 가르키는게 없어서 바로 에러
    unique_ptr<int> pui3{new int()};
    pui3 = move(pui2);
    cout << *pui3 << endl; // 이러면 pui3으로 간거.

    unique_ptr<int> pui4;
    pui4 = generate_pu_int(3); // 3이라는 값이 위에 arg로 들어가는 거
    cout << *pui4 << endl; 
}