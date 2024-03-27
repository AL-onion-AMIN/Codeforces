//Author= Al-Amin Bhuiyan
// from DUET
#include<bits/stdc++.h>
using namespace std;
 int n,m;
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
            int ans,final_value;

              for(int i=0;i<n;i++){
                  ans=i;
                  //cout<<ans<<endl;
                   int result=0;
                    for(int j=0;j<n;j++){
                        if(ans==j){
                               // cout<<j<<endl;
                            continue;
                        }
                      else
                      {
                            result=result^arr[j];
                      }
                     // cout<<result<<endl;

                    }
                    if(arr[ans]==result){
                            final_value=result;
                            break;
                    }
            }
            cout<<final_value<<endl;

}

}
