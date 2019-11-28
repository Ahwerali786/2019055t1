// 2019055T1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	ofstream fout;
	fout.open("file.txt", ios::out);
	if (fout)
	{
		cout << "file created succesfully";
		for (int i = 0; i < 5; i++)
		{
			fout << arr[i];
			
		}
	}
	else cout << "error";
	fout.close();
}
/*fout.close();
ifstream fin;
fin.open("file.txt", ios::in);
if (fin);
{
	cout << "/n the retrieved array is:";
	for (int j=0; j <=5; j++)
}
         
*/