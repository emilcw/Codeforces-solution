#include<iostream>
using namespace std;

int main(){
    int n, p = 0, counter = 0, min = 0 , max = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> p;
        if(i == 0){
            // First one is not amazing
            min = p;
            max = p;
        }else{
            if(p > max){
                counter++;
                max = p;
            }else if(p < min){
                counter++;
                min = p;
            }else{
                // Do nothing
            }
        }
    }
    cout << counter << endl;

    return 0;
}