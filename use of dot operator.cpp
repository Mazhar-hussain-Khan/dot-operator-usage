/* Name:Mazhar Hussain     Reg No:20MDELE098
email: 20MDELE098@uetmardan.edu.pk.*/
#include<stdio.h>
struct package{//structure defining//
	float milk;
	float sugar;
	int eggs;
};
int main(){
	package customer1,customer2;//variable declaration//
	
	customer1.milk=5;
	customer1.sugar=2;
	customer1.eggs=12;
	printf("for customer 1:\n %f litres milk\n %f kgs sugar\n %d eggs\n",	customer1.milk,customer1.sugar,customer1.eggs);
	
	customer2.milk=10;
	customer2.sugar=5;
	customer2.eggs=18;
	printf("------------\n");
	printf("for customer2:\n %f litres milk\n %f kgs sugar\n %d eggs\n",	customer2.milk,customer2.sugar,customer2.eggs);
	return 0;
}

