#include<iostream>
using namespace std;
class Demo{
private:
int a;
public:
void set(int x){
 a = x;
}
void sum(Demo o1, Demo o2){
a = o1.a + o2.a;
}

void print(){
cout<<"A is :"<<a<<endl;
}
};

int main(){
Demo o1,o2,o3;
o1.set(10);
o2.set(30);
o3.sum(o1,o2);
o1.print();
o2.print();
o3.print();
return 0;
}
