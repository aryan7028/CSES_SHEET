#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<long long>nums(n);

    for(int i=0; i<n; i++){

        cin>>nums[i];

    }

    long long moves=0;

    for(int i=1; i<n; i++){

        if(nums[i]<nums[i-1]){
            moves += (long long)abs(nums[i]-nums[i-1]);
            nums[i]= nums[i-1];
        }
        

    }

    cout<<moves;
}