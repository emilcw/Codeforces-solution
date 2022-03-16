#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int ans=0,n,c=0,i;
    // Ta in antal anställd
    cin>>n;
    //Gör en array och lägga alla i.
    int a[2000];
    //Läs in samtliga anställda och deras chef
    for(i=1; i<=n; i++)
        cin>>a[i];

    //För varje anställd
    for(i=1; i<=n; i++)
    {
        //Counter = 0
        c=0;
        //Plocka ut värdet för den första anställda, dvs dennes chef eller om chef ej finns.
        int boss=a[i];
        //Så länge bossen inte har en egen boss
        while(boss != -1)
        {
            //Ta fram nästa boss i hierarkin (Gå uppåt i grafen)
            boss=a[boss];
            //Öka på counter för behövs en ny grupp
            c++;
        }
        //Maximala värdet mellan 0 och counter, sätt answer till det.
        ans=max(ans, c);
    }
    //Addera 1, av någon anledning.
    cout<<ans+1<<endl;

    return 0;
}