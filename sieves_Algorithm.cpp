/*Sieves algorithm is used to find prime numbers of huge range in optimized way*/
/*using vector to analyse the result*/
/*if we take 10^7 is range of n*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    auto n=1e7+10;
    vector<bool>prime(n,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<n;i++){
        if(prime[i]==true){
            for(int j=i*2;j<n;j+=i){            /*stores all the multiple of the perticular number as false*/
                prime[j]=false;
            }
        }
    }
    while(true){
    int num;
    cout<<"enter the number to check whether it is prime or not"<<endl;
    cin>>num;
    if(prime[num]){
        cout<<"yes it is prime"<<endl;
    }else{
        cout<<"It is not prime"<<endl;
    }

    }
   
    
}