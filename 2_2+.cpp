#include <iostream>
using namespace std;

int main_2(){
    auto SIZE {0};
    cin >> SIZE;
    int arr[SIZE]; // 이렇게 사이즈만큼 바로 배열 만드는 거
    for(int i = 0; i < SIZE; ++i){
        cin >> arr[i];
    }

    for(int i = SIZE - 1; i >= 0; --i){
        cout << arr[i] << " ";
    }


}