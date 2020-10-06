#include<iostream>
int pow(int , int);
int conversion(int );



int main(){
    int no;
    std::cout<<"input the binary no you like: "<<std::endl;
    std::cin>>no;
    std::cout<<"The decimal no of given binary no is: "<<conversion(no)<<std::endl;
    return 0;

}
int pow(int base,int exp){
    int result = 1;
    while(exp!=0){
        result = result*base;
        exp--;

    }
    return result;
}
int conversion(int n){
    int decimal = 0 , remainder,i=0;
    while(n!=0){
        remainder = n%10;
        n = n/10;
        decimal = decimal + remainder*pow(2,i);
        i++;
    }
    return decimal;
}
