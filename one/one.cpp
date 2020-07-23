
/*Swapping values

#include <iostream>
using namespace std;

int radi(int* a, int* b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
	return 0;			//pointers
}

int swap(int a, int b)
{
	int c;
	c = a;
	a = b;
	b = c;
	cout << "value" << a << b;
	return (a, b);
}

int swa(int& a, int& b)
{
	int c;
	c = a;
	a = b;
	b = c;
	cout << a << b;				//reference
	return 0;
}
int main()
{
	int a, b;
	cin >> a >> b;
	//radi(&a, &b);
	//swap(a, b);
	swa(a, b);
	cout << a <<endl<< b;
}
*/


/*Size of operator

#include <iostream>
using namespace std;

int main()
{
	cout << sizeof(float) <<"\n";
	cout << sizeof(unsigned int) << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(short int) << endl;
	cout<<scope()
	return 0;
}
*/


/*storage classes: auto, register, extern and static

Auto:
	with in the function(scope)
	this is the default storage class
	data is stored in ram
	
Register:
	data is stored in register memory
	cpu has only limited register
	size of variable depends on size of register
	
Static:
	entire program(scope)
	
Extern:
	similar to global variables
	can be defined in diffeent programs and used in different programs
	eg:
		program1.cpp				program2.cpp
		#include "program2.cpp"		int i = 100;
		extern int i;
		main()
		cout<<i;
	similarly functions can also be used*/




/*static example
#include<iostream>
using namespace std;

void fun();

int main()
{
	fun();
	fun();
}
void fun()
{
	static int i = 0;
	i += 1;
	cout << i << endl;
}
*/


/*one dimensional array

#include <iostream>
using namespace std;

int main()
{
	int a[10];
	cout << a[1];
}
*/

//two dimensional array

#include <iostream>
using namespace std;

int main()
{
	int a[2][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			int m;
			cin >> m;
			a[i][j] = m;
		}
	}
	cout << a[0][1];
}


/*functions :
	returntype functionname(arguments or paraments){.....} */


//abc