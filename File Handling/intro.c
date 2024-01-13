#include<stdio.h>

main()
{
	FILE *fp;
	
	fp = fopen("intro.htm","w");
	
	char name[20] , gender[20] , course[20] , skill[20] , hobby[20];
	int age;
	
	printf("Enter the your name : ");
	gets(name);
	printf("Enter the your Gender : ");
	gets(gender);
	printf("Enter the your course : ");
	gets(course);
	printf("Enter the your skill : ");
	gets(skill);
	printf("Enter the your hobby : ");
	gets(hobby);
	printf("Enter the your age : ");
	scanf("%d",&age);
	
	printf("Name is : %s\n",name);
	printf("Age is : %d\n",age);
	printf("Gender is : %s\n",gender);
	printf("Course is : %s\n",course);
	printf("Skill is : %s\n",skill);
	printf("Hobby is : %s\n",hobby);
	
	fprintf(fp,"<h1> Name is : %s</h1>\n",name);
	fprintf(fp,"<h2> Age is : %d</h2>\n",age);
	fprintf(fp,"<h3> Gender is : %s</h3>\n",gender);
	fprintf(fp,"<h4> Course is : %s</h4>\n",course);
	fprintf(fp,"<h5> Skill is : %s</h5>\n",skill);
	fprintf(fp,"<h6> Hobby is : %s</h6>\n",hobby);
}
