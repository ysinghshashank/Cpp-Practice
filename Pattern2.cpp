#include <iostream>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            //cout<<i<<j<<" ";
            cin>>arr[i][j];
        }
    }
    for(int i=2;i>=0;i--){
        for(int j=0;j<3;j++){
            if(j>i){
                arr[i][j]=arr[i-1][j+2]+arr[i+1][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}
