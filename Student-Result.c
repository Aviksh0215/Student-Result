#include<stdio.h>
#include<string.h>
struct result
{
  int seat;
  char name[100];
  char sub[100];
  int marks;
} r[1];
int main()
{
  int i,ch,x,num,avi;
  char y[100];

  printf("\nEnter the total student: ");
  scanf("%d",&num);

  i=0;
  while(i<num)
  {
    printf("\nEnter the seat number: ");
    scanf("%d",&r[i].seat);

    printf("\nEnter the Name: ");
    scanf(" %[^\t\n]s",&r[i].name);

    printf("\nEnter the Subject: ");
    scanf(" %[^\t\n]s",&r[i].sub);

    printf("\nEnter the Marks: ");
    scanf("%d",&r[i].marks);

    i++;
  }
  printf("\n### STUDENTS RESULT ###\n");

	i=0;
	while(i<num)
	{
		printf("%d	|		%s	|		%s	|		%d\n",r[i].seat,r[i].name,r[i].sub,r[i].marks);
		i++;
	}

	printf("\n1.Search student details by seat number");
	printf("\n2.Search student details by Name");

	printf("\n\n Select your choice: ");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1:
		printf("\nEnter Student Seat number: ");
		scanf("%d",&x);
		i=0;
		while(i<num)
    {
      if(r[i].seat==x)
      {
        avi = 1;
        printf("%d	|		%s	|		%s	|		%d",r[i].seat,r[i].name,r[i].sub,r[i].marks);
      }
      i++;
    }
  if(avi != 1)
  {
    printf("Not Found");
  }
      
    break;

    case 2:
    printf("\nEnter the student name: ");
    scanf(" %[^\t\n]s",&y);
    i=0;
    while(i<num)
    {
      if(strcmp(r[i].name, y) == 0)
      {
        avi =1;
        printf("%d	|		%s	|		%s	|		%d",r[i].seat,r[i].name,r[i].sub,r[i].marks);
      }
      i++;
    }
    if(avi!=1)
    {
      printf("Not Ffound");
    }
    break;
	}

}