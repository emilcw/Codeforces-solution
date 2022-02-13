#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    //Okej att detta fungerar men var inte som jag förstod det.
    //Tänkte att man skulle få precis den output som stod men ok.
     if(n%2==0)
    {
        cout<<"4"<<" "<<n-4<<endl;
    }
    else
    {
        cout<<"9"<<" "<<n-9<<endl;
    }
    return 0;
}