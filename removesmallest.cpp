#include<iostream>
#include<vector>
#include <algorithm> 
#include <stdlib.h>
using namespace std;

// Funkar ej, kolla dock upp hur mans ska göra och fatta.

int main(){
    int t, n;
    vector<vector<int>> arr;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> subarr;
        for (int j = 0; j < n; j++)
        {
            cin >> subarr[j];
        }
        sort(subarr.begin(), subarr.end());
        arr.push_back(subarr);
    }
    
    vector<int> diffs;

    for (int i = 0; i < t; i++)
    {
        vector<int> vec = arr[i];
        int diff = 0;
        for (int j = 1; j < n; j++)
        {
          diff = abs(vec[i] - vec[i-1]);
          diffs.push_back(diff);
        }
    }
    
     sort(diffs.begin(), diffs.end(), greater<int>());
     if(diffs[0] > 1){
         cout <<"NO"<< endl;
     }else{
         cout <<"YES"<< endl;
     }




    return 0;
}