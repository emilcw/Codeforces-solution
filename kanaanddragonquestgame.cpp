#include<iostream>
#include <math.h>  
using namespace std;

int main(){
    int t, hit_points, voidAbsorpations, LightningStrikes, flag = 0, flag2 = 0;
    cin >> t;
    while(t--){
        cin >> hit_points >> voidAbsorpations >> LightningStrikes;

        if(hit_points > 20){
            while(voidAbsorpations--){
                hit_points  = floor(hit_points / 2) + 10;
                int flag = 0;
            }
        }else{
            while(LightningStrikes--){
                hit_points = hit_points - 10;
                int flag = 1;
            }
        }

        if(hit_points <= 0){
            cout << "YES" << endl;
            flag2 = 1;
        }else{
            flag2 = 0;
        }

        if (!flag2){
           if(flag){
                while(voidAbsorpations--){
                    hit_points  = floor(hit_points / 2) + 10;
                }
            }else{
                while(LightningStrikes--){
                    hit_points = hit_points - 10;
                }
            }

            if(hit_points <= 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }  
    }
    return 0;
}