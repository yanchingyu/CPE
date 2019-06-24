#include <iostream>
using namespace std;

void bubbleSort(int temp[], int n1);

int main() 
{
	int r, s1;

	while (cin >> r)
	{
		int count = 0;
		int *sum = new int[r];
		for (int i = 0; i < r; i++)
			sum[i] = 0;
	
		while (r-- && cin >> s1)
		{
			int *temp = new int[s1];

			for (int i = 0; i < s1; i++)
				cin >> temp[i];

			if (s1 % 2 == 0)
			{
				bubbleSort(temp, s1);
				int mid = temp[s1 / 2 - 1];
				for (int i = 0; i < s1; i++)
				{
					if (mid - temp[i] >= 0)
						sum[count] += mid - temp[i];
					else
						sum[count] += -(mid - temp[i]);
				}
			}
			else
			{
				bubbleSort(temp, s1);
				for (int i = 0; i < s1; i++)
				{
					int mid = temp[s1 / 2];
					if (mid - temp[i] >= 0)
						sum[count] += mid - temp[i];
					else
						sum[count] += -(mid - temp[i]);
				}
			}

			count++;
			delete[] temp;
		}

		for (int i = 0; i < count; i++)
			cout << sum[i] << endl;

		delete[] sum;
	}
	system("pause");
	return 0;
}

void bubbleSort(int temp[], int n1)
{
	for (int i = 0; i < n1; i++) 
	{
		for (int j = 0; j < n1 - i - 1; j++)
		{
			if (temp[j] > temp[j + 1])
			{
				int temp1 = temp[j + 1];
				temp[j + 1] = temp[j];
				temp[j] = temp1;
			}
		}
	}
}


/*
The world-known gangster Vito Deadstone is moving to New York. He has a very big family there, all
of them living in Lamafia Avenue. Since he will visit all his relatives very often, he is trying to find a
house close to them.
Vito wants to minimize the total distance to all of them and has blackmailed you to write a program
that solves his problem.

Input
The input consists of several test cases. The first line contains the number of test cases.
For each test case you will be given the integer number of relatives r (0 < r < 500) and the street
numbers (also integers) s1, s2, . . . , si, . . . , sr where they live (0 < si < 30000 ). Note that several
relatives could live in the same street number.

Output
For each test case your program must write the minimal sum of distances from the optimal Vito’s house
to each one of his relatives. The distance between two street numbers si and sj is dij = |si − sj |.

Sample Input
2
2 2 4
3 2 4 6
Sample Output
2
4
*/