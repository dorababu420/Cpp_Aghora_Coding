#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
   string str("HelloDora");
   char p[str.length()];
   int i = 0;
   for(i;i < sizeof(p);i++)
   {
     p[i] = str[i];
     cout << p[i];
   }
   return 0;
}

