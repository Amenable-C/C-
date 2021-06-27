#include <iostream>
#include <array>

using namespace std;

int main(){
    int SIZE = 0;
    cin >> SIZE;
    int* arr = new int[SIZE]; // new는 주소를 리턴해주기 때문에 변수는 포인터야 함.
    for(int i = 0; i < SIZE; i++){
        cin >> arr[i];
    }
    cout << *(arr+2) << endl; // heap이 아니라 그냥 바로 저장된거 같은데???
    // 아님아님. 주소를 받아서 heap에서 내가 +2 해준거임.
    // 위에서 동적할당 해준거기 때문에, 바로 heap로 넘어가는 거임.
    // stack의 자리에서 생기는게 아니라, stack에서 바로 heap로 넘어가는 거임 // heap에서 생기는 거
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
    delete[] arr;
}