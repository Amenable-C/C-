#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int count[26] = {0};
    string str;
    cin >> str;

    for(int i{0}; i < str.size(); i++){
        int t {str[i]};
        t = t - 97;
        if(count[t] == 0){
            count[t] = i + 1;
        }
    }
    for(int i{0}; i < 26; ++i){
        cout << count[i] << " ";
    }
}