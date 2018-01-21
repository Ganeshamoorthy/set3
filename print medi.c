#include <stdio.h>
void swap(int *s,int *r)
{
   int t;   
   t=*s; 
   *s=*r; 
   *r=t;
}

void sort(int a[],int n) { 
   int i,j,count;

   for(i=0;i<n-1;i++) {
      for(j=0;j<n-i-1;j++) {
         if(a[j]>a[j+1])
            swap(&a[j],&a[j+1]);
      }
   }
}

int main() {
   int a[] = {6,3,8,5,1};
   int n = 5;
   int sum,i;

   sort(a,n);
   
   n = (n+1) / 2 ;

   printf("Median = %d ", a[n]);
}
}
