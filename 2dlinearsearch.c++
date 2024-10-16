#include<iostream>
using namespace std;
int isPresent(int arr[3][4],int target,int i,int j){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;

}
int main(){
    int arr[3][4];
    int target;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter the elemennt you want to search:"<<endl;
    cin>>target;
    if(isPresent(arr,target,3,4)){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}