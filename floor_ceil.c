#include <stdio.h>
#include <stdlib.h>

int myceil(float);

int myceil(float a){
    int res;
    res = (int) a;
    if(res == a || a < 0){
        return res;
    }
    else{
        return res + 1;
    }

}
int myfloor(float);

int myfloor(float a){
    int res;
    res = (int) a;
    if(res == a || a > 0){
        return res;
    }
    else{
        return res -1;
    }

}


int main()
{
    int b,c;
    float a;
    printf("Please enter an number:");
    scanf("%f",&a);
    printf("enter 1 for ceiling,2 for floor:");
    scanf("%d",&b);


    if(b==1){
       printf("Output%d",myceil(a));

    }
    if(b==2){
       printf("Output%d",myfloor(a));

    }


    return 0;

}
