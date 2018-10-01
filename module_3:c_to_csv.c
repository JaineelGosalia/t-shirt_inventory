#include<stdio.h>
#include<string.h>

void create_marks_csv(char *filename,int a[][2],int n,int m){

printf("\n Creating %s.csv file",filename);

FILE *fp;

int i,j;

filename=strcat(filename,".csv");

fp=fopen(filename,"w+");

fprintf(fp,"Product Code, Quantity");

for(i=0;i<m;i++){

    fprintf(fp,"\n%d",i+1);

    for(j=0;j<n;j++)

        fprintf(fp,",%d ",a[i][j]);

    }

fclose(fp);

printf("\n %sfile created\n\n",filename);

}

int main(){

    int product_code1, product_code2;
    int a[2][2];
    int quantity1, quantity2;
    char str[10];
    int i;
    int n;
    printf("Enter Product Code: ");
    scanf("%d",&product_code1);
    a[0][0]=product_code1;
    printf("Enter Quantity: ");
    scanf("%d",&quantity1);
    a[0][1]=quantity1;
    printf("Enter Product Code: ");
    scanf("%d",&product_code2);
    a[1][0]=product_code2;
    printf("Enter Quantity: ");
    scanf("%d",&quantity2);
    a[1][1]=quantity2;
    printf("\n Enter the filename :");
    scanf("%s",str);
    printf("%s",str);
    create_marks_csv(str,a,2,2);

return 0;

}
