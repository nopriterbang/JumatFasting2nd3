#include <iostream>
using namespace std;

int arr[20]; // Array to be searched
int n;		 // Number of elements in array
int i;		 // Index of array elements

void input()
{
	while (true)
	{
		cout << "Enter the number of elements of in the array: ";
			cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements. \n\n";
	}

	// Accept array elements
	cout << "\n-------------------\n";
	cout << " Enter array elements\n";
	cout << "---------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void LinearSearch()
{
	char ch;
	int ctr; // Number of comparisons
	int item;
	do 
	{
		// Accept the number to be searched
		cout << "\nEnter the elements you want search: "; // step 1
		cin >> item;

		ctr = 0;
		i = 0; // step 2
		while (i < n) // step 3
		{
			ctr++; 
			if (arr[i] == item)
			{
				cout << "\n" << item << "found at position" << (i + 1) << endl; // step 6
				break;
			}
			i++: // step 4
		}
		if (i == n) // step 5
			cout << "\n" << item << "not found in the array\n";
		cout << "\nNumber of comparisons: " << ctr << endl;

		cout << "\nContinue serch (y/n): ";
	}while ((ch == 'y') || (ch == 'Y'))
}

void display()
{

}