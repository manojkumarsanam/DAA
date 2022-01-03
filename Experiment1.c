#include<stdio.h>
#include<conio.h>
int a[100];
int max,min;
int maxmin(int,int);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=-1;
    min=9999;
    maxmin(1,n);
    printf("maximum number is %d\nminimum number is %d\n",max,min);
}
int maxmin(int i,int j)
{
    int max1,min1,mid;
    if(i==j)
    {
        max=min=a[i];
    }
    else{
        if(i==j-1)
        {
            if(a[i]>a[j])
            {
                max=a[i];
                min=a[j];
            }
            else{
                max=a[j];
                min=a[i];
            }
        }
        else{
            mid=(i+j)/2;
            maxmin(i,mid);
            max1=max;
            min1=min;
            maxmin(mid+1,j);
            if(max1>max)
            {
                max=max1;
            }
            if(min1<min)
            {
                min=min1;
            }
        }
    }
}
