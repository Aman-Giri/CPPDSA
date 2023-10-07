#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossible(vector<int> stalls, int k, int mid){
    int cowCount = 1;
    int lastPos = stalls[0];

    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lastPos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int spaceallocationtocow(vector<int> stalls, int k){
    sort(stalls.begin(),stalls.end());
    int start = 0;
    int n = stalls.size();
    int end = stalls[n-1]-stalls[0] ;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<= end){
        if(isPossible(stalls,k,mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
    
}

int main(){
    vector<int> v = {4,2,1,3,6};
    int k = 2;
    int n  = v.size();
    int maximumSpace = spaceallocationtocow(v,k);
    cout<<"Maximum space between two cow is: "<<maximumSpace<<endl;

    return 0;


}