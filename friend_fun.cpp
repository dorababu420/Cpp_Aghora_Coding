#include <iostream>
using namespace std;
class B;
class A{
  private:
    int a;
 public:
  void ShowB(B&);
};
class B{
  int b;
  public:
    B(){
     b=0;
   }
  friend void A::ShowB(B& x);
};
void A::ShowB(B &x){
  cout << "B::b" << x.b <<endl;
}
int main(){
  A a;
  B b;
  a.ShowB(b);
  return 0;
}
  
   
