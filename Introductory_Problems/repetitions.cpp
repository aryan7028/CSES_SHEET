#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    long long a=0, c=0, g=0, t=0;
    long long count=0;

    for(char ch: s){

        if(ch=='A'){
            count++;
            a = max(a, count);

        }
        else{
            count=0;
        }
    }
        count =0;
        for(char ch: s){

        if(ch=='G'){
            count++;
            g = max(g, count);

        }
        else{
            count=0;
        }
    }
    count =0;
    for(char ch: s){

        if(ch=='C'){
            count++;
            c = max(c, count);

        }
        else{
            count=0;
        }
    }

    count =0;
    for(char ch: s){

        if(ch=='T'){
            count++;
            t = max(t, count);

        }
        else{
            count=0;
        }
    }

    cout<<max({a,g,c,t});
}