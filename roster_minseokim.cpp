#include "roster.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Roster::addStudent(const string& s) { //student라는 벡터에 s라는 학생을 추가하기 위한 함수
    student.push_back(s);
}

int Roster::student_num() { //추가로 만든 해당 함수는 student 벡터의 사이즈를 출력함으로써 강좌 당 수강하는 학생 수를 알 수 있도록 합니다.
    return student.size();
}

void Roster::print() const {
    for (const auto& s : student) {
        cout << s << endl;
    }
}
