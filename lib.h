#include<iostream>
#include"testlib.h"
using namespace std;
int iterative(int l, int m, int z, int n, int matrixA[10][10],int matrixB[10][10],int matrixC[10][10])
{
	if (testcase(l, m, z, n)==1)
	{
		return 1;
	}
	else
	{


		for (int i = 0; i < l; i++)
		{
			for (int j = 0; j < n; j++)
			{
				matrixC[i][j] = 0;
				for (int k = 0; k < m; k++)
				{
					matrixC[i][j] = matrixC[i][j] + (matrixA[i][k] * matrixB[k][j]);
				}
			}
		}

		cout << "your matrix is" << endl;
		for (int i = 0; i < l; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << matrixC[i][j] << " ";
			}
			cout << endl;
		}
	}
}
