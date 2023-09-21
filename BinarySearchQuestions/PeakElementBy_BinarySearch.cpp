#include<iostream>
#include<vector>
using namespace std;

//using the binary Search
int peakelement(vector<int> &nums,int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start< end){
        if(nums[mid]<nums[mid+1]){
            start = mid+1;
        }
        else if(nums[mid]>nums[mid+1]){
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int main(){
    vector<int> v = {1,2,3,4,6,3};
    int n = v.size();

    int peakele = peakelement(v,n);
    cout<<"The index of the peakelement is: "<<peakele<<endl;

}