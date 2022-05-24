#include<iostream>
using namespace std;

int main()
{
	int size, i, arr1[10], arr2[10], sub[10];
	
	cout << "\nPlease Enter the Array Size =  ";
	cin >> size;
	
	cout << "\nPlease Enter the First Array Items =  ";
	for(i = 0; i < size; i++)
	{
		cin >> arr1[i];
	}	
	cout << "\nPlease Enter the Second Array Items =  ";
	for(i = 0; i < size; i++)
	{
		cin >> arr2[i];
	}
	for(i = 0; i < size; i++)
	{
		sub[i] = arr1[i] - arr2[i];
		cout << arr1[i] << " -" << arr2[i] << " = " << sub[i] << "\n";
	}
	cout << "\nThe Final Result of adding 2 One Dimensional Arrays = ";
	for(i = 0; i < size; i++)
	{
		cout << sub[i] << " ";
	}

 	return 0;
}