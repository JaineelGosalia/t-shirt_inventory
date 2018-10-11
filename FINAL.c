#include<stdio.h>
#include<string.h>

#define MAX 10
#define users 3
#define pc 10
#define c 10

int admin ();
int branch();
int sales();
int rng();

typedef struct {
	char username[MAX];
	char password[MAX];
} login;

typedef struct node {
	struct node *next;
	char procode[pc];
    char color[c];
    char size;
    int quantity;
    int des_1_quan; //@R idk how you're going to deal with this, it is a color:size:design map. Each element of the LL will have unique color and size? If this is so, please read case 1 and case 2 comments in admin()
    int des_2_quan;
    int des_3_quan;

} node;

typedef struct{
	struct node *start;
} LL;

int main() {
	
	//RETRIVE data from file and make linked list with struct data as its element
	//CALL extract(linked list);
	
	//LOGIN module starts here
	int user_login_choice;
	char login_username[MAX];
	char login_password[MAX];
	login a[users];
	strcpy(a[0].username,"admin");
	strcpy(a[0].password,"admin");
	strcpy(a[1].username,"branch");
	strcpy(a[1].password,"branch");
	strcpy(a[2].username,"sales");
	strcpy(a[2].password,"sales");
	/*a[0].username = "admin";
	a[0].password = "admin";
	a[1].username = "branch";
	a[1].password = "branch";
	a[2].username = "sales";
	a[2].password = "sales";*/
	printf("\nSelect User:\n1.Administrator\n2.Branch Manager\n3.Sales Desk\n");
    scanf("%d",&user_login_choice);//user login choice variable input
    switch(user_login_choice) {
    	case 1: printf("Enter user name: ");
                scanf("%s",login_username);
                printf("Enter password:");
                scanf("%s",login_password);
                if(strcmp(login_username,a[0].username)==0 && strcmp(login_password,a[0].password)==0) {
                	printf("\nAccess Granted.\n");
                	//CALL admin(linked list);
                }
                else {
                	printf("\nAccess Denied.\n");
                }
                break;
        case 2: printf("Enter user name: ");
                scanf("%s",login_username);
                printf("Enter password:");
                scanf("%s",login_password);
                if(strcmp(login_username,a[1].username)==0 && strcmp(login_password,a[1].password)==0) {
                	printf("\nAccess Granted.\n");
                	//CALL branch(linked list);
                }
                else {
                	printf("\nAccess Denied.\n");
                }
                break;
        case 3: printf("Enter user name: ");
                scanf("%s",login_username);
                printf("Enter password:");
                scanf("%s",login_password);
                if(strcmp(login_username,a[2].username)==0 && strcmp(login_password,a[2].password)==0) {
                	printf("\nAccess Granted.\n");
                	//CALL sales(linked list);
                }
                else {
                	printf("\nAccess Denied.\n");
                }
                break;
    }
	return 0;
}

int admin() {
	int choice;
	printf("Select the record to view: 1.In 2.Out\n");
	scanf("%d", &choice);
	switch (choice) {
		case 1://show color, size, quantity mapped with time stamp sorted according to color, without the sorting, it won't be worth.
		case 2://show product code and total price mapped with time stamp
	} while(choice != 3);

	/*LL.start=NULL;
	
	FILE *f;
	f=fopen("report.txt","r");*/		
	return 0;

	//If time permits, sort the sales LL by color and show the admin the max sale is of __ color, do the same for size and quantity.
}

int branch() {
	int choice;
	printf("Select the from the following options:\n 1.Update stock of existing product 2.Add new product\n");
	scanf("%d", &choice);
	switch (choice) {
		case 1://ask for color, size and quantity -> add quantity to matching linked list element -> map with time stamp
		case 2://ask for color, size and quantity -> create linked list element -> map with time stamp
	} while(choice != 3);
	return 0;
}

int sales() {
	//@V handle this module
	//Keep product code as Color.Size.Design
	//Ask user to enter product code
	//If product code exists, ask for quantity
	//If quantity less than existing quantity
	//Deduct the input quantity from existing quantity
	//Multiply the existing quantity from the retrived price
	//Ask user to end or continue shoping
	//Repeat the same if continue or else show bill on console
	return 0;
}

//Basically the designer
int rng() {
	//concat every product code with 1, 2, 3 which makes the final product code
	ptr = start
	
	strcat(procode, "1");
	strcat(procode, "2");
	strcat(procode, "3");
	
	ptr = ptr -> next
	
	repeat concat process
	
	while( ptr -> next != NULL)
	
	//use random number generator to assign a quantity to each final product code
	
	/*	Random number generator code which I had in CPP
		#include<iostream>
		using namespace std;
		int main() {
			int T;
			cin >> T;
			while(T-- > 0)
			{
				int m, n, k;
				n = rand() % 51;
				m = rand() % 51;
				k = (rand() % 11) % ((m*n) + 1);
				cout << m << " " << n << " " << k << endl;
				for(int i=0;i<k;i++) {
				cout << rand() % m << " " << rand() % n << endl;
				}
			}
			return 0;
		}
	*/
	
	//always keep raw material in stock -> so if sum of quantity of finished goods of White.L is greater than available stock - 5
	assert ( Quantity of (White.L.1 + White.L.2 + White.L.3) < Quantity of (White.L) + 5 )
	//construct your rng within these constraints
	
	return 0;
}
