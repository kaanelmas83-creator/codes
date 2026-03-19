#include <iostream>
#include <string>
#include <vector>
using namespace std;

class grades{
    private:
    string courseName;
    double midtermGrade;
    double finalGrade;
    public:
    grades(string c_name, double mid,double fin){
        courseName=c_name;
        midtermGrade=mid;
        finalGrade=fin;   
    }
    double calcAverage() const{
        return midtermGrade*0.4+finalGrade*0.6;
    }
    string getLetterGrade() const{
        double avg=calcAverage();
        if(avg>=90){
            return "AA";
        }
        else if(avg>=80){
            return "BA";
        }
        else if(avg>=70){
            return "BB";
        }
        else if(avg>=60){
            return "CB";
        }
        else if(avg>=50){
            return "CC";
        }
        else if(avg>=40){
            return "DC";
        }
        else if(avg>=30){
            return "DD";
        }
        else {
            return "FF";
        }
    }
    void displayLessonReport()const{
        cout<<"Lesson Name = "<<courseName<<endl;
        cout<<"Average = "<<calcAverage()<<endl;
        cout<<"Letter Grade = "<<getLetterGrade()<<endl;
        cout<<"-----------------------------------"<<endl;
        
    }

};
class Student{
    private:
    string studentName;
    vector<grades> courses;
    public:
    Student(string name){
        studentName=name;
    }
    void addCourse(string name,double mid,double fin){
        courses.push_back(grades(name,mid,fin));
    }
    double calcGeneralAvg()const{
        double sum=0;
        for(int a=0;a<courses.size();a++){
            sum=sum + courses[a].calcAverage();
        }
        return sum/courses.size();
    }
    void displayStudentReport() const{
        cout<<"------Student Report------"<<endl;
        cout<<"Student Name= "<< studentName<<endl; 
        for(int i=0;i<courses.size();i++){
            courses[i].displayLessonReport();
        }  
    }
    
    


};





