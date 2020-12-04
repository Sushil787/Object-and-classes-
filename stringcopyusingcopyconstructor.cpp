#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

class String{
    private:
    char *name;
    int value;
    public:
    String(char *n){
        int Length = strlen(n);
        name = new char[Length+1];
        strcpy(name,n);
                
    }
    String(String& r){
        name = r.name;
    }
    ~String(){
        cout<<"destructor activated . Memory freed"<<endl;

    }
    void showName(){
        cout<<"copied name in copy constructor is : "<<name<<endl;
    }

};

int main(){
    char value[30] = "sushil";
    String S1(value);
    String S2(S1);
    S2.showName();
    return 0;
}
