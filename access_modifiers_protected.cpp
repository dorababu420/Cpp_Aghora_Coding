#include <iostream>
using namespace std;

class p
{
  protected:
    int id;
};
class c:public p
{
   public:
      void setid(int ID){
         id = ID;
      }
      void display(){
         cout << "id_protected:" << id <<endl;
      }
};

int main(){
  c objc;
  objc.setid(10);
  objc.display();
  return 0;
}
