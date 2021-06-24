#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
// find 함수 사용하시라고 함.

int main() {
    int count[26] = {0};
    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        int t = str[i];
        //cout << t << endl;  // a는 97 z는 122
        //        auto find_it = find(begin(str), end(str), str[i]);
        t = t -97;
        //cout << t << endl;
        //cout << count[t] << endl;
        if(count[t] == 0){
            count[t] = i + 1;
        }
    }
    for(int i = 0; i < 26; i++){
        cout << count[i] << " ";
    }
}
