#include<iostream>
#include<vector>
using namespace std;

//using binary Search
//Function to find the first occurence of the element in the vector/array
int firstocc(vector<int>&nums,int size,int key){
    int start=0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = 0;

    while(start<=end){
        if(nums[mid] == key){
            ans = mid;
            end = mid-1; // critical point to analyse here
        }
        else if(nums[mid]<key){
            start = mid+1;
        }
        else if(nums[mid]>key){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

//Function to find the last occurences of the element in the vector/array
int lastocc(vector<int>&nums,int size,int key){
    int start=0;
    int end = size-1;
    int mid = start + (end-start)/2;
    int ans = 0;

    while(start<=end){
        if(nums[mid] == key){
            ans = mid;
            start = mid+1; // critical point to analyse here
        }
        else if(nums[mid]<key){
            start = mid+1;
        }
        else if(nums[mid]>key){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){

    vector<int> v = {1,2,3,3,4,4,9,9,9};
    int n = v.size();
    cout<<"The size of the vector is: "<<n<<endl;
    int target = 3;
   int firstindex =  firstocc(v,n,target);
   cout<<"First occurence of the target element is: "<<firstindex<<endl;

   int lastindex = lastocc(v,n,target);
    cout<<"Last occurence of the target element is: "<<lastindex<<endl;

    int totalocc = (lastindex-firstindex)+1;
    cout<<"Total occurences of the target element is: "<<totalocc<<endl;

    return 0;
    
}