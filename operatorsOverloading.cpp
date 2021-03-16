#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet;            
 
 
   public:
 
 
      Distance(int f) {
         feet = f;
 
      }
 
 
      void displayDistance() {
         cout << "F: " << feet <<endl;
      }
 
 
      bool operator <(Distance d) {
         if(feet<d.feet) {
            return true;
         }
         else{
         	return false;
		 }
 
      }
      bool operator >(Distance d) {
         if(feet>d.feet) {
            return true;
         }
         else{
         	return false;
		 }
  }
};
 
int main() {
   Distance D1(11), D2(5);
 
   if( D1 < D2 ) 
      cout << "D1 is less than D2 " << endl;
   
   if(D1>D2){
 
      cout << "D1 is greater than D2 " << endl;
   }
 
   return 0;
}
