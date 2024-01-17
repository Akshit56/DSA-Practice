#include<iostream>
using namespace std;

int factorial(int a){
  if(a==0 || a==1){
    return 1;
  }
  int ans = a * factorial(a-1);
  return ans;
}

int main(){
int a;
cout<<"Enter a number : ";
cin>>a;
cout<<factorial(a);

return 0;
}