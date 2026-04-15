#include "logic.h"

int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n, m;

	cout << "Input n and m: ";
	cin >> n >> m;

	init(matrix, n, m, 0, 10);
	cout << "Matrix:\n ";
	cout << convert(matrix, n, m) << endl;

	int sum = sum_main_elem(matrix, n);
	cout << "the sum of main elements is " << sum << endl;
	return 0;
}