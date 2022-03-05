#include<iostream>
#include<string>
#include <algorithm>  
using namespace std;

//Testa en annan approach först men blev bara krångligt, facinerade att visa problem 
// är så "enkla" i grunden att lösa.

void solve(){
    string s;
	cin>>s;
	int zero=0,one=0;
	for(auto i:s)
	{
		if(i=='0')
			zero++;
		else
			one++;
	}
	int ans=min(zero,one);
	if(ans%2)
		cout<<"DA"<<endl;
	else
		cout<<"NET"<<endl;
}


int main(){
    int t;
    string s;
    bool removed = false, AliceTurn = true, roundOver = false;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}