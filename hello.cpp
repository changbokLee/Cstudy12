#include <iostream>
#include <string>

using namespace std;

struct student {

	string name;
	int score;
};


int main(void) {
	struct student a;
	a.name = "나동빈";
	a.score = 100;
	cout << a.name << ":" << a.score << "점\n";
	system("pause");

	return 0;

}

