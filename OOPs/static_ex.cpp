#include <iostream>
                        
using namespace std;

class ISRO{
    
    //static vars
    public:
        static int numberOfEmployee;
    
    protected:
        int numberOfMissions;
        float success_rate;

    public:
        //function for setting and getting the value of numberOfmissions
        void setNumberOfMissions(int n){
            numberOfMissions = n;
        }

        int getNumberOfMissions(){
            return numberOfMissions;
        }

        //function for getting and setting the value of success_rate
        void setSuccess_rate(int sr){
            success_rate = sr;
        }

        float getSuccess_rate(){
            return success_rate;
        }

        void printDetails_ISRO(){
            cout << "ISRO: Indian Space Research Organisation" << endl;
            cout << "Number Of Employees (At This Time): " << numberOfEmployee << endl;
            cout << "Number Of Missions: " << numberOfMissions << endl;
            cout << "Success Rate: " << success_rate << endl;

        }
        
};

int ISRO :: numberOfEmployee;

class ISRO_Employee : public ISRO{
    public:
        string name;
        string post;
        string work;
        float star_rate;

    protected:
        long int salary;
        int id;

    public:
        //function for gettiing and setting the value of salary
        void setSalary(int sl){
            salary = sl;
        }

        long int getSalary(){
            return salary;
        }

        //function for setting nad getting the value of id
        void setId(int n){
            id = n;
        }

        int getId(){
            return id;
        }

        //function for printing the details
        void printDetails(){
            cout << "Name: " << name << endl;
            cout << "Post: " << post << endl;
            cout << "Work: " << work << endl;
            cout << "Star Ratings: " << star_rate << endl;
            cout << endl;
            
            numberOfEmployee++;

            cout << "Number Of Employees: " << numberOfEmployee << endl;
            cout << endl;

        }

};
 
int main(){
    ISRO isro;
    isro.setNumberOfMissions(197);
    isro.setSuccess_rate(90.40);
    isro.printDetails_ISRO();

    cout << endl;
    cout << "Employees-> " << endl;                    
    cout << endl;

    ISRO_Employee a;
    a.name = "Navneet Mishra";
    a.post = "C.E.O";
    a.work = "Superviser Of All Work";
    a.star_rate = 6.8;
    a.printDetails();

    ISRO_Employee b;
    b.name = "Snajay Kumar";
    b.post = "Managing";
    b.work = "Structural Desiginer";
    b.star_rate = 5.9;
    b.printDetails();

    ISRO_Employee c;
    c.name = "Ramlal Yadav";
    c.post = "Labour";
    c.work = "Labour";
    c.star_rate = 7;
    c.printDetails();

    ISRO_Employee d;
    d.name = "Raju Yadav";
    d.post = "Tele-Communication Head";
    d.work = "Communication Management";
    d.star_rate = 6.7;
    d.printDetails();

    ISRO_Employee e;
    e.name = "Keshav Agrawal";
    e.post = "Control Head";
    e.work = "Supervises Control Of Spacecrafts";
    e.star_rate = 5.9;
    e.printDetails();

    return 0;
}
 