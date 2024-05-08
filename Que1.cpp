// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’ does not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6
#include<iostream>
#include <vector>
using namespace std;
int search(vector<int>& nums, int target) {
    int n=nums.size();
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
    
        int mid=(lo+hi)/2; //lo+(hi-lo)/2
        if(nums[mid]==target) {
            if(nums[mid+1]>target) return mid;
            else lo=mid+1;
            
        }
        else if(nums[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    return -1;
}
int main()
{
    vector<int> nums={1,2,3,3,3,3,3,4,4,4,5,5,5} ;
    int target=5;
    int n=search(nums,target);
    if(n==-1) cout<<"Element not present "<<n;
    else cout<<"Element is present at index : "<<n;   
    return 0;
}