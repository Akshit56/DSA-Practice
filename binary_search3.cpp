// Using arrays

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr);
    if(binary_search(arr, arr+size, 2)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}