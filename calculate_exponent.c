#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,ans;//a�O���� b�O����
    float res=1;

    while(1){
        printf("Input base and exponent:");
        scanf("%d %d",&a,&b);
        if(a==-1&&b==-1){//��a��b��J�t1����
            return 0;
        }
        if(b<0){//����Ƥp��0
            for(i=1,res=1 ;i<=(-1*b );i++)  res=res*a;//����X��������
            printf("The answer is %5.2f\n",1/res);//��1�������N�i�H�o�쵪��
        }

        if(b>=0){//����Ƥj��0
            for(i=1,ans=1 ;i<=b ;i++)//���׵���a���Hb��
                ans=ans*a;
            printf("The answer is %d\n",ans);
        }
    }
    return 0;
}
