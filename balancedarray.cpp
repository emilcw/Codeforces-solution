#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> numbers;
        int rightsum = 0;
        int leftsum = 0;

        for (int i = 1; i <= n; i++)
        {
            if(i % 2 == 0){
                numbers.push_back(i); 
               rightsum += i;
            }
               
        }
        
        for (int i = 1; i <= n; i++)
        {
            if(i % 2 != 0){
                if(i == n-1){
                    int rest = rightsum - leftsum;
                    if(rest % 2 == 0){
                        cout << "NO" << endl;
                    }else{
                        cout << "YES" << endl;
                        numbers.push_back(rest);
                        for (int i = 0; i < n; i++)
                        {
                            cout << numbers[i] << " ";
                        }
                        break;
                }
            }
            numbers.push_back(i); 
            leftsum += i;
            } 
        }
    }
      return 0;
}