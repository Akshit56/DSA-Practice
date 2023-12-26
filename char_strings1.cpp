// To check if a given character array is a pallindrome

#include<iostream>
#include<string.h>
using namespace std;

int lengthString(char ch[]){
    int index = 0;
    while(ch[index]!='\0'){
        index++;
    }
    return index;
}

bool checkPallindrome(char ch[], int n){
    int l=0;
    int h=n-1;
    while(l<=h){
        if(ch[l] == ch[h]){
        h--;
        l++;
    }
        else {  
            return false;} 
    }
    return true;
}
            
    

int main(){
    
    char ch[100];
    cin.getline(ch,100);
    int length = lengthString(ch);
    bool isPallindrome = checkPallindrome(ch,length);
    if(isPallindrome){
        cout<<"Pallindrome"<<endl;
    }
    else
        cout<<"Not a Pallindrome";
    
    
    return 0;
}