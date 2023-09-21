#include<iostream>
using namespace std;

//function to find the square root of the number
int findroot(int x){
    if(x==0 || x==1){
        return x;
    }
    int i=1;
    while(i<=x/i){
        i++;
    }
    return i-1;
}

int main(){
    int number = 81;
    int squareroot = findroot(number);
    cout<<"Square root of "<< number<<" is: "<<squareroot<<endl;
}