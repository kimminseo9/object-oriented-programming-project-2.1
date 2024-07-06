#include "roster.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Roster::addStudent(const string& s) { //student��� ���Ϳ� s��� �л��� �߰��ϱ� ���� �Լ�
    student.push_back(s);
}

int Roster::student_num() { //�߰��� ���� �ش� �Լ��� student ������ ����� ��������ν� ���� �� �����ϴ� �л� ���� �� �� �ֵ��� �մϴ�.
    return student.size();
}

void Roster::print() const {
    for (const auto& s : student) {
        cout << s << endl;
    }
}
