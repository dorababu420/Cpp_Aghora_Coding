#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//functor

class inc
{
  private:
    int num;
  public:
    inc(int n):num(n){
    }
    int operator()(int arr_num) const{
      return num + arr_num;
    }
};
int main()
{
  int arr[] = {0,1,2,3,4,5};
  int addnum = 5;
  int n = sizeof(arr)/sizeof(arr[0]);
  transform(arr,arr+n,arr,inc(addnum));
  for(int i = 0; i< n;i++)
    cout << arr[i] << endl;

   return 0;
}
