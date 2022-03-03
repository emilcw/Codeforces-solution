#include<iostream>
#include<string>
using namespace std;

int main(){
   
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            ans++;
        else
            ans--;
    }
    cout<<abs(ans)<<endl;


    return 0;
}