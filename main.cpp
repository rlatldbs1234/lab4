#include "studentStatus.h"

namespace KimSiyun2649069 //본인이름학번의 네임스페이스
{
    bool compareStudent(const student& s1, const student& s2)
    {
        return s1.getId() == s2.getId()
        && s1.getScore() == s2.getScore()
        && s1.getGrade() == s2.getGrade();
    }
}

int main()
{
    using namespace KimSiyun2649069;
    studentStatus s1;
    s1.print();
    studentStatus s2{student{2649069, 100 , 'A'}, true};
    s2.print();

    if (compareStudent(s1.getStudent(),s2.getStudent())) 
        std::cout << "same\n";
    else 
        std::cout << "not same\n";
    return 0;
}