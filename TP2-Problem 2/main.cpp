// Problem 2 - Write a C++ program that will prompt the user to input ten integer values
#include <iostream>
#include <cstdlib>
using namespace std;


int main()
{
	int min, max, mod_index, mod_max;
	int array[10] = {0};
	int mod_array[10] = { 0 };

	cout << "input ten(10) values" << endl;
	int i;
	for (i = 0; i < 10; i++)
	{
		cin >> array[i];
		for (int j = 0; j < i; j++)
		{
			if (array[i] == array[j])
			{
				mod_array[j]++;
				break;
			}
		}
	}

	min = array[0];
	max = array[0];
	mod_max = mod_array[0];
	mod_index = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << mod_array[i];
	}

	for (int i = 0; i < 10; i++)
	{
		if (array[i] > max)
			max = array[i];
		if (array[i] < min)
			min = array[i];
		if (mod_array[i] > mod_max)
		{
			mod_index = i;
			mod_max = mod_array[i];
		}

	}


	if (mod_max == 0)
	{
		cout << "\nall the values are occured just one time. There isn't any '\nmost occured value in this set'" << endl;
		cout << "\nminimum value : " << min << "\nmaximum value :" << max << endl;
	}
	else
		cout << "\n\nminimum value : " << min << "\n\nmaximum value :" << max << "\n\nmod (most occured value)" << array[mod_index] << endl;


}
