#include <stdio.h>
int main()
{
	int a,b,c,sum[1000],n,k,l;
		scanf("%d",&a);    /*循环计数值*/ 
		getchar();         /*容纳回车*/ 
	for(n=1;n<=a;n++)
		sum[n]=0;          /*设置数组各数据初始值*/         
    for(n=1;n<=a;n++)      /*输入循环*/ 
    {
    	scanf("%d",&c);
    	getchar();         /*容纳空格，下同*/ 
    	for(l=1;l<=c;l++)  /*输入&计算循环*/ 
    	{
    		scanf("%d",&k);
    		getchar();
    		sum[n]+=k;
		}
	}
	n=1;                    /*输出循环*/ 
	while(n<=a-1)
	{
		printf("%d\n\n",sum[n]);
		n++;
	}
	printf("%d",sum[a]);
	
} 
   

