#include <stdio.h>
#define _CRT_SECURE_NO_WARINGS
#define INF 10000

int arr[INF];
int count = 0;

void addBack(int data){
    arr[count] = data;
    count++;
}

int main(void)
{
    system ("pause");
    return 0;
}
