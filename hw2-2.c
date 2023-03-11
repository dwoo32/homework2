#include <stdio.h>//stdio.h 헤더파일을 포함.
int main()
{
int i;//정수형 변수 i선언
int *ptr;//정수형 포인터 ptr선언
int **dptr;//정수형 이중포인터 dptr선언
i = 1234;//변수 i의 값을 1234로 초기화
printf("[checking values before ptr = &i] \n");//정수형 변수 ptr에 i의 주소값을 대입하기 전 변수 값들을 확인
printf("value of i == %d\n", i);//정수형 변수 i의 값 출력
printf("address of i == %p\n", &i);//변수 i의 주소 출력
printf("value of ptr == %p\n", ptr);//포인터 ptr의 값 출력
printf("address of ptr == %p\n", &ptr);//포인터 ptr의 주소 출력
ptr = &i; /* 포인터ptr에 변수i의 주소 할당 */
printf("\n[checking values after ptr = &i] \n");//포인터 ptr에 변수 i의 주소를 할당한 후 변수 값들을 확인
printf("value of i == %d\n", i);//변수 i의 값 출력
printf("address of i == %p\n", &i);//변수 i의 주소 출력
printf("value of ptr == %p\n", ptr);//포인터 ptr의 값 출력
printf("address of ptr == %p\n", &ptr);//포인터 ptr의 주소 출력
printf("value of *ptr == %d\n", *ptr);//포인터 ptr을 간접참조하여 얻은 값 출력
dptr = &ptr; /* 이중포인터 dptr에 포인터 변수ptr의 주소 할당 */
printf("\n[checking values after dptr = &ptr] \n");//이중포인터 dptr에 포인터 변수ptr의 주소 할당한 이후 변수 값들을 확인
printf("value of i == %d\n", i);//변수i의 값 출력
printf("address of i == %p\n", &i);//변수i의 주소 출력
printf("value of ptr == %p\n", ptr);//포인터 ptr의 값 출력
printf("address of ptr == %p\n", &ptr);//포인터 ptr의 주소 출력
printf("value of *ptr == %d\n", *ptr);//포인터 ptr을 간접참조하여 얻은 값 출력
printf("value of dptr == %p\n", dptr);//포인터 dptr의 값 출력
printf("address of dptr == %p\n", &dptr);//포인터 dptr의 주소 출력
printf("value of *dptr == %p\n", *dptr);//포인터 dptr가 가르키는 ptr의 값 출력
printf("value of **dptr == %d\n", **dptr);//이중포인터 dptr이 간접참조하는 변수 i의 값 출력
*ptr = 7777; /* ptr이 가르키는 변수의 값을 7777로 초기화 */
printf("\n[after *ptr = 7777] \n");//ptr이 가르키는 변수 i의 값을 7777로 초기화 시킨 이후임을 표시
printf("value of i == %d\n", i);//변수 i의 값 출력
printf("value of *ptr == %d\n", *ptr);//포인터 ptr을 간접참조하여 얻은 값 출력
printf("value of **dptr == %d\n", **dptr);//이중포인터 dptr이 간접참조하는 변수 i의 값 출력
**dptr = 8888; /* 이중포인터 dptr이 가르키는 값을 8888로 초기화 */
printf("\n[after **dptr = 8888] \n");//이중포인터 dptr이 가르키는 값을 8888로 초기화시킨 이후임을 표시
printf("value of i == %d\n", i);//변수 i의 값 출력
printf("value of *ptr == %d\n", *ptr);//포인터 ptr을 간접참조하여 얻은 값 출력
printf("value of **dptr == %d\n", **dptr);//이중포인터 ptr을 간접참조하여 얻은 값 출력
printf("[----- [Kimdongwoo] [2020039058] -----]\n");
return 0;
}