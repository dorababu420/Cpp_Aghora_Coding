 /* A stringstream assocites string object with a stream allowing you to read from the string as if it were a stream */
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
  string str = "code without fear";
  vector<string> token;

  stringstream checkstr(str);
  string inter;
  while(getline(checkstr,inter, ' ')){
    token.push_back(inter);
  }
  for(int i = 0; i < token.size(); i++){
    cout << token[i] << '\n';
  }
}
