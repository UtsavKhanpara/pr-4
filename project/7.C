
//  p alphabet print //

#include<stdio.h>
#include<conio.h>

main()

{
	int i,j;

	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 ||  i==3  ||  j==1  ||  j==5  &&  i==2 )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");

	}
	getch();

}
