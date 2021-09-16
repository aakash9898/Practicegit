#include <iostream>

class Employee
{
    private:
    /*
        assign designation and projectName to manager. Forward name argument to parent class
    */
        std::string employeeName;
        std::string employeeId;
    public:
        Employee(std::string name,std::string id):employeeName(name),employeeId(id){
            std::cout << "Employee parameterized constructor called " << "\n";
        }
        Employee(std::string name):employeeName(name){
            std::cout << "Employee constructor with a single parameter 'Name' was called" <<"\n";
        }
        ~Employee() {}
};

class Manager : public Employee
{
    private:
        std::string designation;
        std::string projectName;
    public:
        Manager(std::string name, std::string desig, std::string project):designation(desig),projectName(project),Employee(name){}  //Employee(name) this is constructor delegation by writing name of constructor
        ~Manager() {}
};

int main(){
    Manager m1("Harshit","IT Manager","c++"); //to create object of manager class we need to provide designation and project name
    std::cout << "Manager constructor called " << "\n";
}

/*
Fruits

Orange

Orange is a type of Fruit?

                        Vehicle
                        ^
                        |
                        | (generalizaton)
                        |
                Bus Car Bike Train(types of transport modes)

John : I have a vehicle now. Purchased it yesterday
Jacob : Great, what type?
John : oh, its a new car.

-----------------------------------------------------------------------------------------------------------------------
Generalization (upcasting) ----> referring to general category of something, for example we can ORANGE as a FRUIT

Specialization (downcasting) ----> we describe a category into more detail by mentioning the specific type to it.
                        example - Mentioning the type of VEHICLE as CAR.

-------------------------------------------------------------------------------------------------------------------------
*/