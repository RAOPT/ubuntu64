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

A func1(){
	A a;
	return a;
}

int main(){
	A b = func1();

	return 0;
}
