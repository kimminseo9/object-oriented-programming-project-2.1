#ifndef registrar_h
#define registrar_h
#include<iostream>
#include<string>
#include <vector>
#include "student.h" //�ش� Ŭ���� Ÿ���� ��������� ����ϱ� ����
#include "course.h" //�ش� Ŭ���� Ÿ���� ��������� ����ϱ� ����

using namespace std;

class Registrar {
private:
    Student s; //Student type�� ������� s ����
    Course c; //Course type�� ������� c ����
public:
    Registrar(); //constructor ����
    void enroll(Student& s, Course& c);
};
#endif
