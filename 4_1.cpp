#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main(){
    int N, X;
    cin >> N >> X;

    vector<double> vec;
    generate_n(back_inserter(vec), N,[](){return *(istream_iterator<double>{cin});});

    copy_if(vec.begin(), vec.end(), ostream_iterator<int>(cout," "), [=](int x){return x < X;});
}