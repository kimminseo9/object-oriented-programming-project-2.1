#ifndef student_h
#define student_h

#include <iostream>
#include <string>
#include <vector>
#include "schedule.h"
using namespace std;

class Student {
    string studentName;
    Schedule schedule;

public:
    Student(); //constructor -> ���� 0��
    Student(const string& name); //constructor -> ���� 1��
    Schedule& getSchedule();
    string getName() const; //studentName ������ private�� �Ǿ������� ���� �ٸ� ������ �л� �̸��� ����ϰ��� �� �� �������� ������ �߻��Ͽ���. �̸� �ذ��ϱ� ���� getter �Լ��� ������ ����Ͽ���.
    void print();
};

#endif
