#include <iostream>
using namespace std;

class vehicle{
  public:
    vehicle(){
     cout << "this is vehicle" <<endl;
    }
};
class Fourwheel{
  public:
    Fourwheel(){
     cout << "this is Four Wheel vehicle" << endl;
   }
};
class Car:public vehicle,public Fourwheel{
 public:
   Car(){
     cout << "Car is fourwheel vehicle" << endl;
   }
};

int main()
{
  Car obj;
  return 0;
}
