#include <stdio.h>

int main() {
	// your code goes here
   int t;
   scanf("%d",&t);
   while(t--){
       int a,b;
       scanf("%d%d",&a,&b);
       if((a+b)<11) printf("\n-1");
       else printf("\n%d",21-(a+b));
   }
   return 0;
}
