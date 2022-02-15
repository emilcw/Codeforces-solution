#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, m, diff = 0;
    int puzzles [1000];
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> puzzles[i];
    }

    sort(puzzles, puzzles + m);

    int lastDiff = 0;
    for (int i = 0; i < m; i++)
    {
        if(i+n > m) break;
        int B = puzzles[i];
        int A = puzzles[i+n-1];
        diff = A - B;
        if(i == 0){
            lastDiff = diff;
        }else{
            if(diff < lastDiff){
                lastDiff = diff;
            }
        }

    }
    
    cout << lastDiff << endl;

    return 0;
}