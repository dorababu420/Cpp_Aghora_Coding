#include <iostream>
using namespace std;

class Circle
{
  public:
   double rad;
   double compute_area(){
    return 3.14*rad*rad;
   }
};
int main(){
  Circle obj;
  obj.rad = 5.5;
  cout << "Radius:" << obj.rad <<endl;
  cout << "Area: " << obj.compute_area() <<endl;
  return 0;
}
