#include<stdio.h>
#include<string.h>
int main()
{
    int user_login_choice;//user login choice variable declaration
    char admin_username[10]; //declaration
    char admin_username_1[10]={"ritik"},admin_username_2[10]={"jaineel"}; //definition
    char admin_pwd[10]; //declaration
    char admin_pwd_1[10]={"ritik1234"},admin_pwd_2[10]={"jaineel21"}; //definition

    char sales_username[10]; //declaration
    char sales_username_1[10]={"ritik"},sales_username_2[10]={"jaineel"}; //definition
    char sales_pwd[10]; //declaration
    char sales_pwd_1[10]={"ritik1234"},sales_pwd_2[10]={"jaineel21"}; //definition

    char branch_username[10]; //declaration
    char branch_username_1[10]={"ritik"},branch_username_2[10]={"jaineel"}; //definition
    char branch_pwd[10]; //declaration
    char branch_pwd_1[10]={"ritik1234"},branch_pwd_2[10]={"jaineel21"}; //definition

    printf("\nSelect User:\n1.Administrator\n2.Sales Desk\n3.Branch Manager\n");
    scanf("%d",&user_login_choice);//user login choice variable input
    switch(user_login_choice)
    {
        case 1: printf("Enter user name: ");
                scanf("%s",admin_username);
                printf("Enter password:");
                scanf("%s",admin_pwd);
                if((strcmp(admin_username,admin_username_1)==0&&strcmp(admin_pwd,admin_pwd_1)==0)||(strcmp(admin_username,admin_username_2)==0&&strcmp(admin_pwd,admin_pwd_2)==0))
                {printf("\nAccess Granted.....\n");}
                else
                {printf("\nAccess Denied!!!!!\n");}
                break;
        case 2: printf("Enter user name: ");
                scanf("%s",sales_username);
                printf("Enter password:");
                scanf("%s",sales_pwd);
                if((strcmp(sales_username,sales_username_1)==0&&strcmp(sales_pwd,sales_pwd_1)==0)||(strcmp(sales_username,sales_username_2)==0&&strcmp(sales_pwd,sales_pwd_2)==0))
                printf("\nAccess Granted.....\n");
                else
                printf("\nAccess Denied!!!!!\n");
                break;
        case 3: printf("Enter user name: ");
                scanf("%s",branch_username);
                printf("Enter password:");
                scanf("%s",branch_pwd);
                if((strcmp(branch_username,branch_username_1)==0&&strcmp(branch_pwd,branch_pwd_1)==0)||(strcmp(branch_username,branch_username_2)==0&&strcmp(branch_pwd,branch_pwd_2)==0))
                printf("\nAccess Granted.....\n");
                else
                printf("\nAccess Denied!!!!!\n");
                break;
    }
    return 0;
}
