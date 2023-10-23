#include <iostream>

using namespace std;
int reverseInt(int x){
    int reversed = 0;
    while(x != 0){
        int digit = x%10;
        reversed = reversed*10 + digit;
        x = x/10;
    }
    return reversed;
}

bool checkPalindrome(int x){
    if( x < 0){
        return false;
    }
    else if(reverseInt(x) == x){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int x = 132;
    bool palindrome = checkPalindrome(x);
    if(palindrome == true){
        cout <<"the given number is palindrome";
    }
    else{
        cout <<"The given number is not palindrome";
    }

    return 0;
}