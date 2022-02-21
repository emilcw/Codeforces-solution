#include<iostream>
using namespace std;


int main(){
    int n,c,t;
    cin>>t;
    while(t--){
        c=0;
        cin>>n;
        while(n%6==0)
        {
            n=n/6; //Dividing away all the 6's until no remainder
            c++;
        }
        //Diving by three is the same as multiplying by two and diving by six
        //That why we add two moves and only divide by 3.
        while(n%3==0) 
        {
            n=n/3;
            c=c+2;
        }
        //Either we have reached 1 or not.
        if(n==1)
            cout<<c<<endl;
        else
            cout<<"-1"<<endl;
    }



    return 0;
}