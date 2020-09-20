using namespace std;
#include <iostream>
class Human{
    public:
    string caste;
    string name;
    string classe;
    void input(){
        cout<<"input the name :"<<endl;
        getline(cin,name);
        cout<<"input the caste: "<<endl;
        cin>>caste;
        cout<<"input class: "<<endl;
        cin>>classe;        
        
        }
    void display(){
        cout<<"your name is "<<name<<endl;
        cout<<"your caste is "<<caste<<endl;
        cout<<"you belong to "<<classe<<" class"<<endl;
    }
    
};
int main(){
    Human H1;
    H1.input();
    H1.display();
}
