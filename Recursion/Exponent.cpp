#include<iostream>
using namespace std;

int expCalc(int b, int e){
  if(e==0){
    return 1;
  }
  int ans = b*expCalc(b,e-1);
  return ans;
}

int main(){


  int b,e;
  cout<<"Enter base number : ";
  cin>>b;
  cout<<"Enter exponential number : ";
  cin>>e;
  cout<<expCalc(b,e);
  return 0;
}