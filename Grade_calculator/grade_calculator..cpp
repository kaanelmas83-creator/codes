#include <iostream>
#include "student.h"
using namespace std;
int main(){
    string name;
    int lessoncount;
    cout<<"Enter the full name of the student."<<endl;
    getline(cin,name);
    Student student(name);
    cout<<"Enter the number of lessons."<<endl;
    cin>>lessoncount;
    for(int i=0;i<lessoncount;i++){
        string lessonname;
        double midterm,final;
        cin.ignore();
        cout<<"Enter the name of the lesson "<<i+1<<"."<< endl;
        cin>>lessonname;
        cout<<"Enter the midterm grade."<<endl;
        cin>>midterm;
        cout<<"Enter the final grade."<<endl;
        cin>>final;
        student.addCourse(lessonname,midterm,final);
    }
    student.displayStudentReport();
    return 0;   
}