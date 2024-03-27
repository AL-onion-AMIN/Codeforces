//Author= Al-Amin Bhuiyan
// from DUET

#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
            int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int con=1;
    vector<int>v;
    for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
            con++;
            }
            else{
                v.push_back(con);
                con=1;
            }
    }
    int ans=0,even=0,ans2;
     for (auto i = v.begin(); i != v.end(); ++i){
        if(*i%2!=0) ans++;
        else even++;
     }
     ans2=(even/2)*2;
     cout<<ans+ans2<<endl;



}
}


