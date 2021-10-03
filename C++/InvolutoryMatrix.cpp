// Program to implement involutory matrix.
#include <bits/stdc++.h>
#define N 3
using namespace std;

// Function for matrix multiplication.
void multiply(int mat[][N], int res[][N])
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			res[i][j] = 0;
			for (int k = 0; k < N; k++)
				res[i][j] += mat[i][k] * mat[k][j];
		}
	}
}

// Function to check involutory matrix.
bool InvolutoryMatrix(int mat[N][N])
{
	int res[N][N];

	// multiply function call.
	multiply(mat, res);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == j && res[i][j] != 1)
				return false;
			if (i != j && res[i][j] != 0)
				return false;
		}
	}
	return true;
}

// Driver function.
int main()
{
	int mat[N][N] = { { 1, 0, 0 },
					{ 0, -1, 0 },
					{ 0, 0, -1 } };

	// Function call. If function return
	// true then if part will execute otherwise
	// else part will execute.
	if (InvolutoryMatrix(mat))
		cout << "Involutory Matrix";
	else
		cout << "Not Involutory Matrix";

	return 0;
}
