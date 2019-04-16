#include <iostream>
using namespace std;

class funoverload{
  public:
    void fun(int x){
     cout << "x:" << x << endl;
    }
    void fun(double z){
      cout << "y:"<< z << endl;
    }
    void fun(int x,int y){
     cout << "x:"<< x << " " << "y:"<<y<<endl;
    }
};
int main(){
   funoverload obj;
   obj.fun(10);
   obj.fun(15.5);
   obj.fun(2,3);
   return 0;
}
