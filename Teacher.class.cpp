#include<iostream>
#include<string>

using namespace std;
class Teacher{
    string name;
    string subject;
    public:
    void fun(string name, string subject);
    

    
};


void Teacher::fun(string name,string subject){
        cout<<name<<" Sir teaches " <<subject<<endl;
}

int main(){
    
    Teacher surybam;
    Teacher sushant;
    Teacher raman;
    Teacher gopal;
    surybam.fun("suryabm","ds");
    sushant.fun("sushant","OOP");
    raman.fun("raman","maths");
    gopal.fun("gopal","MP");
    
return 0;

}
