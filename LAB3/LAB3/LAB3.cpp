#include <stdio.h>
int main() {
	int al, b, c, d, k1, k2, n;
	printf("Введите 4 числа:");
	scanf("%i%i%i%i", &a, &b, &c, &d);
	printf("\nВведите 2 делителя:");
	scanf("%d%d", &k1, &k2);
	n = 0;
	if (a < 0 && (a % k1 !=0 || a % k2 == 0)) {
		n += 1;
	}
	else
	if (b < 0 && (b % k1 != 0 || b % k2 == 0)) {
			n += 1;
		}
	if (c < 0 && (c % k1 != 0 || c % k2 == 0)) {
			n += 1;
		}
	if (d < 0 && (d % k1 != 0 || d % k2 == 0)) {
			n += 1;
	}
	printf("MAX=%d\n", a > b ? (a > c ? a : c) : (b > c ? b : c));
    printf("%d", n);
	return 0;
	}