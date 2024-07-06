#include "student.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Student::Student() {} //constructor -> 인자 0개
Student::Student(const string& name) : studentName(name) {} //constructor -> 인자 1개
Schedule& Student::getSchedule() {
    return schedule;
}

string Student::getName() const { //studentName 변수가 private로 되어있음에 따라 다른 곳에서 학생 이름을 사용하고자 할 때 지속적인 오류가 발생하였다. 이를 해결하기 위해 getter 함수를 정의해 사용하였다.
    return studentName;
}

void Student::print() {
    cout << "Student name: " << studentName << endl;
    cout << "List of Courses" << endl;
    schedule.print();
    cout << endl;
}
