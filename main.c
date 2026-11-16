#include <stdio.h>

int main(void) {
    int i = 10;
    char c = 'a';

    int *iptr;       // 정수형 포인터 변수
    iptr = &i;        // i를 가리킴

    char *cptr;       // 문자형 포인터 변수
    cptr = &c;        // c를 가리킴

    int *iptr2;       // 정수형 포인터 변수
    iptr2 = iptr;     // iptr과 같은 곳을 가리킴

    printf("i : %p\n%p (size:%i)\n", (void *)iptr, (void *)&i, (int)sizeof(iptr));
    printf("c : %p\n%p (size:%i)\n", (void *)cptr, (void *)&c, (int)sizeof(cptr));
    printf("iptr2 : %p, %i\n", (void *)iptr2, *iptr2);

    return 0;
}
