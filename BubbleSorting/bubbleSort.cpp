#include<iostream>
#include<vector>
using namespace std;

//function for the bubble sorting: 
void bubbleSort(vector<int> &nums, int n){
    for(int i=1;i<n;i++){
        //first for loop is for the number of rounds 
        bool swapped = false;
        for(int j=0;j<n-i;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
    }
}

int main(){

    vector<int> v = {3,5,2,77,9,11,33};
    int n = v.size();
    cout<<"Before bubble sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<< endl;

    bubbleSort(v,n);
    cout<<"After bubble sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<< endl;

    return 0;
}