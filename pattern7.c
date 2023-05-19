int main(){

    int num,rows,cols;
    printf("Enter Number of Rows which You Want to patterns= ");
    scanf("%d",&num);

    for(rows=1;rows<=num;rows++){

        for(cols=1;cols<=rows;cols++){

            printf("%c ",rows+64);
        }
        printf("\n");
    }


return 0;
}
