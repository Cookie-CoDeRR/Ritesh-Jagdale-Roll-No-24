
#include <iostream>

using namespace std;

template <class T>
class Swapper {
private:
	T a, b;

public:
	Swapper(T x, T y) {
		a = x;
		b = y;
	}

	void showBeforeSwap() {
		cout << "Before swap: a = " << a << ", b = " << b << endl;
	}

	void swapValues() {
		T temp = a;
		a = b;
		b = temp;
	}

	void showAfterSwap() {
		cout << "After swap:  a = " << a << ", b = " << b << endl;
	}
};

int main() {
	Swapper<int> intSwap(10, 20);
	Swapper<float> floatSwap(3.5f, 7.2f);
	Swapper<double> doubleSwap(12.34, 56.78);

	intSwap.showBeforeSwap();
	intSwap.swapValues();
	intSwap.showAfterSwap();
	cout << endl;

	floatSwap.showBeforeSwap();
	floatSwap.swapValues();
	floatSwap.showAfterSwap();
	cout << endl;

	doubleSwap.showBeforeSwap();
	doubleSwap.swapValues();
	doubleSwap.showAfterSwap();

	return 0;
}
