#include<stdio.h>
#include<conio.h>
void main()
{
    char a[20];
    int i,n,flag=0;
    printf("enter  string length");
    scanf("%d",&n);
    printf("enter  string");
    scanf("%s",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==0||a[i]==1||a[i]==2||a[i]==2||a[i]==3||a[i]==4||a[i]==5||a[i]==6||a[i]==7||a[i]==8||a[i]==0)
        {
            flag++;
        }
    }
    if(flag==0)
    {
        printf("the string is numeric");
        
    }
    else
    {
        printf("the string is not numeric");
    }
    
