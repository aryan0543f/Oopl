/*/Title :  Implement a class Complex which represents the Complex Number data type.             
Implement the following operations : 
1. A constructor (including a default constructor which creates the complex number 0+0i). 
2. Overloaded operator + to add two complex numbers. 
3. Overloaded operator * to multiply two complex numbers. 
4. Overloaded <<and>>to print and read complex numbers.*/
#include <iostream>
using namespace std;
//Creating a class complex 
class Complex{
private:
int real;
int imag;
public:
//Default Constructor which creates complex number 0 + 0i
Complex() : real(0), imag(0) {}
//Member function
void setValue(int,int);
void display();
//Opearator Overloading
Complex operator* (Complex &b);
Complex operator+ (Complex &d);
//Friend Function
friend void operator<<(ostream &output,Complex &s);
friend void operator>>(istream &input,Complex &q);
};
//Member Function Definitions
void Complex::setValue(int c, int d){
    real = c;
    imag = d;
}
void Complex::display(){
    cout<<"Complex Number is "<<real<<" + "<<imag<<"i"<<endl;
}
//Friend Function Definiton
void operator<<(ostream &output,Complex &s){
    output<<s.real<<"+"<<s.imag<<"i";
}
void operator>>(istream &input,Complex &q){
    input>>q.real>>q.imag;
}
//operator Overloading definitons
Complex Complex::operator*(Complex &b){
    Complex c;
    c.real = real * b.real - imag * b.imag; // Correct multiplication formula
    c.imag = real * b.imag + imag * b.real; // Correct multiplication formula
    return c;
}

Complex Complex::operator+(Complex &d){
    Complex c;
    c.real = real + d.real;
    c.imag = imag + d.imag;
    return c;
}
//Main Function
int main(){
    Complex c1,c2,c3,c4;
    //Input first complex number
    cout<<"Enter the first number"<<endl;
    cin>>c3;
    cout<<"First Object is:\n"<<c3;
    //Input second complex number
    cout<<"\nEnter the second number"<<endl;
    cin>>c4;
    cout<<"Second Object is:\n"<<c4;
    //Perform Addition and multiplication
    c1 = c3 + c4;
    c2 = c3 * c4; 
    //OUTPUT RESULT
    cout<<"\nResults are: Addition is:"<<c1;
    cout<<"\nMultiplication is:"<<c2;
    return 0;
}