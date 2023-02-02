#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myList{ 7,20,3,15,8,5,13,7,1,7 };
	int tempVal1, tempVal2 = 0;

	for (int i = 0; i < myList.size(); i++)
	{
		int x = i + 1;
		if (x < myList.size() && myList[i] > myList[x])
		{
			tempVal1 = myList[x];
			tempVal2 = myList[i];
			myList[x] = tempVal2;
			myList[i] = tempVal1;
			i = -1;
		}

	}
	cout << "Bubble sorted array: ( ";
	for (int i = 0; i < myList.size(); i++)
	{
		cout << myList.at(i) << ", ";
	}
	cout << ")";

	return 0;
}