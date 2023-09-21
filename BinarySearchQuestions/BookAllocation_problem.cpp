#include<iostream>
#include<vector>
using namespace std;

bool ispossible(vector<int>&nums, int m, int n, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0;i<nums.size();i++){
        if(pageSum+nums[i] <= mid){
            pageSum = pageSum + nums[i];
        }
        else{
            studentCount++;
            if(studentCount > m || nums[i] > mid){
                return false;
            }
            pageSum = nums[i];
        }
    }
    return true;
}

int bookAllocation(vector<int>&nums,int m,int n){
    if(m>n){
        return -1;
    }

    int start = 0;
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum = nums[i]+sum;
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end-start)/2;

    while(start <= end){
        if(ispossible(nums,m,n,mid)){
        ans = mid;
        end = mid-1;
    }
    else{
        start = mid+1;
    }
        mid = start + (end-start)/2;
    }
    return ans;
}

int findPages(vector<int>&nums,int m, int n){
    return bookAllocation(nums,m,n);
}

int main(){
    vector<int> v = {10,20,30,40};
    int n = v.size();
    int m = 2;
    int bookAllocated = findPages(v,m,n);
    cout<<"Book Allocated is: "<<bookAllocated<<endl;

}