#ifndef course_h
#define course_h

#include <iostream>
#include <string>
#include <vector>
#include "roster.h"
using namespace std;

class Course {
    string courseName;
    Roster roster;
    int numberofunits;

public:
    Course();
    Course(const string& name, int unit);
    Roster& getRoster(); //roster에 대한 getter 함수가 없으니 계속해서 오류가 발생하여 추가하였다.
    void print() const;
    string getName() const; //courseName 변수가 private로 되어있음에 따라 다른 곳에서 학생 이름을 사용하고자 할 때 지속적인 오류가 발생하였다. 이를 해결하기 위해 getter 함수를 정의해 사용하였다.
};

#endif
