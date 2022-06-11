#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
int arr[100][100], i, j, n;
int count = 1;
printf("Enter the size of the matrix: ");
scanf("%d",&n);
int round = ceil((double)n/2);
for(i=0;i<round;i++)
	{
	for(j=i;j<=n-i-1;j++)
		{
		arr[i][j] = count++;
		}
	for(j=i+1;j<=n-i-1;j++)
		{
		arr[j][n-i-1] = count++;
		}
	for(j=n-i-2;j>=i;j--)
		{
		arr[n-i-1][j] = count++;
		}
	for(j=n-i-2;j>i;j--)
		{
		arr[j][i] = count++;
		}
	}
for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("%d\t",arr[i][j]);
		}
	printf("\n");
	}
getch();
}
