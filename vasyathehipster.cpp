#include<iostream>
#include <algorithm>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout << min(a,b) << " " << floor(abs(a-b) / 2) << endl; 
    return 0;
}