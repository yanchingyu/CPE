#include <iostream>
using namespace std;

int main() 
{
	int n1, n2;

	while (cin >> n1 >> n2)
	{
		if (n1 == 0 && n2 == 0)
			break;

		int carry = 0, count = 0;
		while (n1 || n2)
		{
			if (n1 % 10 + n2 % 10 + count >= 10)
			{
				count = 0;
				count++;
				carry += 1;
			}
			else
			{
				count = 0;
			}
			n1 /= 10;
			n2 /= 10;
		}

		if (carry == 0)
			cout << "No carry operation." << endl;
		else if (carry == 1)
			cout << carry << " carry operation." << endl;
		else if (carry > 1)
			cout << carry << " carry operations." << endl;
		else
			cout << "error, re-enter";
	}

	system("pause");
	return 0; 
}

/*
Children are taught to add multi-digit numbers from right-to-left one digit at a time. Many find the
��carry�� operation - in which a 1 is carried from one digit position to be added to the next - to be a
significant challenge. Your job is to count the number of carry operations for each of a set of addition
problems so that educators may assess their difficulty.

Input
Each line of input contains two unsigned integers less than 10 digits. The last line of input contains ��0
0��.

Output
For each line of input except the last you should compute and print the number of carry operations
that would result from adding the two numbers, in the format shown below.

Sample Input
123 456
555 555
123 594
0 0

Sample Output
No carry operation.
3 carry operations.
1 carry operation.
*/