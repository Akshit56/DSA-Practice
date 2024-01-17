#include<iostream>
using namespace std;

void reverseNumber(int n){
  if(n==1){
    cout<<1<<" ";
    return;  // return acts as a break statement here
  }
  cout<<n<<" ";
  reverseNumber(n-1);
}

int main(){
  int n;
  cout<<"Enter a number";
  cin>>n;
  reverseNumber(n);

  return 0;
}