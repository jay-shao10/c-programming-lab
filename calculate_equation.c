#include <stdio.h>
#include <stdlib.h>

int scf(int n1,int n2){
    // maximum number between n1 and n2 is stored in max
    int max = (n1 > n2) ? n1 : n2;

    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            return max;
            break;
        }
        ++max;
    }
    return 0;
}

//y + b = ax
int linear(x1,x2,y1,y2,predict){//20 30 68 86
    static float a, b;
    // 68 + b = 20a
    // 86 + b = 30a
    common = scf(x1,x2);
    tmpa = common/x1;
    tmpb = common/x2;
    b = (y2*tmpb-y1*tmpa)/(tmpa-tmpb)
    a = (y1 + b) / x1;
    printf("%d %d",a,b);
}



int main()
{
    printf("Please input two set of number!(x1, x2, y1, y2)\n");
    int x1, x2, y1, y2, res, predict;
    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
    linear(x1,x2,y1,y2,0);
    while(1){
        printf("z");
        scanf("%d",&predict);
        if(predict == -1){
            break;
        }
        printf("F(%d) is: %d\n",predict,linear(0,0,0,0,predict));
    }
    return 0;
}
