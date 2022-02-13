#include<iostream>
using namespace std;

int main(){
    int n, active_officers = 0, crimes_untreated = 0;
    cin >> n;
    int arr [100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        int event = arr[i];
        if(event == -1){
            if(active_officers == 0){
                crimes_untreated++;
            }else{
                active_officers--;
            }
        }else{
            active_officers+= event;
        }
    }
    cout << crimes_untreated << endl;
    return 0;
}