#include <iostream>
#include <iomanip>

using namespace std;

//f(1) = 4/1						 = 4/1
//f(2) = 4/1 - 4/3					 = f(1) - 4/3
//f(3) = 4/1 - 4/3 + 4/5			 = f(2) + 4/5
//f(4) = 4/1 - 4/3 + 4/5 - 4/7		 = f(3) - 4/7
//f(5) = 4/1 - 4/3 + 4/5 - 4/7 + 4/9 = f(4) + 4/9
//......
double calcPI(int term)
{
	// base case
	if(term == 1) return 4.0/1;

	// recursive step
	else
	{
		if(term%2 == 1) return calcPI(term-1) + 4.0/(2*term-1);
		else return calcPI(term-1) - 4.0/(2*term-1);
	}
	
}

int main()
{
	int term;

	cout << "How many terms for PI: ";
	cin >> term;
	cout << "PI with " << term << " is " ;
	cout << fixed << setprecision(15) << calcPI(term) << endl;
	return 0;
}
