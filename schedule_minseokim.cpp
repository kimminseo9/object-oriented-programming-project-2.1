#include "schedule.h"
#include "course.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Schedule::addCourse(Course* c) { //course라는 벡터에 c라는 과목을 추가하기 위한 함수
    course.push_back(c);
}

int Schedule::course_num() { //추가로 만든 해당 함수는 course 벡터의 사이즈를 출력함으로써 학생 당 수강하는 과목 수를 알 수 있도록 합니다.
    return course.size();
}

void Schedule::print() {
    for (const auto& c : course) {
        cout << c->getName() << endl;
    }
}
