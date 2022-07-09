#include<iostream>
#include<string>
#include<time.h>

using namespace std;
void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 30;
	}
}

void ShowArr(const int* const arr, int const size)
{
	cout<<endl;
	for (int i = 0; i < size; i++)
	{
		cout <<"\t" <<arr[i];
	}
}


void main()
{
	srand(time(NULL));
	const int SIZE = 10;
	int *FirstArray = new int[SIZE];
	int *SecondArray = new int[SIZE];

	FillArray(FirstArray, SIZE);
	FillArray(SecondArray, SIZE);


	cout << "First array:"<<endl;
	ShowArr(FirstArray, SIZE);
	cout << "\nSecond array:" << endl;;
	ShowArr(SecondArray, SIZE);

	///////////////////////////////////////////
	//	creating a new array to copy the data
	//////////////////////////////////////////
	delete[]FirstArray;

	FirstArray = new int[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		FirstArray[i] = SecondArray[i];
	}
	cout << "\nCopied first array:" << endl;

	ShowArr(FirstArray, SIZE);

	delete[]FirstArray;
	delete[]SecondArray;
}
