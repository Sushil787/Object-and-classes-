using namespace std;
#include<iostream>

class Ram{
    private:
    int x;
    public:
    void setData(int d){
        x = d;
    }
    friend class shyam;
};

class shyam
{
public:
void showData(Ram a){
    cout<<"value is : "<<a.x<<endl;

}
};
int main(){
    Ram a;
    shyam b;
    a.setData(1010);
    b.showData(a);
    return 0;
}

