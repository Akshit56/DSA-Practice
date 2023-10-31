//Find that number jo odd number of times appear ho rha hai
// binary search vid 3 supreme 1.0

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(s == e){
            return s;
        }
        if(mid%2 == 0){
            if(arr[mid] == arr[mid+1]){
                s = mid+2;
            }
            else{
                e = mid;
            }
        }
        else{
            if(arr[mid-1] == arr[mid]){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    
    vector<int>arr{2,2,4,4,5,5,6,6,7};
    
    int ans = arr[binarySearch(arr)];
    cout<<ans;
    return 0;
}