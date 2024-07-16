#include<stdio.h>

main()
{
	int marks ;
	
	printf("Enter your marks =");
	scanf("%d",&marks);
	
	switch(marks)
	{
		case 80 ... 100 :
			printf("your grade is A Excellent work! ");
			break;
			
		case 60 ... 79 :
			printf("your grade is B Well done ");
			break;
			
		case 40 ... 59 :
			printf("your grade is C Good job ");
			break;
			
		case 34 ... 39 :
			printf("your grade is D, You passed but you can do better ");
			break;
			
		case 1 ... 33 :
			printf("your grade is E ,Sorry, you failed");
			break;
			
		default :
			printf("Please enter valid marks");
			break;
	}
}
