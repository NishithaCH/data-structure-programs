#include <stdio.h>

int main(void)
{
	int m, n, a[30][30], b[30][30], sum[30][30], sub[30][30], tr[30][30], i, j, k, opt, opt1, ch, e, f;
	printf("Enter the number of rows in First Matrix: ");
	scanf("%d", &m);
	printf("Enter the number of columns in First Matrix: ");
	scanf("%d", &n);
	printf("Enter the elements of the First Matrix: \n");
	for(i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter the number of rows in Second Matrix: ");
	scanf("%d", &e);
	printf("Enter the number of columns in Second Matrix: ");
	scanf("%d", &f);
	printf("Enter the elements of the Second Matrix: \n");
	for(i = 0; i < e; i++)
	{
		for (j = 0; j < f; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	do
	{
		if(m == e && n == f)
		{
			printf("Enter 1 for Addition or Subtraction of the Matrices: ");
		
		if(n==e)
		{
			printf("Enter 2 for Multiplication of the Matrices\n");
			printf("Enter 3 for Transpose of the Matrices: \n");
		}
		}
		else if(m != n && n==e)
		{
			printf("Enter 2 for Multiplication of the Matrices\n");
			printf("Enter 3 for Transpose of the Matrices: \n");
		}
		else
		{
			printf("Enter 3 for Transpose of the Matrices: \n");
		}

		scanf("%d", &ch);
		switch(ch)
		{
			case 1:
			for(i = 0; i < m; i++)
			{
				for(j = 0; j < n; j++)
				{
					sum[i][j] = a[i][j] + b[i][j];
					sub[i][j] = a[i][j] - b[i][j];
				}
			}
			printf("Enter 1 for Addition and 2 for Subtraction: ");
			scanf("%d", &opt);
			switch(opt)
			{
				case 1:
				printf("The resultant Matrix is: \n");
				for(i = 0; i < m; i++)
				{
					for(j = 0; j < n; j++)
					{
						printf("%3d", sum[i][j]);
					}
					printf("\n");
				}
				break;

				case 2:
				printf("The resultant Matrix is: \n");
				for(i = 0; i < m; i++)
				{
					for(j = 0; j < n; j++)
					{
						printf("%3d", sub[i][j]);
					}
					printf("\n");
				}				
			}
			break;

			case 2:
			printf("The resultant Matrix is: \n");
			for(i = 0; i < m; i++)
			{
				for(j = 0; j < f; j++)
				{
					sum[i][j] = 0;
					for(k = 0; k < m; k++)
					{
						sum[i][j] += a[i][k] * b[k][j];
					}
					printf("%3d", sum[i][j]);
				}
				printf("\n");
			}
			break;

			case 3:
			printf("Enter 1 for Transpose of first Matrix or Enter 2 for Transpose of second Matrix: ");
			scanf("%d", &opt1);
			switch(opt1)
			{
				case 1:
				for(i = 0; i < m; i++)
				{
					for(j = 0; j < n; j++)
					{
						tr[j][i] = a[i][j];
					}
				}
				printf("The resultant Matrix is : \n");
				for(i = 0; i < n; i++)
				{
					for(j = 0; j < m; j++)
					{
						printf("%3d", tr[i][j]);
					}
					printf("\n");
				}
				break;

				case 2:

				for(i = 0; i < e; i++)
				{
					for(j = 0; j < f; j++)
					{
						tr[j][i] = b[i][j];
					}
				}
				printf("The resultant Matrix is : \n");
				for(i = 0; i < n; i++)
				{
					for(j = 0; j < m; j++)
					{
						printf("%3d", tr[i][j]);
					}
					printf("\n");
				}
				break;
			}

		}
	}
	while(ch > 0);
}
