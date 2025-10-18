#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int inc(int counter);
int main(int argc, char *argv[]) {
	int i=10;
	printf("함수 호출전 i=%d\n",i);
	i=inc(i);// 반환되는 값을 i에 다시 넣어줌 
	printf("함수 호출후 i=%d\n",i);
	return 0;
}
//counter자체가 함수 지역변수기 때문에 반환이 돼도 메인에 반영이 안됨(counter가 아니라 i를 써도 겉으로 보기에만 같은 이름인 다른 변수이기  떄문에 반영안됨 
int inc(int counter){
	counter++;
	return counter;

}
