#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int SIZE;
    cin >> SIZE;
    vector<int> vec(SIZE);
    for(auto i = vec.begin(); i != vec.end(); ++i){
        cin >> *i;
    }

    sort(begin(vec), end(vec));

    for(auto i = vec.begin(); i != vec.end(); ++i){
        cout << *i << " ";
    }
}