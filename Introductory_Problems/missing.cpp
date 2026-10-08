#include<bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;
    long long total=0;

    for(int i=0; i<n-1; i++){
        int num;
        cin>>num;
        total+=num;
    }

    long long actual_sum = (long long)(n*(n+1));
    actual_sum = actual_sum/2;

    cout<<actual_sum-total;

}