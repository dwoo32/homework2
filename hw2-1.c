#include <stdio.h>//stdio.h헤더파일은 포함한다.
int main()
{
char charType;//문자열 데이터타입의 변수 선언.
int integerType;//정수형 데이터타입의 변수 선언.
float floatType;//실수형 데이터타입(float)의 변수 선언.
double doubleType;//실수형 데이터타입(double)의 변수 선언.
printf("Size of char: %ld byte\n",sizeof(charType));//변수 charType의 크기 출력.
printf("Size of int: %ld bytes\n",sizeof(integerType));//변수 intergetType의 크기 출력.
printf("Size of float: %ld bytes\n",sizeof(floatType));//변수 floatType의 크기 출력.
printf("Size of double: %ld bytes\n",sizeof(doubleType));//변수 doubleType의 크기 출력.
printf("-----------------------------------------\n");//구분을 위한 선 출력.
printf("Size of char: %ld byte\n",sizeof(char));//문자열 데이터타입의 크기 출력.
printf("Size of int: %ld bytes\n",sizeof(int));//정수형 데이터타입의 크기 출력.
printf("Size of float: %ld bytes\n",sizeof(float));//실수형 데이터타입 float의 크기 출력.
printf("Size of double: %ld bytes\n",sizeof(double));//실수형 데이터타입의 double 크기 출력.
printf("-----------------------------------------\n");//구분을 위한 선 출력.
printf("Size of char*: %ld byte\n",sizeof(char*));//char형 포인터 변수가 저장되기 위해 사용하는 메모리의 크기 출력.
printf("Size of int*: %ld bytes\n",sizeof(int*));//int형 포인터 변수가 저장되기 위해 사용되는 메모리의 크기 출력.
printf("Size of float*: %ld bytes\n",sizeof(float*));//float형 포인터 변수가 저장되기 위해 사용되는 메모리의 크기 출력.
printf("Size of double*: %ld bytes\n",sizeof(double*));//double형 포인터 변수가 저장되기 위해 사용되는 메모리의 크기 출력.
printf("[----- [Kimdongwoo] [2020039058] -----]\n");
return 0;
} 