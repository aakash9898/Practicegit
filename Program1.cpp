#include <iostream>
using namespace std;
class Student
{
private:
    /* data */
    int studentId;
    std::string studentName;
public:
    Student(std::string name, int id) {        //sequence of accepting data should be same
        this->studentId=id;                    //take the id passed and store it in current object's studentId property
        this->studentName=name;
    }
    ~Student() {}
    //getters

    int getStudentId(){
        return this->studentId;
    }

    std::string getStudentName(){
        return this->studentName;
    }
};

int main(){
    std::cout << "Hello World\n";
    Student s1("John", 101);                   //sequence of passing data
    Student s2("Jocob", 102);

    std::cout<<"Name of s1 is\t"<<s1.getStudentName()<<"\n";
    std::cout<<"Name of s2 is\t"<<s2.getStudentName()<<"\n";
    cout<<"aakash"<<endl;
}
