
class claculator{
    public:
    class sum{
        private:
        int x;
        int y;
        public:
        void get_data(int a, int b){
            x = a;
            y = b;
        }
        void outdata(){
            cout<<"the value of A is : "<<x<<endl;
            cout<<"the value of B is : "<<y<<endl;
        }


    };

};


int main(){
    claculator::sum s1;
    s1.get_data(1,3);
    s1.outdata();
    return 0;

}
