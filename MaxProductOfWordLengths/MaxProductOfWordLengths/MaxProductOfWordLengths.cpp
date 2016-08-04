// MaxProductOfWordLengths.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"MaxProductOfWordLengths.h"

int main()
{
	int m;
	cin >> m;
	vector<string> input(m);
	for (int i = 0; i < m; i++)
		cin >> input[i];
	maxProductOfWordsLengths maxP;
	cout << maxP.maxProduct(input) << '\n';
	exit(0);
    return 0;
}

