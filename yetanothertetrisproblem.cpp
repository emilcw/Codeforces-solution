#include<iostream>
#include <algorithm>
using namespace std;
#define mk(arr,n,type)  type *arr=new type[n];

int main(){
        int t;
        cin >> t;
        while(t--){
            //Skapa variabler + lista
            int n; cin >> n;
            mk(arr, n + 1, int);
    
            //Läser in lista med board
            for (int i = 1; i <= n; ++i)
                cin >> arr[i];
    
            //Skapa en lista counter med två object som är tom.
            int cnt[2] = {};
    
            //För varje objekt i listan, om objeketet är jämnt, lägg till
            // etta i listan och öka på ?
            for (int i = 1; i <= n; ++i)
                cnt[arr[i] % 2]++;
    
            //Om cnt elementen är båda 1, säg no, annars yes.
            if (cnt[0] && cnt[1])
                cout << "NO\n";
    
            else
                cout << "YES\n";
        }
	return 0;
}


//This works for the testcases given, but not when testing 
// on the real deal :(
/*
int main(){
    int t, n;
    int columns [100]; 
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> columns[i];
        }
        int height = *max_element(columns, columns+n);
        int area = height*n;
        for (int i = 0; i < n; i++){
            area = area - columns[i];
        }
        if(area % 2 == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

*/