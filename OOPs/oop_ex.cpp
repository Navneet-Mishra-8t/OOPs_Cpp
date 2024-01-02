#include <iostream>
                        
using namespace std;
 
class Employee{ //base class

    public:
        string name;
        string department;
        int star_rate;
    
    protected:
        int id_no;
        long int salary;

    public:
        //functions for getting and setting the value of id_no
        void setId_no(int id_no){
            this->id_no = id_no;
        }

        int getId_no(){
            return this->id_no;
        }

        //function for setting and getting the value of salary
        void setSalary(int salary){
            this->salary = salary;
        }

        int getSalary(){
            return this->salary;
        }

        //function for printing the details
        void printDetails(){
            cout << "Name: " << this->name << endl;
            cout << "Department: " << department << endl;
            cout << "Star Rating: " << this->star_rate << endl;
            cout << "Id Number: " << this->id_no << endl;
            cout << "Salary: " << this->salary << endl;
        }

};

class IT_Employee : public Employee{

    public:
        string department = "Information Technology";

        //function for printing the details
        void printDetails(){
            cout << "Name: " << this->name << endl;
            cout << "Department: " << department << endl;
            cout << "Star Rating: " << this->star_rate << endl;
            cout << "Id Number: " << this->id_no << endl;
            cout << "Salary: " << this->salary << endl;
        }

};

class Dev_Employee : public Employee{

    public:
        string department = "Development Department";

        //function for printing the details
        void printDetails(){
            cout << "Name: " << this->name << endl;
            cout << "Department: " << department << endl;
            cout << "Star Rating: " << this->star_rate << endl;
            cout << "Id Number: " << this->id_no << endl;
            cout << "Salary: " << this->salary << endl;
        }

};

class Org_Employee : public Employee{

    public:
        string department = "Organisation Department";

        //function for printing the details
        void printDetails(){
            cout << "Name: " << this->name << endl;
            cout << "Department: " << department << endl;
            cout << "Star Rating: " << this->star_rate << endl;
            cout << "Id Number: " << this->id_no << endl;
            cout << "Salary: " << this->salary << endl;
        }

};

class Security : public Employee{

    public:
        string department = "Security";

        //function for printing the details
        void printDetails(){
            cout << "Name: " << this->name << endl;
            cout << "Department: " << department << endl;
            cout << "Star Rating: " << this->star_rate << endl;
            cout << "Id Number: " << this->id_no << endl;
            cout << "Salary: " << this->salary << endl;
        }

};

class Peon : public Employee{

    public:
        string department = "Helper";

        //function for printing the details
        void printDetails(){
            cout << "Name: " << this->name << endl;
            cout << "Department: " << department << endl;
            cout << "Star Rating: " << this->star_rate << endl;
            cout << "Id Number: " << this->id_no << endl;
            cout << "Salary: " << this->salary << endl;
        }

};

int main(){
    cout << endl;

    //Object of class IT_Employee
    IT_Employee a;
    a.name = "Ramlal Yadav";
    a.star_rate = 4;
    a.setId_no(5658);
    a.setSalary(40000);
    a.IT_Employee :: printDetails();
    cout << endl;

    //Object of class Dev_Employee
    Dev_Employee b;
    b.name = "Mahesh Srivastava";
    b.star_rate = 3;
    b.setId_no(8545);
    b.setSalary(38000);
    b.Dev_Employee :: printDetails();
    cout << endl;

    //Object of class Org_Employee
    Org_Employee c;
    c.name = "Raman Mishra";
    c.star_rate = 5;
    c.setId_no(5850);
    c.setSalary(80000);
    c.Org_Employee :: printDetails();
    cout << endl;

    //Object of class Security
    Security d;
    d.name = "Sikander Yadav";
    d.star_rate = 4;
    d.setId_no(0231);
    d.setSalary(15000);
    d.Security :: printDetails();
    cout << endl;

    //Object of class Peon
    Peon e;
    e.name = "Raju Singh";
    e.star_rate = 6;
    e.setId_no(8523);
    e.setSalary(19000);
    e.Peon :: printDetails();

    return 0;
}
  