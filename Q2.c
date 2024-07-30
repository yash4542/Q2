#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    double vec[n];
    for (int i = 0; i < n; ++i) {
        scanf("%lf", &vec[i]);
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += vec[i];
    }

    double average = sum / n;
    printf("Average: %.2lf\n", average);

    return 0;
}
