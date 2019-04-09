#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int inc(int x){
   return (x+1);
}
int main(){
  int arr[] = {0,1,2,3,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  transform(arr,arr+n,arr,inc);
  for(int i =0 ; i < n ; i++)
    cout << arr[i] <<endl;
  return 0;
}



