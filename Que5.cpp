// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// Input 2: n = 45
// Output 2: no
#include<iostream>
using namespace std;
int main(){
    int x=45;
    int lo=0;
    int hi=x;
    bool flag=true;
    while(lo<=hi){
        int mid=(hi+lo)/2;
        if(mid*mid==x){
            flag=false;
            cout<<"Yes";
            break;
        }
        else if(mid*mid>x) hi=mid-1;
        else lo=mid+1;
    }
    if(flag==true) cout<<"No";
    return 0;
}