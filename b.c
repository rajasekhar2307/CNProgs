#include<stdio.h>
#include<conio.h>
#include<process.h>
  void main()
 {
 int i=0,j=0,n,count=1,k,s;
 int a[20],b[30];
 clrscr();
 printf("frame length\n");
 scanf("%d",&n);
 printf("enter input frame(0's and 1's only)\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 for(i=0;i<n;i++)
 {
  if(a[i]==1)
  {
    b[j]=a[i];
    for(k=i+1;a[k]==1&&k<n&&count<5;k++)
    {
      j++;
      b[j]=a[k];
      count++;
      if(count==5)
      {
       j++;
       b[j]=0;
      }
      i=k;
 }
 }
 else
 {
 b[j]=a[i];
 count=1;
 }
 j++;
 }
 printf("\n length of stuffed frame: %d",j);
 printf("\n after stuffing the frame is:  \n");
 for(i=0;i<j;i++)
 printf("%d",b[i]);
 i=0;
 count=1;k=0;
 s=0;
 while(i<j)
 {
   if(b[i]==1)
   {
     a[s]=b[i];
     for(k=i+1;b[k]==1 && k<j && count<5;k++)
      {
       s++;
       a[s]=b[k];
       count++;
       i=k;
      }
   }
   else
   {
   if(count==5)
	 {   i++;
	   a[s]=b[i];
	   count=1;
	 }
	 else
	   a[s]=b[i];
   }
   i++;
   s++;
 }
 printf("the length is: %d",s);
 printf("\n after de stuffing: ");
 for(i=0;i<s;i++)
 printf("\n %d",a[i]);
 getch();
}