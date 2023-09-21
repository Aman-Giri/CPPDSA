#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end = size-1;

    int mid = start + (end-start)/2;

    while(start <= end){
        if(arr[mid] == key){ 
            return mid;
        }

        //go to right part
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = start + (end-start)/2;
        
    }

    return -1;
}

int main(){

    int even[6] = {2,4,6,8,10,12};
    int odd[6] = {3,5,7,9,11,13};

    int evenindex = binarySearch(even,6,8);
    cout << "Index of the 8 is: "<<evenindex<<endl;

    return 0;

}