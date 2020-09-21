#include<iostream>
using namespace std;

class cuboid{
    
    private:
    int length;
    int breadth;
    int height;
    public:
    void setData(int l,int b,int h){
        length = l;
        breadth = b;
        height = h;
    }
    void showData(){
        cout<<"length ="<<length<<endl;
        cout<<"breadth ="<<breadth<<endl;
        cout<<"height ="<<height<<endl;
        
    }
    int perimeter();
        
    int volume(){
        return length*breadth*height;
        
    }
    
};
int cuboid::perimeter(){
        return 4*(length+breadth+height);
}

int main(){
    cuboid c1;
    c1.setData(1,2,3);
    c1.showData();
    cout<<"volume is : "<<c1.volume()<<endl;
    cout<<"perimeter of cuboid is: "<<c1.perimeter()<<endl;
    return 0;
    
    
}
