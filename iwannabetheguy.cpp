#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    int n, p, q, co = 0;
    vector<int> foo;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        foo.push_back(p);
    }

        for (int i = 0; i < n; i++)
    {
        cin >> q;
        foo.push_back(p);
    }

    for (int i = 1; i < n+1; i++)
    {
        if(find(foo.begin(), foo.end(), i) != foo.end()){
            ;
        }else{
            cout << "Oh, my keyboard";
            return 0;
        }
    }
    cout << "I become the guy";
    return 0;
}