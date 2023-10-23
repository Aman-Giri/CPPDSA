#include<iostream>
#include<cmath>
using namespace std;

int countDigit(int n){
    int digit = floor(log10(n)+1);
    return digit;
}

int main(){

    int n = 12345678;
    cout <<"Number of digits in "<<n<<" is: " << countDigit(n);
   
    return 0;
}