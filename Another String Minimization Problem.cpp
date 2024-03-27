
//Coder= Al-Amin Bhuiyan
// from DUET
#include<bits/stdc++.h>
using namespace std;
void slove(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    char str[m];
    for(int i=0;i<m;i++){
        str[i]='B';
    }
    for(int i=0;i<n;i++){
        int z=m-arr[i];
        if(z>(arr[i]-1) && str[arr[i]-1]!='A'){
            str[arr[i]-1]='A';
        }
        else{
                if(str[z]!='A'){
            str[z]='A';}
            else{
                str[arr[i]-1]='A';
            }
        }
    }
    for(int i=0;i<m;i++){
        cout<<str[i];
    }
    cout<<"\n";

}
int main(){
    int test;
    cin>>test;
    while(test--){
            slove();

    }
}



