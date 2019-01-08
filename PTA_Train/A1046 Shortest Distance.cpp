#include "pch.h"
#define _CRT_SECURE_NO_DEPRECATE
#include <cstdio>
#include <algorithm>
using namespace std;

const int MAXN = 100005;
int dis[MAXN], A[MAXN];

int main1046a() {
	int sum = 0, querry, n, left, right;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &A[i]);
		sum += A[i];
		dis[i] = sum;
	}
	scanf("%d", &querry);
	for (int i = 0; i < querry; i++)
	{
		scanf("%d%d", &left, &right);
		//if (left > right) swap(left, right);
		int temp = abs(dis[right - 1] - dis[left - 1]);
		printf("%d\n", min(temp, sum - temp));
	}
	return 0;
}