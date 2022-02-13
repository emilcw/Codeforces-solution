#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, h, ai, min_width = 0;
    vector<int> heights;
    
    cin >> n >> h;

    for (int i = 0; i < n; i++){
        cin >> ai;
        heights.push_back(ai);
    }

    for (int i = 0; i < n; i++){
        if(heights[i] <= h){
            min_width++;
        }else{
            min_width = min_width + 2;
        }
    }
    
    cout << min_width;


    


    return 0;
}