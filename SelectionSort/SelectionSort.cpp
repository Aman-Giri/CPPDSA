#include <iostream>
#include <vector>
using namespace std;

//Program for the selection sort
void selectionSort(vector<int> &nums, int n){
    for(int i=0;i<n-1;i++){
        int minvalueIndex = i;
        for(int j=i+1;j<n;j++){
            if(nums[j] < nums[minvalueIndex]){
                minvalueIndex = j;
            }
        }
          swap(nums[i],nums[minvalueIndex]);
    }
}

int main(){
    vector<int> v = {4,3,6,0,1,7};
    int n = v.size();
    cout<<"Before sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout << endl;
    //putting selection sort on the array: 
    selectionSort(v,n);
    cout<<"After sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
    
}
