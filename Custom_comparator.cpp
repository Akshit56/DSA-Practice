#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

bool mycomp(int &a, int &b){

    // return a<b; // to sort in increasing order
    return a>b; // to sort in descending order

}

int main(){

    vector<int> v = {55,22,44,11,33};
    sort(v.begin(), v.end(), mycomp);
    print(v);
    return 0;
}