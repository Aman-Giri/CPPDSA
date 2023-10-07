#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int>&nums,int target){
    int start=0;
    int end = nums.size()-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<= end){
        if(nums[mid] == target){
            ans = mid;
            end = mid-1;
        }else if(nums[mid]<target){
            start = mid +1;
        }else if(nums[mid]> target){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(vector<int>&nums,int target){
    int start=0;
    int end = nums.size()-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<= end){
        if(nums[mid] == target){
            ans = mid;
            start = mid+1;
        }else if(nums[mid]<target){
            start = mid +1;
        }else if(nums[mid]> target){
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

vector<int> occurences(vector<int>&nums,int target){
     vector<int> result = {-1,-1};
    int firstIndex = firstOcc(nums,target);
    int lastIndex = lastOcc(nums,target);

    if(firstIndex != -1){
       result[0] = firstIndex;
        result[1] = lastIndex;
    }
    return result;
}


int main(){
    vector<int> v = {5,7,7,8,8,10,11,11,11,13,13};
    int target = 11;
    vector<int> r = occurences(v,target);
    cout<<"First occurence for "<<target<<" is: "<<r[0]<<endl;
    cout<<"Last occurence for "<<target<<" is: "<<r[1]<<endl;

    return 0;
}