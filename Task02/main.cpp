#include <iostream>
using namespace std;

int main() {
	int n,m;
	cout << "Input size of matrix(NxM): ";
	cin >> n >> m;

	int** matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 100;
		}
	}

	cout << "Matrix:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}


	int imin = 0, jmin = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] < matrix[imin][jmin]) {
				imin = i;
				jmin = j;
			}
		}
	}
	cout << "Min value is " << matrix[imin][jmin] << endl;
	cout << "Position: matrix[" << imin + 1 << "][" << jmin + 1 << "].\n";

	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}