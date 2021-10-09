#include <stdio.h>
int main(){
 int a=1,b=1,c,n;
 scanf("%d",&n);
 if(n>2){
  for(int i=3;i<=n;i++){
   c=a+b;
   a=b;
   b=c;
  }
  printf("%d",c);
 }
 else printf("%d",1);
 return 0;
}
