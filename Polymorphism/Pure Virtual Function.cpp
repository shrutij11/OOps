#include <iostream>
using namespace std;
 class Car{
     public:
   virtual void start()=0;
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

// We cannot create a obj of car because it is abstract class but we can create pointer of it
