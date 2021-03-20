#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

int LinearSearch(vector<int> x, int target)
{
	for (int i = 0; i < x.size(); i++)
		if (x[i] == target)
			return i;

	return -1;
}

int main()
{
	int data;
	cout << "Enter the number of data : ";
	cin >> data;

	vector<int> v(data);
	for (int i = 0; i < data; i++)
		v[i] = i;

	int sum = 0;
	int loop = 10000;
	srand((unsigned int)time(NULL));

	for (int i = 0; i < loop; i++)
	{
		int num = rand() % (data * 2);
		int idx = LinearSearch(v, num);

		if (idx == -1)
			sum += data;

		else
			sum += idx+1;
	}

	double expect = (0.5 * data) + (0.5 * ((data + 1)*(data) / ((double)data * 2)));
	double count = (double)sum / loop;
	cout << "\nExpect : " << expect << "\n";
	cout << "Average : " << count << "\n";
	printf("준하최고")
	return 0;
}
