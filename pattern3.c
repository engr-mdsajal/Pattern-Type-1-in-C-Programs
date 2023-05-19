#include<stdio.h>
int main(){

    int num,rows,cols;
    printf("Enter Number of Rows= ");
    scanf("%d",&num);

    for(rows=1;rows<=num;rows++){

        for(cols=1;cols<=rows;cols++){

            printf("%d ",cols%2);
        }
        printf("\n");
    }


return 0;
}

