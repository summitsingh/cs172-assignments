/*
CS-172-C, Lab 063, Group 45
5/19/2017
Summit Singh Thakur
Shivansh Suhane
Kevin Wen
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int square(int a)
{
	return a*a;
}

int cube(int a)
{
	return a*a*a;
}

int two_n(int n)
{
	if (n == 0) return 1;
	else return 2 * two_n(n - 1);
}

int factorial(int n)
{
	int temp;
	if (n <= 1) return 1;
	temp = n * factorial(n - 1);
	return temp;
}

int fib(int n)
{
	if (n <= 0) return 0;
	else if (n == 1) return 1;
	else return fib(n - 1) + fib(n - 2);
}

int perrin(int n)
{
	if (n == 0) return 3;
	if (n == 1) return 0;
	if (n == 2) return 2;
	return perrin(n - 2) + perrin(n - 3);
}

void make_function_table(string title, int(*f)(int))
{
	cout << title << endl;
	for (int i = 0; i <= 40; i++)
	{
		cout << setw(3) << i << " | " << setw(4) << f(i) << endl;
	}
}

void main()
{
	vector<int(*)(int)> my_functions = { square, cube, two_n, factorial, fib, perrin };
	vector<string> title_functions = { "Squared", "Cubed", "Two_n", "Factorial", "Fibonacci", "Perrin" };
	for (int i = 0; i < 6; i++)
	{
		make_function_table(title_functions[i], my_functions[i]);
		cout << endl;
	}
}
