#include "registrar.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Registrar::Registrar() {} //constructor ����

void Registrar::enroll(Student& s, Course& c) { //Registrar class�� enroll �Լ� ���� -> ���� ���ǿ� �� �л��� �ִ� ���� ���� ������� ���´� �ִ� ���� ���� �ο��� ������ ������ �� �ֵ��� �ۼ��Ͽ���.
    Schedule& max_subject = s.getSchedule();
    if (max_subject.course_num() >= 10) { //course_num �Լ��� ����Ͽ� �� �л��� �ִ� ���� ���� ������� ���� ������ �ɾ���.
        return;
    }

    Roster& course_max_student = c.getRoster(); 
    if (course_max_student.student_num() >= 300) { //student_num �Լ��� ����Ͽ� ���´� �ִ� ���� ���� �ο����� ���� ������ �ɾ���.
        return;
    }

    max_subject.addCourse(&c); //addCourse �Լ��� ����Ͽ� course ���Ϳ� ������ �߰��Ѵ�.

    course_max_student.addStudent(s.getName()); //addStudent �Լ��� ����Ͽ� student ���Ϳ� �л��� �߰��Ѵ�.
}

