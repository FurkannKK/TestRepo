#include <iostream>
#include <chrono>
#include <algorithm>
#include <vector>

using namespace std;
using namespace std::chrono;

int main() {

	int const m = 5;
	int myArray[m][m][m];


	auto start = high_resolution_clock::now();
	for (int i{ 0 }; i < m; i++) {
		for (int j{ 0 }; j < m; j++) {
			for (int k{ 0 }; k < m; k++) {
				myArray[i][j][k] = rand() % 100;
				cout << myArray[i][j][k] << " ";
			}
		}
	}
	cout << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << duration.count() << " microsecond " << endl;

	//m=1 için 975 microsecond
	//m=2 için 3561 microsecond
	//m=3 için 8376 microsecond
	//m=4 için 15587 microsecond
	//m=5 için 28268 microsecond
	//Time complexity O(n^3)

	return 0;
}
