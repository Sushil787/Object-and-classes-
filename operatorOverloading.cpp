//Operator overloading 
#include<iostream>
using namespace std;
class  complex{
	private:
	int real, imaginary;
	public:

	void setData(int x, int y){
		real = x;
		imaginary = y;


	}
	void showData(){
		cout<<real<<" + i"<<imaginary<<endl;

	}
	complex operator +(complex x){
		complex temp;
		temp.real = real + x.real;
		temp.imaginary = imaginary + x.imaginary;
		return(temp);


	}

};


int main(){
	complex c1,c2,c3;
	c1.setData(1,2);
	c2.setData(3,5);
	c3 = c1 + c2;
	c3.showData();
	return 0;


}
