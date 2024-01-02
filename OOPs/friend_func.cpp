#include <iostream>
                        
using namespace std;
 
class Complex{
    private:
        int a, b;

    public:
        //function for setting the value of var 'a' and var 'b'
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        //declaraing friend function
        friend Complex sumComplex(Complex o1, Complex o2);

        //function for printing the value of object that invoke this function
        void printNumber(){
            cout << "Complex Number: " << a << " + " << b << "i" << endl;
        }
};

//function for adding to COMPLEX objects
Complex sumComplex(Complex o1, Complex o2){
    Complex sum;
    sum.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return sum;
}

int main(){
    //objects of class Complex
    Complex num1, num2, sumN;

    //initialization of values
    num1.setNumber(2, 5);
    num2.setNumber(5, 9);
    sumN = sumComplex(num1, num2);

    //printing the values num1 and num2
    num1.printNumber();
    num2.printNumber();
    sumN.printNumber();
                    
    return 0;
}
 