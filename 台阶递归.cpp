#include<stdio.h>
int f(int n){
if(n<=2){
	return n;
} else{
	
	return f(n-1)+f(n-2);
}
}
int main()
{
	int n;
printf("����̨���У�\n");
scanf("%d",&n);
printf("%d",f(n));
return 0;
}
