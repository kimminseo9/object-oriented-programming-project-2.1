#ifndef schedule_h
#define schedule_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Course;

class Schedule {
    string schedule_;
    vector<Course*> course; //course��� ���� ���� -> �Ŀ� �л� �� �����ϴ� ���� ���� �����ϱ� ���� �����.
public:
    void addCourse(Course* c);
    int course_num(); //�Ŀ� �л� �� ���� ���� �� ������ �� �� ����ϱ� ���� �߰��� �ش� �Լ��� ��������ϴ�.
    void print();
};

#endif
