#include "student.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Student::Student() {} //constructor -> ���� 0��
Student::Student(const string& name) : studentName(name) {} //constructor -> ���� 1��
Schedule& Student::getSchedule() {
    return schedule;
}

string Student::getName() const { //studentName ������ private�� �Ǿ������� ���� �ٸ� ������ �л� �̸��� ����ϰ��� �� �� �������� ������ �߻��Ͽ���. �̸� �ذ��ϱ� ���� getter �Լ��� ������ ����Ͽ���.
    return studentName;
}

void Student::print() {
    cout << "Student name: " << studentName << endl;
    cout << "List of Courses" << endl;
    schedule.print();
    cout << endl;
}
