#include <iostream>
                        
using namespace std;

//forward declaration
class Complex_Do;

class Complex{
    private:
        int a, b;

    public:
        //function for setting the value of a and b
        void setNumber(int a, int b){
            this->a = a;
            this->b = b;
        }

        //friend class
        friend class Complex_Do;
        

        //function for getting or printing the value of a and b
        void printNumber(){
            cout << "Your Complex Number: " << this->a << " + " << this->b << "i" << endl;
        }

};

//class that performs different operation on complex number 
class Complex_Do{
    public:
        //function for finding sum of two complex number
        Complex sumComplex(Complex o1, Complex o2){
            Complex sum;
            sum.setNumber((o1.a + o2.a), (o1.b + o2.b));

            return sum;
        }

        //function for finding the difference between two complex number
        Complex difComplex(Complex o1, Complex o2){
            Complex dif;
            dif.setNumber((o1.a - o2.a), (o1.b - o2.b));

            return dif;
        }

        //function for finding the product of two complex number
        Complex multComplex(Complex o1, Complex o2){
            Complex mult;
            mult.setNumber((o1.a * o2.a), (o1.b * o2.b));

            return mult;
        }

        //function for doing division between two complex number
        Complex divdComplex(Complex o1, Complex o2){
            Complex divd;
            divd.setNumber((o1.a / o2.a), (o1.b / o2.b));

            return divd;
        }

};

int main(){
    //Objects of complex and complex_do 
    Complex a, b, sum_c, dif_c, mult_c, divd_c;
    Complex_Do doer;

    //setting values to obj a and b
    a.setNumber(26, 45);
    b.setNumber(89, 52);

    //printing values of a and b
    a.printNumber();
    b.printNumber();

    //seprating for good output
    cout << endl;

    //sum and print
    sum_c = doer.sumComplex(a, b);
    sum_c.printNumber();

    //dif and print
    dif_c = doer.difComplex(a, b);
    dif_c.printNumber();

    //mult and print
    mult_c = doer.multComplex(a, b);
    mult_c.printNumber();

    //divd and print
    divd_c = doer.divdComplex(a, b);
    divd_c.printNumber();
                      
    return 0;
}
 