#include <iostream>
#include <string>

using namespace std;

struct student {

	string name;
	int score;
};


int main(void) {
	struct student a;
	a.name = "λλλΉ";
	a.score = 100;
	cout << a.name << ":" << a.score << "μ \n";
	system("pause");

	return 0;

}

