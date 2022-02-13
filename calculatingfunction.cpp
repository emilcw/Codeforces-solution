#include<iostream>
#include<math.h>

int main(){
    long long n, sum = 0;
    std::cin >> n;
    if(n % 2 == 0){
        sum = n / 2;
    }else{
        sum = -ceil(n/2) - 1;
    }
    std::cout << sum << std::endl;
    return 0;
}
