// Selection sort, time complexity 0(n^2)
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int swapped = false;
    vector<int>arr{5,4,3,2,1};
    for(int i=0; i<arr.size()-1; i++){
        int min = i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}