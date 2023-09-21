#include<iostream>
using namespace std;

//By Linear Search
int peakelement(int arr[],int size){
    if(size == 0){
        return 0;
    }

    int maxelement = 0;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[maxelement]){
        maxelement = i;
    }
    }
    
    return maxelement;
}

int main(){
    
    int arr[] = {1,3,4,6,7,4,6};
    int n = sizeof(arr)/sizeof(arr[0]);

   int peakele =  peakelement(arr,n);
   cout<<"Index of the Peak element in the array is: "<<peakele<<endl;

   return 0;
    
}