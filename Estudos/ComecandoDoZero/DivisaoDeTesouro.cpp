#include <bits/stdc++.h>

using namespace std;

int main(){
	int A, N;
	// A: o n�mero inteiro de moedas na arca
	// N: o n�mero inteiro de marinheiros (n�o contando o Capit�o).
	cin >> A >> N;
	
	cout << (A/(N+2))*2;
}
