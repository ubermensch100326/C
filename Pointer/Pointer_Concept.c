/*
포인터 관련 개념


1. 참조와 역참조
참조 (Reference)는 포인터 변수를 설정하기 위해 기존 변수에다 ampersand (&)를 이용하여 주소값을 할당하는 것을 말한다
역참조 (Dereference)는 포인터 변수에 asterisk (*)를 사용하여 포인터가 가리키는 메모리 주소로부터 해당 값에 접근하는 것을 말한다
(포인터에 주소값을 할당할 때) ampersand는 참조 연산자이고 "address of"로 해석할 수 있다
(포인터로 값에 접근할 때) asterisk는 역참조 연산자이고 "value pointed by"로 해석할 수 있다
출처 : https://stackoverflow.com/questions/14224831/meaning-of-referencing-and-dereferencing-in-c


2. CPU와 RAM
CPU 레지스터는 메모리 주소를 이용하여 RAM에 저장되어 있는 데이터에 접근한다
CPU 레지스터는 기본 단위가 1비트이고 RAM의 기본 단위는 1바이트 (8비트)이다
레지스터의 1비트는 메모리의 개별 바이트를 참조할 수 있다
32비트 시스템에서는 한 번에 2^32개의 주소값을 처리할 수 있다
RAM의 기본 단위는 1바이트이기 때문에 주소도 1바이트 단위로 바뀐다
따라서 32비트 시스템에서는 최대 2^32*(1바이트)인 약 4기가바이트의 RAM까지 처리할 수 있다
64비트 시스템에서는 한 번에 2^64개의 주소값을 처리할 수 있고 따라서 최대로 처리할 수 있는 RAM의 용량도 커진다
포인터의 크기는 32비트 시스템에서는 4바이트, 64비트 시스템에서는 8바이트이다
출처 : https://learn-news.info/17

*/

#include <stdio.h>
int main(void)
{
    int a = 20;
    int* ptr = &a;
    printf("Hello World!!");

    return 0;
}