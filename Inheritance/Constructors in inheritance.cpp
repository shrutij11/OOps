#include <iostream>
using namespace std;

class Base{
    public:
  Base(){
      cout<<"Non param of base"<<endl;
  }
    Base(int x){
      cout<<"param of base"<<x<<endl;
  }
};
class Derived :public Base{
    public:
    Derived(){
      cout<<"Non param of derived"<<endl;
  }
    Derived(int y){
      cout<<"param of base"<<y<<endl;
  } 
      Derived(int x, int y):Base(x){
      cout<<"param of base"<<y<<endl;
  } 
};
int main() {
    // Write C++ code here
  Derived d; //1
//Derived d(10); //2
//Derived d(10,11); //3
    return 0;
}
// Output 1 : 
// Non param of base
// Non param of derived

// Output 2 : 
// Non param of base
// param of base10

// Output 3 : 
// param of base10
//param of base11

