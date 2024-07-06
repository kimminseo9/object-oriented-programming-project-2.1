#ifndef roster_h
#define roster_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Roster {
    vector<string> student; //student라는 벡터 선언 -> 후에 강좌 당 수강하는 학생 수를 가늠하기 위해 만든다.

public:
    void addStudent(const std::string& s);
    int student_num(); //후에 강좌 당 수강 학생 수 제한을 둘 때 사용하기 위해 추가로 해당 함수를 만들었습니다.
    void print() const;
};

#endif
