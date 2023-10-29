// BS on a nearly  sorted array (searching and sorting class 3) :
// 0(logn)
#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr, int target){
    
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(target == arr[mid])
            return mid;
        if((mid-1) >= s && target == arr[mid-1])
          // or (mid=1) >=0
          // fasega nhi if mid = 0 hota hai toh
            return mid-1;
        if((mid+1) <= e && target == arr[mid+1])
          // or (mid+1) < arr.size()
          // fasega nhi if mid +1 arr se bada ho jaata hai toh
            return mid+1;
        if(target > arr[mid])
            s = mid+2;
        if(target < arr[mid])
            e = mid-2;
        mid = s+(e-s)/2;
}
    return -1;
}
int main(){
    
    vector<int>arr{10,15,20,25,30,35};
    int target = 35;
    int ans = binarySearch(arr,target);
    cout<<"Present at index : "<<ans;
}