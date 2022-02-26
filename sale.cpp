#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int n, m, earnings = 0;
    cin >> n >> m;
    int tvs [100];
    for (int i = 0; i < n; i++)
    {
        cin >> tvs[i];
    }
    
    sort(tvs, tvs+n);

    for (int i = 0; i < n; i++)
    {
        int tv_n = tvs[i];
        if(tvs[i] <= 0) earnings+= tv_n;
        m--;
        if(m == 0){
            break;
        }
    }

    if(earnings < 0){
        earnings = abs(earnings);
    }

    cout << earnings << endl;

    return 0;
}