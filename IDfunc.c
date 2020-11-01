 #include<stdio.h>
 void ID(int x){
     int *a;
     a = &x;
     printf("%p",a);
}

 int main(){
     int value;
     printf("input the no you like to check the ID: ");
     scanf("%d",&value);
     ID(value);
     return 0;

 }
