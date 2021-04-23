#include <stdio.h>

int main()
{
	printf("Hello, world!\n");

	return 0;
}

/*
printf는 표준 출력 함수이다. 물론 stdio.h 없이 출력할 수 있지만, extern으로 이용하여 함수를 호출하게 된다.
여기서 extern은 외부에서 가져 오는 것을 의미한다.
하지만, gcc에서는 경고 표시가 나올 것이다.
*/