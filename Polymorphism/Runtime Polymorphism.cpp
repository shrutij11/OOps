#include <iostream>
using namespace std;
 class Car{
     public:
   virtual void start(){
         cout<<"Car Started"<<endl;
     }
     };
     class Innova: public Car{
     public:
    void start(){
         cout<<"Innova Started"<<endl;
     }
 };
      class swift: public Car{
     public:
    void start(){
         cout<<"swift Started"<<endl;
     }
 };
int main() {
    // Write C++ code here
Car *c=new Innova();
c->start();
c=new swift();
c->start();
    return 0;
}

//Output: Innova Started
//        swift Started
