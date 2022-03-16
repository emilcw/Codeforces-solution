#include<iostream>
#include<math.h>
#include <algorithm>  
using namespace std;

// Detta fungerar bättre.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((2*b-c>0)&&(2*b-c)%a==0)
        {
            cout<<"YES"<<endl;
        }
        else if((a+c)%(2*b)==0)
        {
            cout<<"YES"<<endl;
        }
        else if((2*b-a>0)&&(2*b-a)%c==0)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}


// Någorlunda bra försök men det spricker för vissa fall. 

/*
int main(){
    int t, a, b, c, n;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        int nums[] = {a, b, c};
        int index = 0;
        //Find index to smallest element.
        for (int i = 1; i < 3; i++)
        {
            if(nums[i] < nums[index]){
                index = i;
            }
        }
        
        bool cont = true;
        bool foundOne = false;
        while(cont){
            if(abs(a-b) == abs(b-c)){
                cout << "YES" << endl;
                cont = false;
                break;
            }else{
               int max2 = max(max(a,b), c);
               for (int m = 1; m <= max2 ; m++)
               {
                  int min3 = nums[index]*m;
                  cout << "This is min3: " << min3 << endl;
                  if(index == 0){
                      if(abs(min3 - b) == abs(b - c)){
                        cout << "This is m: " << m << endl;
                        cout << "YES" << endl;
                        cont = false;
                        foundOne = true;
                        break;
                      }
                  }else if(index == 1){
                         if(abs(a - min3) == abs(min3 - c)){
                        cout << "This is m: " << m << endl;
                        cout << "YES" << endl;
                        cont = false;
                        foundOne = true;
                        break;
                      }
                  }else{
                        if(abs(a - b) == abs(b - min3)){
                        cout << "This is m: " << m << endl;
                        cout << "YES" << endl;
                        cont = false;
                        foundOne = true;
                        break;
                      }
                  }
               }
               if(!foundOne){
                    cont = false;
                    cout << "NO" << endl;
                    foundOne = false;
               }  
            }
        }
    }
    return 0;
}

*/