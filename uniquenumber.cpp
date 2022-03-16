#include<iostream>
#include<cmath>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        int x;
        cin>>x;
        // Om x mindre än tio, returnera x
        if (x<10){
            cout<<x<<"\n";
        // Om x större än 45, returna -1
        } else if (x>45){
            cout<<-1<<"\n";
        } else{
        // Annars måste vi ta fram summan.
        // Lägg på bakifrån från 9 tills vi når talet.
            int n = x;
            vector<int> v;
            int bigEl = 9;
            int sum = 0;
            while (n!=sum){
                if ((n-sum)>bigEl){
                    sum+=bigEl;
                    v.push_back(bigEl);
                    bigEl--;
                } else{
                    v.push_back(n-sum);
                    sum=n;
                }
            }
            //Outputa talet till iostream.
            for (int j = v.size()-1; j >=0 ; j--) {
                cout<<v[j]<<"";
            }
            cout<<"\n";
        }
    }
}


// Implementation nedan skulle nog fungera men det kommer bli ineffektiv
// i och med att vi måste iterera upp till ett så högt tal som 1,5 miljarder.
// En bättre strategi är att iterera ihop en summa en att iterera över talen som blir summan. 


bool isDistinct(int x){
    int unit, tenth, hundred, thousand;
    bool isDistinct = false;
    int len = trunc(log10(x)) + 1;
    switch (len)
    {
    case 2:
         tenth = x % 100 / 10;
         unit = x % 10;
        if(unit != tenth) isDistinct = true;
        break;
    case 3:
         hundred = x % 1000 / 100;
         tenth = x % 100 / 10;
         unit = x % 10;
        if(hundred != tenth && hundred != unit && tenth != unit){
            isDistinct = true;
        }
        break;
    case 4:
         thousand = x % 10000 / 1000;
         hundred = x % 1000 / 100;
         tenth = x % 100 / 10;
         unit = x % 10;
        if(thousand != hundred && thousand != tenth && thousand != unit && hundred != tenth && hundred != unit && tenth != unit){
            isDistinct = true;
        }
    default:
        cout << "GOT IN DEFAULT" << endl;
        break;
    }
    return isDistinct;
}

/*
int main(){
    int t, x, thousand, hundred, tenth, unit, flag = 0;
    cin >> t;
    while(t--){
        cin >> x;
        flag = 0;
        for (int i = 1; i < 10e9; i++)
        {
            if(x < 10){
                cout << x << endl;
                flag = 1;
                break;
            }

            //millions = 
            //hundred_thousand = 
            //thenth_thousand = 
            thousand = i % 10000 / 1000;
            hundred = i % 1000 / 100;
            tenth = i % 100 / 10;
            unit = i % 10;
            if(x == thousand + hundred + tenth + unit){
                if(isDistinct(i)){
                    cout << i << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(!flag) cout << "-1" << endl;
    }


    return 0;
}

*/
