#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int k, counter=0, water = 0;
    int months [12];
    //Read in data
    cin >> k;
    for (int i = 0; i < 12; i++)
    {
        cin >> months[i];
    }

    // If the plant needs to grow 0 centimeter, return 0 months
    if(k == 0){
        cout << 0 << endl;
        return 0;
    }

    //Sort the months in acending order
    sort(months, months + 12);

    //Add up each month from the back, if we surpass k, stop and print 
    //the value for counter, otherwise print -1
    for (int i = 11; i >= 0; i--)
    {
        water += months[i];
        counter++;
        if(water >= k){
            cout << counter << endl;
            return 0;
        }

    }
    cout << "-1" << endl;
    return 0;
}