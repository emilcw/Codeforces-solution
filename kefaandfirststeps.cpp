#include<iostream>
#include <algorithm>
using namespace std;

int main(){

    int n, l(1), ml(1);
    cin >> n;
    int profits[10000];

    for (int i = 0; i < n; i++)
    {
        cin >> profits[i];
        if (i > 0)
            if (profits[i] >= profits[i - 1])
            {
                l++;
                ml = max(ml, l);
            }
            else
                l = 1;
    }

    cout << ml << endl;

    /*
    int n, counter = 0, biggest = 0;
    cin >> n;
    int arr[10000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(i == 0){
            counter++;
        }else{
            if(arr[i] >= arr[i-1]){
                counter++;
            }else{
                if(counter >= biggest){
                    biggest = counter;
                    counter = 1;
                }
            }
        }
    }

    if(counter > biggest){
        cout << counter << endl;
    }else{
        cout << biggest << endl;
    }
    */

    return 0;
}