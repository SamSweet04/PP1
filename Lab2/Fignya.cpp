// C++ program to count
// even and odd digits
// in a given number
#include <iostream>
using namespace std;

// Function to count digits
int countEvenOdd(int n)
{
	int even_count = 0;
	int odd_count = 0;
	while (n > 0)
	{
		int rem = n % 10;
		if (rem % 2 == 0)
			even_count++;
		else
			odd_count++;
		n = n / 10;
	}
	cout << "Even count : "
		<< even_count;
	cout << "\nOdd count : "
		<< odd_count;
	if (even_count % 2 == 0 &&
		odd_count % 2 != 0)
		return 1;
	else
		return 0;
}