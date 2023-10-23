#include<iostream>
using namespace std;

int countDigit(int n){
    int count = 0;
    while(n != 0){
        n = n/10;
        count++;
    }
    return count;
}

int main(){
    int n = 12345678;
    cout <<"Number of digits in "<<n<<" is this: " << countDigit(n);
    return 0;
}

