#include <stdio.h>
int main()
{
	int a,b,c,sum[1000],n,k,l;
		scanf("%d",&a);    /*ѭ������ֵ*/ 
		getchar();         /*���ɻس�*/ 
	for(n=1;n<=a;n++)
		sum[n]=0;          /*������������ݳ�ʼֵ*/         
    for(n=1;n<=a;n++)      /*����ѭ��*/ 
    {
    	scanf("%d",&c);
    	getchar();         /*���ɿո���ͬ*/ 
    	for(l=1;l<=c;l++)  /*����&����ѭ��*/ 
    	{
    		scanf("%d",&k);
    		getchar();
    		sum[n]+=k;
		}
	}
	n=1;                    /*���ѭ��*/ 
	while(n<=a-1)
	{
		printf("%d\n\n",sum[n]);
		n++;
	}
	printf("%d",sum[a]);
	
} 
   

