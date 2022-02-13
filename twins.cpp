#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, mysum = 0, twinsum = 0, counter = 0;
    cin >> n;
    int arr [100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);
    
    for (int i = n-1; i >= 0; i--)
    { 
        counter++;
        int coin = arr[i];
        mysum += coin;
        for (int j = i-1; j >= 0; j--)
        {
            twinsum += arr[j];
        }
        if(mysum > twinsum) break;
        twinsum = 0;
    }
    cout << counter << endl;
    return 0;
}