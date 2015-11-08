///@file	Practice 3.1
///@author	zhaowei
///@date	2015.11.08

///@brief	二分查找
int binarysearch(int x, int v[], int n) {
	int low = 0, high = n - 1;
	int mid = (low + high) / 2;
	while (low <= high && v[mid] != x) {
		if (v[mid] < x)	low = mid + 1;
		else high = mid - 1;
		mid = (low + high) / 2;
	}
	if (v[mid] == x)	return mid;
	else return -1;
}

int main() {
	int v[] = {1,2,3,4,5};
	int rslt = binarysearch(1, v, 5);
	return 0;
}