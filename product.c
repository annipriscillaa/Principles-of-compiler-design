#include<stdio.h>
 
int main() {
   int a, b, ans;
 
   printf("\nEnter the two numbers : ");
   scanf("%d %d", &a, &b);
 
   ans = multi(a, b);
 
   printf("product of two number is %d ",ans);
   return (0);
}
 
int multi(int a, int b) {
   int c;
   c = a * b;
   return (c);
}
