#include <iostream>
using namespace std;

class complex{
     double real,img;
  public:
     complex(){
     }
     complex(double r,double i){
       real= r;
       img=i;
      }
     complex operator + (complex const &obj){
        
        complex result;//(0,0);
        result.real = real  + obj.real;
        result.img = img + obj.img;
        return result;
     }
     void print(){
       cout << real << "+ i" << img <<endl;
     }
};
int main(){
   complex obj1(10,5),obj2(2,4);
   complex obj3 = obj1 + obj2;
   obj3.print();
   return 0;
}

