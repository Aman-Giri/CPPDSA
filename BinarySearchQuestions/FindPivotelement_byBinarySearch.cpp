#include<iostream>
#include <array>
using namespace std;

//A pivot point is a position where the element is less than the first element of the array.
// For example, if you have an array like [4, 7, 9, 2, 5, 8], and the first element is 4, then 
// the pivot point in this array would be the position where the value is less than 4. In this 
// case, the pivot point is at index 3 because arr[3] = 2 is less than 4.


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