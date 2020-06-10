#include <stdio.h>
main(){
	struct student {
		int ISBN;
		char title[20], name[25];
		float price;
	};
	struct student s1,s2,s3;

	scanf("%d %s %s %f",&s1.ISBN,&s1.title,&s1.name,&s1.price);
	scanf("%d %s %s %f",&s2.ISBN,&s2.title,&s2.name,&s2.price);
	scanf("%d %s %s %f",&s3.ISBN,&s3.title,&s3.name,&s3.price);


	printf("ISBN: %d  Title: %s  Name: %s  Price: %.2f\n", s1.ISBN,s1.title,s1.name,s1.price);
	printf("ISBN: %d  Title: %s  Name: %s  Price: %.2f\n", s2.ISBN,s2.title,s2.name,s2.price);
	printf("ISBN: %d  Title: %s  Name: %s  Price: %.2f\n", s3.ISBN,s3.title,s3.name,s3.price);
}
