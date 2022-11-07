/*Kadane's Algorithm to find maximum subarray sum*/
/*Time complexity--> O(n)*/

#include <bits/stdc++.h>

using namespace std;
int maxsum(vector<int> arr,int n){
    int sum=0;
    int maxi=INT_MIN;
    //traversing through the array and finding the sum using one forloop.
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxi=max(maxi,sum);
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int res=maxsum(arr,n);
   cout<<"sum of the array is = "<<res<<endl;
   
    return 0;
}
