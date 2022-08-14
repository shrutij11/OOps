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
Base *p=&d;
p->display();
    return 0;
}
// Output: Display of base 

// Using virtual Function
#include <iostream>
using namespace std;
 class Base{
     public:
 virtual void display(){
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
Base *p=&d;
p->display();
    return 0;
}
//Output : Display of derived
//This is also an example of runtime polymorphism
