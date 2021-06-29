#include <iostream>
#include <memory>

using namespace std;

int main_1(){
    unique_ptr<int> pui {new int(3)};
    cout << *pui << endl; // 이것도 포인터라서 *를 붙여야지 값이 출력되는거 같은데?

    auto pui2 = make_unique<int>(3);
    cout << *pui2 << endl;

    unique_ptr<string> pustr{new string}; // 여기서 heap에 메모리 할당을 해준거 같음.
    pustr->assign("hello world");
    cout << *pustr << endl;

    unique_ptr<int[]> puarr{new int[3]}; // 여기서는 int가 아니라 array이고, array안에 값이 int.
    for(int i =0; i < 3; ++i){
        puarr[i] = i + 2;
    }
    cout << puarr[0] << endl; // 배열의 인덱스 값이 포인터의 값이 되므로, 이렇게 출력
    // 일반적으로 스마트 포인터는 대입이 안됨. 그거를 해결하기 위해 move 사용

}
