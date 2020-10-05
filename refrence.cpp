#include<iostream>
using namespace std;
class Demo{
private:
int a;
public:
void set(int x){
a = x;
}
Demo& sum(Demo obj2,Demo& obj3){
obj3.a = a+obj2.a;
return obj3;

}
void print(){
cout<<"the value of A is : "<<a<<endl;

}
};
int main(){
Demo d1;
Demo d2;
Demo d3;
d1.set(1);
d2.set(2);
d3 = d1.sum(d2,d3);
d1.print();
d2.print();
d3.print();
return 0;
}
