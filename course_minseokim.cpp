#include "course.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Course::Course() {}
Course::Course(const string& name, int unit) : courseName(name), numberofunits(unit) {}

Roster& Course::getRoster() { //roster에 대한 getter 함수가 없으니 계속해서 오류가 발생하여 추가하였다.
    return roster;
}

void Course::print() const {
    cout << "Course Name: " << courseName << endl;
    cout << "Number of Units: " << numberofunits << endl;
    cout << "List of Students" << endl;
    roster.print();
    cout << endl;
}

string Course::getName() const { //courseName 변수가 private로 되어있음에 따라 다른 곳에서 학생 이름을 사용하고자 할 때 지속적인 오류가 발생하였다. 이를 해결하기 위해 getter 함수를 정의해 사용하였다.
    return courseName;
}
