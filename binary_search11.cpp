 // BS to divide 2 nos

  #include<iostream>
using namespace std;
// used abs function to take absolute ie +ve values, -ve hoga toh result me daal denge seedha, yahan simple rakha hai abs use karke
int binarySearch(int dividend, int divisor){
    
    int s = 0;
    int e = abs(dividend);
    int mid = s+(e-s)/2;
    int result;
    while(s<=e){
        if(abs(dividend/divisor) == abs(mid)){
            result = abs(mid);
            break;
            }
        else if (abs(dividend/divisor) > abs(mid)){
            result = abs(mid);
            s = mid+1;}
        else{
            e = mid-1;}
        mid = s+(e-s)/2;    
    }
    if((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0)){
        return result;}
    else{
      return -result;
    }
    
}

int main(){
    
    int dividend, divisor;
    cin>>dividend;
    cin>>divisor;
    int ans = binarySearch(dividend, divisor);
    cout<<ans;
}  