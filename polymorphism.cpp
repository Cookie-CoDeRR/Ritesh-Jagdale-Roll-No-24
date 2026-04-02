#include <iostream>

using namespace std;

template <class C>
class A {
private:
	C a, b;

public:
	A(C x, C y) {
		a = x;
		b = y;
	}

	void show() {
		cout << "The Addition of " << a << " and " << b << " is " << add() << endl;
	}

	C add() {
		C c = a + b;
		return c;
	}
};

int main() {
	A<int> addInt(8, 6);
	A<float> addFloat(3.5f, 2.6f);
	A<double> addDouble(2.156, 5.234);

	addInt.show();
	cout << endl;
	addFloat.show();
	cout << endl;
	addDouble.show();
	cout << endl;

	return 0;
}