#include <iostream>
using namespace std;

int reverseNumber(int n){
    int reverse = 0;
    
    while(n != 0){
        int digit = n%10;
        reverse = reverse*10+digit;
        n = n/10;
    }

    return reverse;
}

int main(){
    int n = 7678;
    cout<<"The reverse of "<<n <<" is: "<<reverseNumber(n);
    return 0;
}