#include "logic.h"

int sum_main_elem(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n, int m) {
	int sum = 0;


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j) {
				sum += matrix[i][j];
			}
		}
	}
	return sum;
}
int sum_addition_elem(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {

}