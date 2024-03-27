//Coder= Al-Amin Bhuiyan
// from DUET
#include<bits/stdc++.h>
using namespace std;
#define nl endl
#define lli long long int
#define PI 3.1416
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
#define ce cout<<"\n"
void slove(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maximum=INT_MIN;
    int minimum=INT_MAX;
    for(int i=0;i<n;i++){
      maximum=max(arr[i],maximum);
      minimum=min(arr[i],minimum);
    }
   // cout<<maximum<<endl;
   // cout<<minimum<<endl;
    int min_index,max_index;
    for(int i=0;i<n;i++){
            if(maximum==arr[i]){
    max_index=i+1;
    break;
    }
    }
     for(int i=n;i>=0;i--){
    if(minimum==arr[i]){
        min_index=i+1;
        break;
    }
    }
   // cout<<max_index<<endl;
  // cout<<min_index<<endl;
    int result=0;
    if(max_index>min_index){
            result=((max_index-1)+(n-min_index))-1;

    }
    else
    {
        result= (max_index-1)+(n-min_index);
    }
   cout<<result<<endl;

}
int main(){
 //   int test;
   // cin>>test;
  //  while(test--){
     slove();
     //test--;
  //  }

}





