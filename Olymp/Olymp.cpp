// Olymp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <cassert>
#include <cmath>
#include <algorithm>
#include <queue>
#include <random>
#include <numeric>
#include <unordered_map>
#include <iomanip>
#include <fstream>
#include <complex>
#include <array>
#include <string>
#include <bitset>
using namespace std;

const int MOD = int(1e9) + 7;

int add(int a, int b) {//модульное сложение
	a += b;
	if (a >= MOD) a -= MOD;
	if (a < 0) a += MOD;
	return a;
}

int mul(int a, int b) {//модульное умножение
	return a * 1ll * b % MOD;
}

int binpow(int a, int b) {
	int res = 1;
	while (b) {
		if (b & 1)
			res = mul(res, a);
		a = mul(a, a);
		b >>= 1;
	}
	return res;
}

int frac(int p, int q) {
	return mul(p, binpow(q, MOD - 2));
}

int main()
{
	int n = 0;
	cin >> n;

	vector <int> numCh(n);
	for (int i = 0; i < n; i++)
	{
		cin >> numCh[i];
	}

	vector <int> numZn(n);
	for (int i = 0; i < n; i++)
	{
		cin >> numZn[i];
	}

	int Sum = 0;
	int Res = 0;

	for (int i = 0; i < n; i++)
	{
		Res = add(Sum,mul(numCh[i], numZn[i]));
	}

	cout << Res;
}