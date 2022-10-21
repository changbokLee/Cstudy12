//#include <iostream>

//using namespace std;
//
//class A {
//public:
//	void show() { cout << "클래스입니다." << endl; }
//};
//
//
//class B : public A{
//
//	void show() { cout << "클래스입니다." << endl; }
//};
//
//int main(void) {
//
//
//	A* p;
//	A a;
//	B b;
//	p = &a; p->show();
//	p = &b; p->show();
//	system("pause");
//
//
//}

/*
스마트 포인터
c++의 스마트포인터는 프로그래머실수로 메모리누수를 방어하기위한 수단으로
포인터처럼 동작하는 템플릿입니다.

기본적으로 힙영역에 동적할당된 메모리를 해체하기위해서는delete키워드를 쓰면 됩니다.
스마트 포인터를 이용하면 메모리누수를 더효과적으로 방지할수있기떄문에 컴퓨터 시스템안정성을 높일
수있습니다.

일반적으로 new키워드를 이용해서 기본포인터가 특정한 메모리주소를 가리키도록 초기화한 이후에
스마트포인터를 넣어서 사용할수있습니다.

이렇게 정의된 스마트 포인터는 수명을 다했을때 소멸자에게 delete키워들 이용해, 할당된
메모리들을 자동으로 해체하는 기능을 수행합니다.

*/





















