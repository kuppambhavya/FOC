#include <stdio.h>
void swap(int *,int*);
int main ()
{
  int a, b;
 
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);
  printf("Before Swapping : a=%d,b=%d\n",a,b);
  swap(&a,&b);
  printf("After Swapping : a=%d,b=%d\n",a,b);
  return 0;
}
void swap(int *a,int *b){
  *a += *b;
  *b = *a-*b;
  *a = *a-*b;}
  int b,c;
  printf("Enter two numbers: ");
  scanf("%d%d", &b, &c);
  printf("Before Swapping : b=%d,c=%d\n",b,c);
  swap(&b,&c);
  printf("After Swapping : b=%d,c=%d\n",b,c);
  
  void swap(int *b,int *c){
  *b += *c;
  *c = *b-*c;
  *b = *b-*c;}
}
