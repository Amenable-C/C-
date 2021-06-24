#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int SIZE;
    cin >> SIZE;
    vector<int> vec1(SIZE);
    for(auto i = vec1.begin(); i != vec1.end(); ++i) {
        cin >> *i;
    }

    sort(begin(vec1), end(vec1));

    for(auto i = vec1.begin(); i != vec1.end(); ++i){
        cout << *i << " ";
    }

}
