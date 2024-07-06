#ifndef roster_h
#define roster_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Roster {
    vector<string> student; //student��� ���� ���� -> �Ŀ� ���� �� �����ϴ� �л� ���� �����ϱ� ���� �����.

public:
    void addStudent(const std::string& s);
    int student_num(); //�Ŀ� ���� �� ���� �л� �� ������ �� �� ����ϱ� ���� �߰��� �ش� �Լ��� ��������ϴ�.
    void print() const;
};

#endif
