#include<iostream>
using namespace std;

int main(){
    int t;
    int n,a,b,c,d;
    int ABsum,ABsub,CDsum,CDsub;
    cin>>t;
    while(t--)
    {
        ABsum=ABsub=CDsum=CDsub=0;
        cin>>n>>a>>b>>c>>d;
        ABsum=a+b;
        ABsub=a-b;

        CDsum=c+d;
        CDsub=c-d;

        if( (n*ABsum >= CDsub) && (n*ABsub <= CDsum) ){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;


}

/*

This should work, I dont know why
int main(){
    int t, n, a, b , c, d, flag = 0;
    cin >> t;
    while(t--){

        cin >> n >> a >> b >> c >> d;

        for (int i = a-b; i <= a+b; i++)
        {
            flag = 0;
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += i;
            }
            if(sum >= c-d && sum <= c + d){
                flag = 1;
                break;
            }
            if(flag) break;
        }

        if(flag){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}

*/