#include<iostream>
using namespace std;
class Account{
private:
static int count;
int balance;
public:
static void setCount(int x){
    count = x;
    cout<<"count is : "<<count<<endl;
}
void Balance(int b){
    balance = b;
    cout<<"the balance is : "<<balance<<endl;

}

};
int Account::count;

int main(){
    Account::setCount(12);
    Account A1;
    A1.Balance(5000);
    A1.setCount(24);
    return 0;
}
