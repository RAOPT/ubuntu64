#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class A {
public:
	A(){
		cout << "Con" << endl;
	}

	A(A const& a){
		cout << "CPYC" << endl;
	}

	~A(){
		cout << "DeC" << endl;
	}

	A& operator=(A& a){
		cout << "Equal" << endl;
		return *this;
	}
};

void func1(A& a){
	A tmp;
	a = tmp;
}

int main(){
	A a;
	func1(a);

	return 0;
}
