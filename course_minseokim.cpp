#include "course.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Course::Course() {}
Course::Course(const string& name, int unit) : courseName(name), numberofunits(unit) {}

Roster& Course::getRoster() { //roster�� ���� getter �Լ��� ������ ����ؼ� ������ �߻��Ͽ� �߰��Ͽ���.
    return roster;
}

void Course::print() const {
    cout << "Course Name: " << courseName << endl;
    cout << "Number of Units: " << numberofunits << endl;
    cout << "List of Students" << endl;
    roster.print();
    cout << endl;
}

string Course::getName() const { //courseName ������ private�� �Ǿ������� ���� �ٸ� ������ �л� �̸��� ����ϰ��� �� �� �������� ������ �߻��Ͽ���. �̸� �ذ��ϱ� ���� getter �Լ��� ������ ����Ͽ���.
    return courseName;
}
