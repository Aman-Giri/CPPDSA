#include<iostream>
#include<vector>
using namespace std;
//Function to find the square root by using binary search:
int  squarerootans(int n){
    int start = 0;
    int end = n-1;
    long long int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
       long long int square = mid*mid;
        if(square > n){
            end = mid-1;
        }
        else if(square < n){
            ans = mid;
            start = mid+1;
        }
        else if(square == n){
            return mid;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int findsquareRoot(int x){
    if(x==0 || x==1){
        return x;
    }
    else{
         return squarerootans(x);
    }
   
}

int main(){
    int number = 100;
    int squareroot = findsquareRoot(number);
    cout<<"Square root of "<< number<<" is: "<<squareroot<<endl;
}


