#include "pch.h"
#define _CRT_SECURE_NO_DEPRECATE
#include <cstdio>

const int max_n = 1111;
double p[max_n] = {};

int main1002a() {
	int k, n, count = 0;
	double a;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d %lf", &n, &a);
		p[n] += a;
	}
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d %lf", &n, &a);
		p[n] += a;
	}
	for (int i = 0; i < max_n; i++) {
		if (p[i] != 0) {
			count++;
		}
	}
	printf("%d", count);
	for (int i = max_n - 1; i >= 0; i--) {
		if (p[i] != 0) printf(" %d %.1f", i, p[i]);
	}
	return 0;
}