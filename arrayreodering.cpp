#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int gcd(int a, int b) {
   if (b == 0) return a;
   return gcd(b, a % b);
}


int main(){ 
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> a, even, odd;
        int good = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if(num % 2 == 0) even.push_back(num);
            else odd.push_back(num);
        }

        // Om man tittar på exemplen så kan man inse att numren kommer i
        //ordning först even sen odd.
        for(auto i : even) a.push_back(i);
        for(auto i : odd) a.push_back(i);
        

        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                if(gcd(a[i], 2*a[j]) > 1) good++;
            }
        }

        cout << good << endl;
    }
    return 0;
}