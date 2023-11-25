//Sum of digits
#include <iostream>

using namespace std;

int main()
{
    int number,digit;
    cout<<"Enter the number :"<<endl;
    cin>>number;
    int sum = 0;
    while(number !=0){
        digit = number%10;
        number = number/10;
        sum = sum+digit;
    }
    cout<<"The sum of digits are : "<<sum;
    return sum;
}