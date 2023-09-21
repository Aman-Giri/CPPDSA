#include<iostream>
#include <array>
using namespace std;

int findpivot(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid]>= arr[0]){
            start = mid+1;
        }else if(arr[mid]<arr[0]){
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main(){
    int arr[] = {7,9,1,2,3}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    int pivotelement = findpivot(arr,n);
    cout<<"The index of the pivot element is: "<<pivotelement<<endl;


  return 0;
}