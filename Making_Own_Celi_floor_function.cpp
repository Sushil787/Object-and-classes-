#include<iostream>
//#include<sushilgyawali.h>
int celi(float x);
int floor(float x);
using namespace std;
int main(){
    int x;
    cout<<"input the no you like: "<<endl;
    cin>>x;
    cout<<"celi is: "<<celi(x)<<endl;
    cout<<"floor is : "<<floor(x)<<endl;
}

int celi(float x){
    return int(x)+1;
    
}
int floor(float x){
    return int(x);
}
