#include <iostream>
using namespace std;
 class Base{
     public:
     void display(){
         cout<<"Display of base"<<endl;
     }
     };
     class Derived: public Base{
     public:
    void display(){
         cout<<"Display of derived"<<endl;
     }
 };
int main() {
    // Write C++ code here
Derived d;
d.display(); //output:  Display of derived
    return 0;
}

// Prototype of function should be same otherwise it will become function overloading not overriding.
