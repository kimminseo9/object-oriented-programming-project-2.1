#ifndef schedule_h
#define schedule_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Course;

class Schedule {
    string schedule_;
    vector<Course*> course; //course라는 벡터 선언 -> 후에 학생 당 수강하는 과목 수를 가늠하기 위해 만든다.
public:
    void addCourse(Course* c);
    int course_num(); //후에 학생 당 수강 과목 수 제한을 둘 때 사용하기 위해 추가로 해당 함수를 만들었습니다.
    void print();
};

#endif
