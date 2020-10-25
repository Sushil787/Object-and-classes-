#include<iostream>
#include<vector>
int main(){
    std::vector<int> data = {1,2,3,4};
    data.push_back(12);
    std::cout<<data[data.size()-1] <<std::endl;
    return 0;
    
}
