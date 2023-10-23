#include<iostream>
using namespace std;

int main(){

int arr[] = {1,2,4,6,10};
int target = 16;
bool flag = false;
for(int i=0; i<4; i++){
    for(int j = i+1; j<4; j++){
        if(arr[i] + arr[j] == target){
            flag = true;
        }

    }
}
if(flag){
    cout<<"true";
}
else{
    cout<<"false";
}
}