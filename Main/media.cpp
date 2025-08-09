#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	double N, A;
	
	cin >> N >> A;
	
	cout << "MEDIA = " << fixed << setprecision(5) << (N + A) / 2.0 << endl;
}
