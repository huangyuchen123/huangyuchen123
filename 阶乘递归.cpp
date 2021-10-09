
#include <stdio.h> 
int fun(int n){
 if(n==1||n==0){
  return 1;
 }
 else{
  return n*fun(n-1);
 }
}
int main(){
 int n;
 while(scanf("%d",&n)){
  printf("%d!=%d",n,fun(n));
 }
 return 0;
}
