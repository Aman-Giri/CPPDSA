#include<iostream>
#include<vector>
using namespace std;

//function to find the pivot
int findpivot(vector<int>&nums){
    int start = 0;
    int end = nums.size()-1;
    int mid = start +(end-start)/2;

    while(start < end){
        if(nums[mid]>= nums[0]){
            start = mid+1;
        }else{
            end = mid;
        }
        mid = start +(end-start)/2;
    }
    return start;
}

//function for the binary search
int binarySearch(vector<int> &nums,int start,int end,int target){
    int s = start;
    int e = end;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid] < target){
            s = mid+1;
        }
        else if(nums[mid] > target){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

//function to find the element in a sorted rotated array
int searchelement(vector<int>&nums, int target){
    int pivotelementindex = findpivot(nums);
    // BS on the second line
    if(target >= nums[pivotelementindex] && target <= nums[nums.size()-1]){
        return binarySearch(nums,pivotelementindex,nums.size()-1,target);
    }else{
        //BS on the first line
        return binarySearch(nums,0,pivotelementindex-1,target);
    }
}

int main(){

    vector<int> v = {4,5,6,7,0,1,2};
    int n = v.size();
    int targetnumber = 0;
    int targetindex = searchelement(v,targetnumber);
    cout << "Index of "<<targetnumber<<" is: "<<targetindex<<endl;

}