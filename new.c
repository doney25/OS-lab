#include<stdio.h>
void main()
{
int i,j,lim,n;
printf("Enter the number of processes\n");
scanf("%d",&lim);
printf("Enter the number of memory blocks\n");
scanf("%d",&n);
struct process{
int size;
int allocated;
}p[lim];
printf("Enter the size of the processes\n");
for(i=0;i<lim;i++)
 {
  scanf("%d\n",&p[i].size);
  p[i].allocated=0;
 }
 struct memory{
int msize;
int flag;
}m[n];
printf("Enter the size of the memory blocks:\n");
for(i=0;i<n;i++)
 {
  scanf("%d\n",&m[i].msize);
  m[i].flag=0;
 } 
 int temp;
 for(i=0;i<lim;i++)
 {
  for(j=i+1;j<n;j++)
  {
  if(m[i].msize>m[j].msize)
  {
  temp=m[i].msize;
  m[i].msize=m[j].msize;
  m[j].msize=temp;
  }
  }
  }

for(i=0;i<lim;i++)
 {
  for(j=0;j<n;j++)
  {
  
    if(p[i].size<=m[j].msize)
    {
    if(p[i].allocated==0)
    {
    if(m[j].flag==1)
    {
    continue;
    }
    else
{
     m[j].flag++;
     p[i].allocated++;
 printf("process p%d is allocated in %d\n",i,m[j].msize);
  break;    
}
  }
  }
  }
  }
    if(m[j].flag==0)
    
    printf("process %d is not allocated",i);

}    
