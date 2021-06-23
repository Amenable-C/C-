#include <iostream>
#include <limits>
#include <string>
#include <string.h>


using namespace std;

int main() {
    int arr[4] = {0};
    char set;
    char name[20];
    char *string1 = "int";
    char *string2 = "long";
    char *string3 = "float";
    char *string4 = "double";
    char *string5 = "quit";
    while(true){
        cin >> name;
        if(0 == stricmp(name, string1)){
            arr[0] = arr[0] + 1;
            cout << numeric_limits<int>::max() << ' ';
            cout << numeric_limits<int>::min() << endl;
        }
        else if(0 == stricmp(name, string2)){
            arr[1] = arr[1] + 1;
            cout << numeric_limits<long long>::max() << ' ';
            cout << numeric_limits<long long>::min() << endl;
        }
        else if(0 == stricmp(name, string3)){
            arr[2] = arr[2] + 1;
            cout << numeric_limits<float>::max() << ' ';
            cout << numeric_limits<float>::min() << endl;
        }
        else if(0 == stricmp(name, string4)){
            arr[3] = arr[3] + 1;
            cout << numeric_limits<double>::max() << ' ';
            cout << numeric_limits<double>::min() << endl;
        }
        else if(0 == stricmp(name, string5)){
            break;
        }
        else{
            cout << "Invalid Command";
            break;
        }

    }
    cout << "int: " << arr[0] << endl;
    cout << "long: " << arr[1] << endl;
    cout << "float: " << arr[2] << endl;
    cout << "double: " << arr[3] << endl;
}
