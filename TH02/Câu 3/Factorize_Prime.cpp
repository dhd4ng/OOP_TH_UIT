#include "Stack.h"
#include <math.h>

void solve(int n) {
	int save = n;
	Stack s;
	for (int i = 2; i < sqrt(n); i++) {
		while (n % i == 0) {
			s.push(i);
			n /= i;
		}
	}
	if (n > 1) s.push(n);
	cout << save << " = ";
	while (!s.empty()) {
		int res = s.peek();
		s.pop();
		cout << res;
		if (!s.empty()) cout << "*";
	}
}

int main() {
	int n;
	cout << "Enter an integer: "; cin >> n;
	solve(n);

}