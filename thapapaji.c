/*
student name:Manish Thapa 
subject:programing fundamental
roll:
lab no:6
programe :
date:
*/




#include<stdio.h>
   int main(){
    int a,b,c,sum,pro,averg;
    printf("\nEnter the first number:");
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);
    printf("\nEnter the third number:");
    scanf("%d",&c);
    sum=a+b+c;
    printf("the sum of number=%d\n",sum);
     
    pro=a*b*c;
    printf("The product=%d\n",pro);
    averg=(a+b+c)/3;
    printf("The averg=%d\n",averg);
     if(a>b&&b>c){
     printf("a is the greatest number\n");
}
      else if(b>a&&a>c){ 
       printf("b is the greatest number\n");
}
        else{
         printf("c is the greatest number\n");
}
      
     return 0;
}
      

