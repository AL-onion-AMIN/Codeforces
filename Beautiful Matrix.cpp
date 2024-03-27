#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5],row,col;
    for(int a=0;a<5;a++){
        for(int b=0;b<5;b++){

             cin>>arr[a][b];
        }
    }
    for(int a=0;a<5;a++){
        for(int b=0;b<5;b++){
            if((arr[a][b])==1){
                row=a;
                col=b;
            }
        }
    }
    int result1=abs(row-2)+abs(col-2);
    cout<<result1<<endl;
}


