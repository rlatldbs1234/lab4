#pragma once
#include "student.h"

namespace KimSiyun2649069 //본인이름학번의 네임스페이스
{
    class studentStatus
    {
        student s;
        bool status;
    public:
        studentStatus(student s0 = student{2649069,0,'F'}, bool st = false)
            :s{s0}, status{st}
        {}
        void print() const //studentStatus::print()
        {
            s.print(); //student::print
            if(status) std::cout << " on school\n";
            else std::cout << " NOT on school\n";
        }
        const student& getStudent() const {return s;}
        void setStudent(const student& s0) {s=s0;}
    };
}