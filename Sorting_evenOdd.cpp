#include<iostream>
#include<vector>
using namespace std;

void sortEvenOdd(vector<int> &v){
    int leftptr=0, rightptr=v.size()-1;
    
    while(leftptr<rightptr){
        if(v[leftptr]%2==1 && v[rightptr]&2==0){
            swap(v[leftptr],v[rightptr]);
            leftptr++; rightptr--;
        }
        if(v[leftptr]%2==0){
            leftptr++;
        }
        if(v[rightptr]%2==1){
            rightptr--;
        }
    }
    return;
}

int main(){
    
    int n; 
    cin>>n;
    vector<int> v;
    for (int i=0; i<n; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }
    
    sortEvenOdd(v);
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
    
}
// Revise it later