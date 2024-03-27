#include<bits/stdc++.h>
using namespace std;
int test,inter;
 int main(){
     cin>>test;
     for(int i=1;i<=test;i++){
        cin>>inter;
        int arr[inter];
          int con=0;
        for(int j=0;j<inter;j++){
            cin>>arr[j];
        }
         for(int j=0;j<inter;j++){
           if(arr[j]%2==0 && arr[j+1]%2==0){
                con=0;
           }
            if(arr[j]%2!=0 && arr[j+1]%2!=0){
                con=0;
           }
            if(arr[j]%2!=0 && arr[j+1]%2==0){
                con=1;
           }
        }

     }
 }



