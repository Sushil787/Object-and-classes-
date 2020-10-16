#include<iostream>
//#include<sushilgyawali.h>

using namespace std;
std::string check_no(float x);
int main(){
    float x;
    cout<<"input the no you like: "<<endl;
    cin>>x;
    //cout<<"celi is: "<<celi(x)<<endl;
    //cout<<"floor is : "<<floor(x)<<endl;
    cout<<"the no is : "<<check_no(x);
    cout<<abs(int(x)-abs(x));

}



std::string check_no(float x)
{
    std::string integer = "integer\n",floats = "floats\n";
    if((abs(int(x))-abs(x))==0){
        return integer;
        
    }
   
    else
    {
        return floats;
    }
    
}
