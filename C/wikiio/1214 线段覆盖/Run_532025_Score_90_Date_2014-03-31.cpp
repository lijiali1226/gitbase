#include<stdio.h>
#include<algorithm>
using namespace std;

struct node{
    int left,right;
}a[100];

bool cmp(node a,node b)
{
    return a.right<b.right;
}

int main()
{
    int n,i,step=0,k=0,tmp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i].left,&a[i].right);
        if(a[i].left>a[i].right)
        {
     //       tmp=a[i].left;
     //       a[i].left=a[i].right;
     //       a[i].right=tmp;
            swap(a[i].left,a[i].right);
        }
    }
    sort(a,a+n,cmp);
    
    for(i=0;i<n;i++)
    {
      	if(a[i].left>=k) 
        	{
         	    step++;
            	k=a[i].right;
        	}
    }   
    printf("%d",step);
    return 0;
}