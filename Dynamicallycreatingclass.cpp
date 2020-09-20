using namespace std;
#include <iostream>
class Human{
    public:
    string caste;
    string name;
    string classe;
    void input(string x, string y,string z){
        x = caste;
        y = name;
        z = classe;
        }
    void display(){
        cout<<"your name is "<<name<<endl;
        cout<<"your caste is "<<caste<<endl;
        cout<<"you belong to "<<classe<<" class"<<endl;
    }
    
}H1;
int main(){
       
    string name,caste,classe;
        cout<<"input the name :"<<endl;
        getline(cin,name);
        cout<<"input the caste: "<<endl;
        cin>>caste;
        cout<<"input class: "<<endl;
        cin>>classe;        
        H1.input(name,caste,classe);
    H1.display();
}
