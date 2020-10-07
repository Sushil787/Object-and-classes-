#include<iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void setValue(int x){
        a = x;
    }
    void putValue(){
        cout<<"value of a is :"<<a<<endl;

    }
    friend void displaySum(A,B);

};
class B{
    int b;
    public:
    void setValue(int y){
        b = y;
    }
    void putValue(){
        cout<<"value of b is :"<<b<<endl;

    }
    friend void displaySum(A,B);

};
void displaySum(A obj1, B obj2){
    cout<<"sum of a and b is : "<<(obj1.a + obj2.b);
}
int main(){
    A A1;
    B B1;
    A1.setValue(100);
    B1.setValue(200);
    A1.putValue();
    B1.putValue();
    displaySum(A1, B1);
}
