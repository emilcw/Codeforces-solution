#include<string>
#include<set>
#include<iostream>
using namespace std;

int main(){
   string s;
   set <char> a;
   // This works since a set can only contain unique char, therfore
   // even if we add a duplicate, it will not be added.
   getline(cin,s);
   for (int i = 0; i < s.length(); i++)
   {
       if(s[i]>= 'a' && s[i]<='z'){
           a.insert(s[i]);
       }
   }
   cout << a.size()<<endl;
    return 0;
}