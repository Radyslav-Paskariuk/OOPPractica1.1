#include <iostream>
#include <cmath>

double compute_a_k(int k) {
    if (k == 1) {
        return 0.5 * sqrt(1 + 1);
    } else {
        return 0.5 * sqrt(1 + compute_a_k(k - 1));
    }
}

double compute_sum(int n) {
    double sum = 0;
    for (int k = 1; k <= n; ++k) {
        double a_k = compute_a_k(k);
        sum += a_k / pow(3, k);
    }
    return sum;
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    double result = compute_sum(n);
    std::cout << "Result: " << result << std::endl;

    return 0;
}