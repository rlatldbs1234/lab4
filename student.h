#pragma once //header guard
#include <iostream>

namespace KimSiyun2649069 //본인이름학번의 네임스페이스
{
    class student 
    {
        int id {};
        int score {};
        char grade {};
        void testId() {// id(1000000~9999999): 7 digits
            if (id < 1000000 || id > 9999999) {
                std::cout << "Invalid ID\n";
                std::exit(1);
            }
        }

        void testScore() {// score(0~100)
            if (score < 0 || score > 100) {
                std::cout << "Invalid score\n";
                std::exit(1);
            }
        }

        void testGrade() {// grade('A'~'F')
            if (grade < 'A' || grade > 'F') {
                std::cout << "Invalid grade\n";
                std::exit(1);
            }
        }
    
    public:
        student(int d = 2649069, int s = 0, char g = 'F')
            :id{d}, score{s}, grade{g}
            {
                testId(); testScore(); testGrade();
            }
        void input(){
            std::cout << "Enter ID: ";
            std::cin >> id; testId();
            std::cout << "Enter score: ";
            std::cin >> id; testScore();
            std::cout << "Enter grade: ";
            std::cin >> id; testGrade();
        }
        void setId(const int d){id = d; testId();}
        void setScore(int s){score = s; testScore();}
        void setGrade(char g){grade = g; testGrade();}
        void print() const {std::cout << id << ", " << score << ", " << grade << "\n";}
        int getId() const {return id;}
        int getScore() const {return score;}
        char getGrade() const {return grade;}
    };
}