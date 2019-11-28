#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int array[5];
	ofstream arith("sum.txt");
	if (arith)
	{
		int sum = 0, n;
		cout << " Enter number of elements to find its sum:\n";   //Elements to find its sum.
		cin >> n;
		for (int i = 0; i < n; ++i) {                             //Loops for elements.
			cin >> array[i];
		}
		for (int i = 0; i < n; ++i) {
			sum = sum + array[i];
		}
		for (int i = 0; i < n; ++i) {
			cout << "Sum is:" << sum;                                //Loop to find its sum.
		}
	}
	else
		cout << " NOt valid";
	arith.close();
	ifstream arith("sum.txt");
	if (arith)
	{
		cout << arith << " ";
	}
	else cout << " file not created";
	return 0;
}


