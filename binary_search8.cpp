// Divide 2 numbers using BS

// divide 2 numbers and find answer using binary search

#include<iostream>
using namespace std;

int binarySearch(int n1, int n2){
    
    int s = 0;
    int e = n1;
    int mid = s+(e-s)/2;
    while(s<=e){
        
        if(n1/n2 == mid)
            return mid;
        if(n1/n2 > mid)
            s = mid+1;
        if(n1/n2 < mid)
            e = mid-1;
        mid = s+(e-s)/2;
    }
    return -1;
    
}

int main(){
    
    int n1, n2;
    cout<<"Enter Dividend : ";
    cin>>n1;
    cout<<"Enter Divisor : ";
    cin>>n2;
    int ans = binarySearch(n1, n2);
    
    if(ans >= 0)
        cout<<"Answer is : "<<ans<<endl;
    else
        cout<<"Invalid";
    int precision;
    double preciseAns = ans;
    cout<<"Enter Precision : ";
    cin>>precision;
    double step = 0.1;
    for(int i=0; i<precision; i++){
        for(double j = preciseAns; j*n2 <= n1; j+=step)
            preciseAns = j;
        step/=10;
    }
    cout<<"Precise answer : "<<preciseAns;
    return 0;
}