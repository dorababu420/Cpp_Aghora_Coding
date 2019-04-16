#include <iostream>
using namespace std;
class Circle
{
  private:
    double radius;
  public:
   // double compute_area(){
   //    return 3.14*radius*radius;
   // }
    double compute_area(double radius){
       return 3.14*radius*radius;
    }
};
int main()
{
   Circle obj;
//   obj.radius = 5.5; can't access private member out side of class.
//   cout << "Radius : " << obj.radius <<endl;
//   cout << "Area of Circle: "<< obj.compute_area()<<endl;
   cout << "Area of Circle: "<< obj.compute_area(5.5)<<endl;
   return 0;
}

