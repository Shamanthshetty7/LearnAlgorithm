/* Finding Highest And Lowest frequency holding elements in the given list of elements*/
/* Data Structure used Hash Map  -> O(n) time complexity*/
int main(){
    int n;
    int temp,maxele=0,minele;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    vector<int> ar;
    unordered_map<int,int> mp;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>temp;
        mp[temp]++;
        ar.push_back(temp);
    }
    int max=mp.begin()->second;
    maxele=mp.begin()->first;
    int min=mp.begin()->second;
    minele=mp.begin()->first;
    for(auto it:mp){
        if(it.second>max){
            max=it.second;
            maxele=it.first;
        }
        if(it.second<min){
            min=it.second;
            minele=it.first;
        }
    }
    
    cout<<"Hash table "<<endl;
    for(auto it:mp){
        cout<<it.first<<","<<it.second<<endl;
    }
    cout<<"\nThe element having lowest and Highest frequency"<<endl;
    cout<<minele<<"\n"<<maxele;
} 