#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,ans;//a是底數 b是指數
    float res=1;

    while(1){
        printf("Input base and exponent:");
        scanf("%d %d",&a,&b);
        if(a==-1&&b==-1){//當a跟b輸入負1停止
            return 0;
        }
        if(b<0){//當指數小於0
            for(i=1,res=1 ;i<=(-1*b );i++)  res=res*a;//先算出分母的值
            printf("The answer is %5.2f\n",1/res);//讓1除分母就可以得到答案
        }

        if(b>=0){//當指數大於0
            for(i=1,ans=1 ;i<=b ;i++)//答案等於a乘以b次
                ans=ans*a;
            printf("The answer is %d\n",ans);
        }
    }
    return 0;
}
