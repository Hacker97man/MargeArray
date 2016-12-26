#include "stdafx.h"
#include<iostream>
using namespace std;
template<class T>
T*sort(T*ar,int size) {
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size;j++)
			if (ar[i]<ar[j])
			{
				T temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
	return ar;
}
template<class T>
T * marge(T first[], T second[],int size1,int size2){
	T*re = new T[size1 + size2];
	int i = 0;
	for (; i < size1; i++)
		re[i] = first[i];
	for (; i < size2+size1; i++)
		re[i] = second[i - size1];
	re=sort(re,size1+size2);
	return re;
}

int main()
{
	int ar1[15];
	int ar2[15];
	int n, m;
	cout << "Enter The Size Of The First Array :";
	cin >> n;
	cout << "Enter The Size Of The Second Array :";
	cin >> m;
	for (int i = 0; i < n; i++)
		cin >> ar1[i];
	for (int i = 0; i < m; i++)
		cin >> ar2[i];
	int * re = marge<int>(ar1, ar2, n, m);
	cout << "The All element After The Sorting Is :" << endl;
	for (int i = 0; i < n + m; i++)
		cout << re[i] << " ";
	cout << endl;
    return 0;
}

