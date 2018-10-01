#include<stdio.h>
#include<string.h>

int main() {
	char product_code[20]; //binary_form_of_color_binary_form_of_size
	char color[10] //color name -> decimal 3digit3digit3digit
	char size[2]; //size -> ascii code -> binary code
	int choice; //Choice to branch manager.
	int quantity; //To store number of pieces of each case individually
	printf("\nEnter color of t-shirt:");
	gets(color);
	printf("\nEnter size of t-shirt: ");
	getchar(size);
	if(color=="white") {
		color="255255255";
		break;
	}
	if(color=="black") {
		color="000000000";
		break;
	}
	if(size=="L")
		size="76";
		break;
	if(size=="M");
		size="77";
		break;
	if(size=="S")
		size="83";
		break;
	product_code = strcat(color,size);

	//make function for generation for product code
	//make another function for retrieving the quantity of a specific product_code and update accordingly

	printf("\nCurrent stock of %s is %d",product_code,/*value retrived from file.*/);
	printf("\n1.Add to stock\t2.Deduct from stock");
	scanf("%d",&choice);
	switch(choice) {
		case 1:
			printf("Enter the number of pieces: ");
			scanf("%d",&quantity);
		case 2:
			printf("Enter the number of pieces: ");
			scanf("%d",&quantity);
	}
	printf("\nUpdated stock of %s is %d",product_code,/*value retrived from file.*/);
	return 0;
}
