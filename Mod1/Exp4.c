// Recursive C program to check
// if a string is subsequence
// of another string
#include <cstring>
#include <stdio.h>

// Returns true if str1[] is a
// subsequence of str2[]. m is
// length of str1 and n is length of str2
bool isSubSequence(char str1[], char str2[], int m, int n)
{

	// Base Cases
	if (m == 0)
		return true;
	if (n == 0)
		return false;

	// If last characters of two
	// strings are matching
	if (str1[m - 1] == str2[n - 1])
		return isSubSequence(str1, str2, m - 1, n - 1);

	// If last characters are
	// not matching
	return isSubSequence(str1, str2, m, n - 1);
}

int main()
{
	char str1[] = "hello";
	char str2[] = "hello world";
	int m = strlen(str1);
	int n = strlen(str2);
	if isSubSequence(str1, str2, m, n)
		printf("Yes ");
	else
		printf("No");
	return 0;
}
