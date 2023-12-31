// C program to implement iterative Binary Search
#include <stdio.h>

// int binary_search(int arr[], int l, int r, int x)
// {
// 	int m = l + (r - l) / 2;
// 	if (arr[m] == x) return m;
// 	else if (arr[m] > x) binary_search(arr, l, m-1, x)
// 	else if (arr[m] < x) binary_search(arr, m+1 , r, x)
// 	else return -1
// }


// An iterative binary search function.
int binarySearch(int arr[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;

		// Check if x is present at mid
		if (arr[m] == x)
			return m;

		// If x greater, ignore left half
		if (arr[m] < x)
			l = m + 1;

		// If x is smaller, ignore right half
		else
			r = m - 1;
	}

	// If we reach here, then element was not present
	return -1;
}

int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? printf("Element is not present"
							" in array")
				: printf("Element is present at "
							"index %d",
							result);
	return 0;
}
