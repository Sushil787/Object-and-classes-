using namespace std;
#include<iostream>
#include<cstring>
 class Book{
     public:
     int book_id ;
     string book_name;

void input_book_data(){
    cout<<"input book ID: "<<endl;
    cin>>book_id;
    cout<<"input book name: "<<endl;
    cin>>book_name;


}
void get_data(){
     cout<<"the book ID is : "<<book_id<<endl;
     cout<<"the book name is : "<<book_name<<endl<<endl;
     
}


 };

 int main(){
     Book b1;
     b1.input_book_data();
     b1.get_data();
     return 0;
 }
