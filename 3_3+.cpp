#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int SIZE;
    cin >> SIZE;
    vector<int> vec1(SIZE);
    for(auto i = vec1.begin(); i != vec1.end(); ++i){
        cin >> *i;
    }

    auto start = vec1.begin();
    int erasePlace;
    cin >> erasePlace;
    vec1.erase(start+erasePlace);

    int element;
    cin >> element;

    int numbers;
    numbers = count(vec1.begin(), vec1.end(), element);
    remove(vec1.begin(), vec1.end(), element);

    cout << vec1.size() - numbers << endl;

    for(auto i = vec1.begin(); i != vec1.end()-numbers; ++i){
        cout << *i << " ";
    }
}