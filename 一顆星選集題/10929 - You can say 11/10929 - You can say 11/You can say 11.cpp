#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;

	while (cin >> n)
	{
		int odd = 0, even = 0;
		
		if ((n.at(0) - '0') == 0)
			return 0;
		else if (n.length() % 2 == 0)
		{
			for (int i = 0, j = 1; i < n.length(), j < n.length(); i += 2, j += 2)
			{
				odd += (n.at(j) - '0');
				even += (n.at(i) - '0');
			}
		}
		else
		{
			for (int i = 0; i < n.length(); i += 2)
			{
				odd += (n.at(i) - '0');
			}
			for (int j = 1; j < n.length(); j += 2)
			{
			 	even += (n.at(j) - '0');
			}
		}

		if ((odd - even) % 11 == 0)
			cout << n << " is a multiple of 11." << endl;
		else
			cout << n << " is not a multiple of 11." << endl;
	}

	system("pause");
	return 0;
}

/*
Your job is, given a positive number N, determine if it is a multiple of eleven.

Input
The input is a file such that each line contains a positive number. A line containing the number ¡¥0¡¦ is
the end of the input. The given numbers can contain up to 1000 digits.

Output
The output of the program shall indicate, for each input number, if it is a multiple of eleven or not.

Sample Input
112233
30800
2937
323455693
5038297
112234
0

Sample Output
112233 is a multiple of 11.
30800 is a multiple of 11.
2937 is a multiple of 11.
323455693 is a multiple of 11.
5038297 is a multiple of 11.
112234 is not a multiple of 11
*/