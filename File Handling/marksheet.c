#include<stdio.h>
#include<stdio.h>

struct Student
{
	int chem_marks;
	int maths_marks;
	int phy_marks;
	int roll_num;
	char name[50];
};
void main()
{
	FILE *fp;
	
	fp = fopen("marksheet.xlsx","w");
	
	char name[50];
	
	struct Student Student_num[5];
	
	int i;
	int total;
	float percent;
	
	for(i=0; i<1; i++)
	{
		printf("\t\tStudent Marksheet !!!\n\n");
		
		printf("\tStudent %d Details \n",i+1);
		
		printf("Enter the roll num : ");
		scanf("%d",&Student_num[i].roll_num);
		
		printf("Enter the name : ");
		scanf(" %[^\n]s",&name);
		strcpy(Student_num[i].name,name);
		
		printf("Chemistry (out of 100) => ");
		scanf("%d",&Student_num[i].chem_marks);
		
		printf("Mathematics (out of 100) => ");
		scanf("%d",&Student_num[i].maths_marks);
		
		printf("Physics (out of 100) => ");
		scanf("%d",&Student_num[i].phy_marks);
		
		total = Student_num[i].chem_marks + Student_num[i].maths_marks + Student_num[i].phy_marks;
		
		fprintf(fp,"Student %d Marksheet !!!\n\n",i+1);
		
		fprintf(fp,"Student Name is : %s\n",Student_num[i].name);
		
		fprintf(fp,"Student Roll No. is : %d\n",Student_num[i].roll_num);
		
		fprintf(fp,"Student chem_marks is : %d\n",Student_num[i].chem_marks);
		
		fprintf(fp,"Student maths_marks is : %d\n",Student_num[i].maths_marks);
		
		fprintf(fp,"Student phy_marks is : %d\n",Student_num[i].phy_marks);

		printf("Student Total mark is : %d/300\n",total);
		
		percent = (total / 300) * 100;
		
		printf("Student Percent is : %.2f%%\n",percent);
				
		printf("\n\n");
	}
	
}
