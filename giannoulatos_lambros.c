#include <stdio.h>
#include <stdlib.h>

struct Input{
	int number_1;
	int number_2;
};

struct Input user(){
	struct Input input;
	printf("Enter the first Integer number:");
	scanf("%d",&input.number_1);
	printf("Enter the second Integer number:");
	scanf("%d",&input.number_2);
return input;	
}

int menu(){
	int choice = 0;
	printf("\n");
	printf("Make your selection please\n");
	printf("==========================\n");
	printf("|| 1. Addition +        ||\n");
	printf("|| 2. Substraction -    ||\n");
	printf("|| 3. Multiplication *  ||\n");
	printf("|| 4. Even or Odd       ||\n");
	printf("|| 5. Exit              ||\n");
	printf("==========================\n");
	scanf("%d",&choice);
	return choice;	
}

void add(int num_1,int num_2){
    int sum= num_1+num_2;
	printf("\n");
	printf(" ~ Addition Mode ~\n");
    printf("The Addition of  %d and %d is: %d\n",num_1,num_2,sum);
	printf("\n"); 
}

void sub(int num_1,int num_2){
    int sub= num_1-num_2;
	printf("\n");
    printf(" ~ Substraction Mode ~\n");
	printf("The Substraction of %d and %d is: %d\n",num_1,num_2,sub);
	printf("\n");
}

void mul(int num_1,int num_2){
    int mul= num_1*num_2;
	printf("\n");
	printf(" ~ Multiplication Mode ~\n");
	printf("The Multiplication of %d and %d is: %d\n",num_1,num_2,mul);
	printf("\n");			
}

void evenodd(){
	int a = 0;
	printf("\n");
	printf(" ~ Even or Odd Mode ~\n");
	printf("Enter an integer number\n");
	scanf("%d",&a);
	if (a%2 == 0) //modulus operator
    	printf("The given number %d is even\n",a);
  	else
    	printf("The given number %d is odd\n",a);
	printf("\n");			
}

int wrong(int number){
	printf("\n");
	if (number != 5)
	printf("Wrong selection number\n");	
}

int main() {
	struct Input input = user();
	int menu_item = 0;
	do
	{	
		menu_item = menu();
		switch(menu_item)
        {
            case 1:
          		add(input.number_1,input.number_2);
				break;
            case 2:
            	sub(input.number_1,input.number_2);
            	break;
            case 3: 
            	mul(input.number_1,input.number_2);
				break;
            case 4: 
				evenodd();
				break;
			default:
				wrong(menu_item);
                break;
        }
	} while (menu_item != 5);
	printf("Program is closing...");
	return 0;
} 
