#include<iostream>
using namespace std;

int main(){
    try{
        int age = 200;
        if(age>=20){
            cout<<"Access granted - you are good to go"<<endl;

        }
        else{
            throw(age);
        }
    }
    catch(int age){
        cout<<"Access denied- you must be atleast 20yrs world to go. \n"<<endl;
        cout<<"try next time";
    
    }
    return 0;
}
