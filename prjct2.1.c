#include<stdio.h>

main()
{
	int marks;
	printf("Enter your marks =");
	scanf("%d",&marks);
	(marks>=80 && marks<=100)?printf("Your grade is A"):
	(marks>=60 && marks<=79)?printf("Your grade is B"):
	(marks>=50 && marks<=59)?printf("Your grade is C")
	:(marks>=40 && marks<=49)?printf("Your grade is D"):
	(marks>=34 && marks<=39)?printf("Your grade is E"):
	(marks>=1 && marks<=33)?printf("Your grade is F")
	:printf("Enter valid marks");
}