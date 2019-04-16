#include <iostream>
using namespace std;

class A{
   int x;
  public:
    A(){
     cout << "A contructor called" <<endl;
    }
};
class B{
  static A a;
  public:
    B(){
     cout<<"b constructor called"<<endl; 
    }
    static A geta(){
      return a;
    }
};

A B::a;
//A B::geta(){
//  return a;
//}
int main(){

     B b1,b2,b3;
//     A a = b1.geta();
     A a1 = B::geta();
} 
