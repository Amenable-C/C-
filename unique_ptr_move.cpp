#include <iostream>
#include <memory>

using namespace std;

unique_ptr<int> generate_pu_int(int arg){
    return unique_ptr<int> {new int(arg)}; // return 값이 다시 또 스마트 포인터가 되야하는건가?
    // 그러면 과제4에서 int를 array로 해서 return 해야 하는거 같은데???
} // 값을 arg라는 명칭으로 받는 거임.

int main(){
    unique_ptr<int> pui{new int(3)}; // 3이라는 값을 할당하는거임....
    cout << *pui << endl; // 여기에서는 있는데
    unique_ptr<int> pui2{move(pui)}; // 여기에서 move를 해서
//    cout << "pui" << *pui << endl; // 여기에서는 없는거임!!! // 이거 출력하면 없는거라서 바로 죽음...
    cout << "pui2 : " << *pui2 << endl;

    unique_ptr<int> pui3;
    pui3 = move(pui2);
    cout << "pui3 : " << *pui3 << endl;

    unique_ptr<int> pui4;
    pui4 = generate_pu_int(3);
    cout << "pui3 : " << *pui3 << endl; // 여기서는 pui3을 move한게 아니라 자기 자신을 move.
    cout << "pui4 : " << *pui4 << endl;
}