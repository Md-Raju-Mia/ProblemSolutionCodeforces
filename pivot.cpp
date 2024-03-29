#include <iostream>
using namespace std;

int findPivotInteger(int n) {
    int totalSum = n * (n + 1) / 2;
	cout<<totalSum<<endl;
    int leftSum = 0;
    
    for (int i = 1; i <= n; ++i) {
        leftSum += i;
        if (leftSum == (totalSum+i) - leftSum) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    int n;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    int pivot = findPivotInteger(n);
    if (pivot != -1) {
        std::cout << "The pivot integer is: " << pivot << std::endl;
    } else {
        std::cout << "No pivot integer exists." << std::endl;
    }

    return 0;
}
