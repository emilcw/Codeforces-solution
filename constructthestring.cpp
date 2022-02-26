#include<iostream>
#include<vector>
using namespace std;


// Does not work tho, pretty tricky question.
int main(){
    int t, n, a, b;
    cin >> t;
    while(t--){
        cin>>n>>a>>b;
        char c[]="abcdefghijklmnopqrstuvwxyz";
        string s;
        // Fill up a substring
        for(int i=0; i<b; i++){
            s[i]=c[i];
        }

        int k=0;
        while(n--){
            cout<<s[k];
            k++;
            if(k==b)
                k=0;
        }
        cout<<endl;
    }
    return 0;
}