#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int f(int n, int counter);

int main()
{
	int x, n = 20, counter = 0;// n is initialied to 5
	
	x = f(n, counter);
	printf("\n Value is : %d ", x);//print Computing factoiral n
	
	char y = getchar(); 
	
}

int f(int n, int counter)
{
	printf("Computing factorial %d ", n);
	printf("\n The number of times the multi operation performed %d", counter);
	if (n == 0) {
		return 1;		
	}
	else {
		return f(n - 1, counter+1) * n;
	}	
}


	




