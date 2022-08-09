#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class A {
public:
	A(){
		cout << "Con" << " ";
	}

	A(A const& a){
		cout << "CPYC" << " ";
	}

	// 移动构造
	A(A&& a){
		cout << "MOVC" << " ";
	}

	~A(){
		cout << "DeC" << " ";
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
