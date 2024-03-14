#include<stdio.h>
int main(){
    int p,q,sum;
printf("enter the first number:");
scanf("%d",&p);
printf("enter the second number:");
scanf("%d",&q);
sum=p+q;
printf("finl number is:%d",sum);
  if(sum<=29){
    printf("ok");
  }else{
    printf("no");
  }
    return 0;
}