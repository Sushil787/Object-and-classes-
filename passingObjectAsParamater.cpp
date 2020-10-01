#include<iostream>
using namespace std;

class time{
    private:
    int hr;
    int min;
    public:
    
    void getTime(int , int);
    void putTime(void);
    void sumTime(time, time);

}t1,t2,t3;

void time::getTime(int x, int y){
    hr = x;
    min = y;

}

void time::putTime(void){
    cout<<"Hour is : "<<hr<<endl;
    cout<<"Minute is :"<<min<<endl;
}
void time::sumTime(time t1, time t2){
    min = t1.min + t2.min;
    hr = min/60;
    min = min%60;
    hr = hr + t1.hr + t2.hr;
}

int main(){
    

    t1.getTime(4,30);
    t2.getTime(4,20);
    t3.sumTime(t1,t2);
    t1.putTime();
    t2.putTime();
    t3.putTime();
    return 0;
}
