#include <iostream>
using namespace std;

class base{
  public:
   virtual void print(){
       cout << "print() in base" <<endl;
    }
    virtual void show(){
       cout << "show() in base" <<endl;
    }
};
class derived:public base{
  public:
     void print(){
       cout << "print() in derived"<<endl;
     }
    void show(){
       cout <<"show() in derived" <<endl;
    }
};
int main()
{
   base *bptr;
   derived dobj;
   bptr = &dobj;
   bptr->print();
   bptr->show();
   return 0;
}
