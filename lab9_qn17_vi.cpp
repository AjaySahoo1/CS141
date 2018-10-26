#include <iostream>
using namespace std;

// returns true if X and Y are same
int compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
			return 0;
		X++;
		Y++;
	}

	return (*Y == '\0');
}

// Function to implement strstr() function
const char* strstr(const char* X, const char* Y)
{
	while (*X != '\0')
	{
		if ((*X == *Y) && compare(X, Y))
			return X;
		X++;
	}

	return NULL;
}

// Implement strstr function in C++
int main()
{
	char X[50];
	cin.getline(X,50);
	char Y[50];
    cin.getline(Y,50);
	cout<< strstr(X, Y);

	return 0;
}
