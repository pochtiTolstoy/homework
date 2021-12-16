#include <iostream>

int main() {
	int n;
	double x;
	std::cin >> n >> x;
	int *arr = new int[n + 1];


	for (int i = n; i >= 0; --i)
	{
		std::cin >> arr[i];
    }

    int s = arr[n]; //last elem
    for (int i = 1; i <= n; ++i)
    {
		s *= x;
        s += arr[n-i];
	}
	std::cout << s << std::endl;
	delete [] arr;
    return 0;
}

