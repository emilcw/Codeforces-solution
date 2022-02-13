#include<iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;


int main(){
    int x1, x2, x3, min1, max, min2, max1, max2, dist1, dist2, dist3;
    int mindist1, mindist2, mindist3;
    cin >> x1 >> x2 >> x3;
    min1 = std::min(x1,x2);
    min2 = std::min(min1, x3);
    max1 = std::max(x1,x2);
    max2 = std::max(max1, x3);

    //cout << min2;
    //cout << max2;

    for (int i = min2; i <= max2; i++)
    {
        dist1 = abs(i-x1);
        dist2 = abs(i-x2);
        dist3 = abs(i-x3);
        if(i == min2){
            //First run, lowest so far
            mindist1 = dist1;
            mindist2 = dist2;
            mindist3 = dist3;
        }else if(dist1+dist2+dist3 < mindist1+mindist2+mindist3){
            mindist1 = dist1;
            mindist2 = dist2;
            mindist3 = dist3;
        }else{
            //Was not a shorter path.
        }
    }
    cout << mindist1 + mindist2 + mindist3 << endl;


    return 0;
}