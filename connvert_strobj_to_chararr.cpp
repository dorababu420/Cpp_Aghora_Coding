#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

  string str = "HelloDora";
  int n = str.length();
  char strarr[n + 1];
  strcpy(strarr,str.c_str());
  for(int i = 0; i< n ; i++)
    cout << strarr[i];
  
  return 0;
}
