// Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the maximum number of 1’s.
// Input matrix :
// 0 1 1 1
// 0 0 1 1
// 1 1 1 1 // this row has maximum 1s
// 0 0 0 0
// Output: 2
#include<iostream>
using namespace std;
int main()
{
    int arr[4][4]={{0,1,1,1},{1,1,1,1},{0,0,1,1},{0,0,0,0}};
    int m=4;//rows
    int n=4;//column
    int row=-1;
    int maxOne=0;
    for(int i=0;i<m;i++){
        int count=0;
        int lo=0;
        int hi=n-1;
        int firstidx=-1;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(arr[i][mid]==1){
                firstidx=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        if(firstidx==-1) count=0;
        else count=n-firstidx;
        if(maxOne<count){
            maxOne=count;
            row=i;
        }
    }
    cout<<row;
    return 0;
}