#include<iostream>
#include<vector>

using namespace std;

int findTarget(vector<int>&nums, int target){
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i] == target){
            target = i;
        }
    }
    return target;
}

int main(){
    vector<int> v = {1,2,4,5,7,8};
    int targetNumber = 8;
    int targetKey = findTarget(v,targetNumber);
    cout<<"Index of "<<targetNumber<<" is: "<<targetKey<<endl;
}