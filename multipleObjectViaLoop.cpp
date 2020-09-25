#include<iostream>
using namespace std;
class show{
private:
 float n;
public:
 void inputData(float no){
  n = no;

 }
 void getData(){
 cout<<"input the data: ";
 cin>>n;


 }
 void display(){
 cout<<"the no is: "<<n<<endl;


 }

};
int main(){
class show t[4];

t[0].inputData(11.2);
t[1].getData();

t[2].getData();
t[3].inputData(12.10);
for(int i  = 0; i<4;i++){
 t[i].display();
}
return 0;

}
