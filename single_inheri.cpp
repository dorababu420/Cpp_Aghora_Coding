#include <iostream>
using namespace std;

class Vehicle{
   public:
     Vehicle(){
       cout << "this is vehicle" <<endl;
     }
};
class Car:public Vehicle{
  public:
     Car(){
     }
};
int main(){
  Car obj;
}
