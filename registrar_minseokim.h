#ifndef registrar_h
#define registrar_h
#include<iostream>
#include<string>
#include <vector>
#include "student.h" //해당 클래스 타입의 멤버변수를 사용하기 위함
#include "course.h" //해당 클래스 타입의 멤버변수를 사용하기 위함

using namespace std;

class Registrar {
private:
    Student s; //Student type인 멤버변수 s 선언
    Course c; //Course type인 멤버변수 c 선언
public:
    Registrar(); //constructor 선언
    void enroll(Student& s, Course& c);
};
#endif
