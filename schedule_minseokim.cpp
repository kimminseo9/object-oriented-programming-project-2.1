#include "schedule.h"
#include "course.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Schedule::addCourse(Course* c) { //course��� ���Ϳ� c��� ������ �߰��ϱ� ���� �Լ�
    course.push_back(c);
}

int Schedule::course_num() { //�߰��� ���� �ش� �Լ��� course ������ ����� ��������ν� �л� �� �����ϴ� ���� ���� �� �� �ֵ��� �մϴ�.
    return course.size();
}

void Schedule::print() {
    for (const auto& c : course) {
        cout << c->getName() << endl;
    }
}
