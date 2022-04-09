#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int main(){
    int n, maxc = 0, minc = 0;
    cin >> n;
    vector<int> ci;
    for (int i = 0; i < n; i++){
        int c;
        cin >> c;
        ci.push_back(c);
    }
    
    for (int i = 0; i < n; i++){
        if(i == 0){
            minc = abs(ci[i] - ci[i+1]);
            maxc = abs(ci[i] - ci[n-1]);
        }else if(i == n - 1){
            minc = abs(ci[i] - ci[i-1]);
            maxc = abs(ci[i] - ci[0]);
        }else{
            minc = min(abs(ci[i] - ci[i+1]), 
                       abs(ci[i] - ci[i-1]));
            maxc = max(abs(ci[i] - ci[n-1]), 
                       abs(ci[i] - ci[0]));
        }
        cout << minc << " " << maxc << endl;
    }
    return 0;
}