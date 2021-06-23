#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    int arr[10] = {0};
    for(int i = 0; i < 10; ++i)
        cin >> arr[i];



    auto min_max = std::minmax_element(begin(arr), end(arr));
    cout<< *min_max.second << "\t" << *min_max.first;


}
