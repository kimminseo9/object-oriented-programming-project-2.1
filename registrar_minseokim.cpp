#include "registrar.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Registrar::Registrar() {} //constructor 정의

void Registrar::enroll(Student& s, Course& c) { //Registrar class의 enroll 함수 정의 -> 문제 조건에 한 학생의 최대 수강 가능 과목수와 강좌당 최대 수강 가능 인원수 조건을 수행할 수 있도록 작성하였다.
    Schedule& max_subject = s.getSchedule();
    if (max_subject.course_num() >= 10) { //course_num 함수를 사용하여 한 학생의 최대 수강 가능 과목수에 대한 제한을 걸었다.
        return;
    }

    Roster& course_max_student = c.getRoster(); 
    if (course_max_student.student_num() >= 300) { //student_num 함수를 사용하여 강좌당 최대 수강 가능 인원수에 대한 조건을 걸었다.
        return;
    }

    max_subject.addCourse(&c); //addCourse 함수를 사용하여 course 벡터에 과목을 추가한다.

    course_max_student.addStudent(s.getName()); //addStudent 함수를 사용하여 student 벡터에 학생을 추가한다.
}

