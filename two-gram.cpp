#include<iostream>
#include<string>
#include<vector>
#include<map>
#include <algorithm>
using namespace std;



int main(){
    int n;
    string s,s1 = "";
    cin >> n;
    cin >> s;
    map<string,int> two_grams;
    //Insert all different pairs and count them.
    for (int i = 0; i < n-1; i++)
    {
        s1 = s1 + s[i] +s[i+1];
        two_grams[s1]++;
        s1="";
    }
    
    int count = 0;
    string s2;
    //Go through map and find biggest element.
    for(map<string, int>::iterator iter=two_grams.begin();iter!= two_grams.end(); iter++)
    {
        if(count <(iter->second)){
            count = (iter->second);
            s2 = (iter->first);
        }
    }
    cout << s2 << endl;
    return 0;
}