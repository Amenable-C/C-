#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <sstream>
#include <map>

using namespace std;
enum Grade {FRESH = 1, SOPHOMORE, JUNIOR, SENIOR};
istream& operator >> (::istream& is, Grade& grade) {
    int igrade;
    if(is >> igrade)
        grade = static_cast<Grade>(igrade);
    return is;
}

struct Student{
    string name;
    Grade grade;
    string phoneNumber;
};
int main() {
    int count = 0;
    cin >> count;

    vector<Student*> vec; //
    for(int i = 0; i < count; ++i){
        Student* pst = new Student; //pointer 하고 메모리 할당
        cin >> pst-> name >> pst->grade >> pst->phoneNumber;
        vec.push_back(pst);

    }

    for(auto& it : vec){
        cout << it->name << "\t" << it->grade << "\t" << it->phoneNumber << endl;
        // 여기서 vec가 포인터로 지정된건지 아닌지에 따라서 ->랑 . 로 구분
    }

    for(auto& it : vec){
        delete it; // heap 쓴거 삭제 해줘야 함.

    }
}
