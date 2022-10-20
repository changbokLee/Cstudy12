/*
C++에서는 생성자를 이용해 객체를 생성함과 동시에 멤버변수를 초기화 할수있습니다.
생성자는 특별한 메소드로, 클래스의 이름과 동일한 이름의 메소드로 구현됩니다

생성자는 반환값이 없습니다. 생성자는 여러번 정의되어 다양한 방법으로 객체를 초기화
할수 있습니다.

소멸자는 객체의 수명이 끝났을때 객체를 제거하기위한 목적으로 사용됩니다.

상속은 객체지향프로그래밍의 주요한 특성중하나입니다. 현실세계에서의 상속을
개념을 프로그래밍으로 그대로 가져와 사용할수있습니다.

상속에서의 생성자와 소멸자

자식클래스의 인스턴스를 만들때 가장먼저 부모클래스의 생성자가 호출됩니다. 이후에 자식
클래스의 생성자가 호출됩니다. 또한 자식클래스의  수명이 다했을 댸는 자식클래스의 소멸자가
먼저 호출된이후에 부모클래스의 소멸자가 호출됩니다.
*/

#include <iostream>
#include <string>

using namespace std;

class Person {
private:
	string name;
public:
	Person(string name) : name(name) {}
	string getName() {
			return name;
		}
	void showName() {
		cout << "이름:" << getName() << '\n';
	}
};


class Student : Person {
private:
	int studentID;
public:
	Student(int studentID, string name) : Person(name) {
		this->studentID = studentID;
	}
	void show() {
		cout << "학생번호" << studentID << '\n';
		cout << "학생이름" << getName() << '\n';
	}

	void showName() {
		cout << "학생번호" << studentID << '\n';
		cout << "학생이름" << getName() << '\n';
	}



};

int main(void) {
	Student student(1, "나동빈");
	student.showName();

	return 0;
}