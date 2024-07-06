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
    Roster& getRoster(); //roster�� ���� getter �Լ��� ������ ����ؼ� ������ �߻��Ͽ� �߰��Ͽ���.
    void print() const;
    string getName() const; //courseName ������ private�� �Ǿ������� ���� �ٸ� ������ �л� �̸��� ����ϰ��� �� �� �������� ������ �߻��Ͽ���. �̸� �ذ��ϱ� ���� getter �Լ��� ������ ����Ͽ���.
};

#endif
