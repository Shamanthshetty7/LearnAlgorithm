/*Finding subarray sum and da perticular subarray which gives maximum sum
-> O(n) time complexity */
#include <bits/stdc++.h>
using namespace std;
void maxSubarraySum(int ar[],int n,int k){
    int maxsum=0,minindex=0;
    for(int i=0;i<k;i++){
        
        maxsum+=ar[i];
    }
      int arraysum=maxsum;
    for(int i=k;i<n;i++){
      arraysum+=ar[i];
      arraysum-=ar[i-k];
      if(arraysum>maxsum){
          maxsum=arraysum;
          minindex=i-k+1;
      }
    }
     cout<<"Max sum="<<maxsum<<"\n";
     cout<<"Aray is"<<"\n";
    for(int i=minindex;i<minindex+k;i++){
         cout<<ar[i]<<"\t";
    }
}
int main() {
   int n,k;
    cout<<"Enter the array size and the subarray size"<<"\n";
   cin>>n>>k;
   int ar[n];
    cout<<"Enter the array elements"<<"\n";
   for(int i=0;i<n;i++){
       cin>>ar[i];
   }
   maxSubarraySum(ar,n,k);

    return 0;
}