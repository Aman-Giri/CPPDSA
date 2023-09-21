#include<iostream>
#include <vector>
using namespace std;

//function for finding the total count: 
int findtotalcount(vector<int>&nums,int size,int target){
    int count = 0;
    for(int i=0;i<size;i++){
        if(nums[i] == target){
            count++;
        }
    }
    return count;
}

int main(){

    vector<int> v = {1,4,6,7,7,8,9,10,7,4,4,8,8,8,8,8,8,8};
    int n = v.size();
    int targetnumber = 4;
    int total = findtotalcount(v,n,targetnumber);
    cout<<"total occurence of "<<targetnumber<<" is: "<<total<<endl;
    return 0;
}




