#include <stdio.h>

void dice(int input) {
	printf("동빈이가 던진 주사위: %d\n", input);

}

int main(void) {
	dice(3);
	dice(5);
	dice(1);
	system("pasue");
}