#include<iostream>
using namespace std;
void strassen(int arr1[],int arr2[])
{
	int c1 = (arr1[0] * arr2[0] + (arr1[1] * arr2[2]));
	int c2 = (arr1[0] * arr2[1] + (arr1[1] * arr2[3]));
	int c3 = (arr1[2] * arr2[0] + (arr1[3] * arr2[2]));
	int c4 = (arr1[2] * arr2[1] + (arr1[3] * arr2[3]));

	cout << c1 << " " << c2 << endl;
	cout << c3 << " " << c4 << endl;
}
