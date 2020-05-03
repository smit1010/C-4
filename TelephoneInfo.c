#include <stdio.h>
#include <string.h>

struct person{
    char name[20];
    char phoneNum[20];
    int age;
};

int main(){

    struct person man1, man2;
    strcpy(man1.name, "김태희");
    strcpy(man1.phoneNum, "010-9121-7327");
    man1.age = 26;

    fputs("성함을 입력하세요 : ", stdout);
    scanf("%s", man2.name);
    fputs("핸드폰 번호를 입력하세요 : ", stdout);
    scanf("%s", man2.phoneNum);
    fputs("나이를 입력하세요 : ", stdout);
    scanf("%d", &man2.age);

    printf("이름: %s\n", man1.name);
    printf("핸드폰 번호: %s\n", man1.phoneNum);
    printf("나이: %d\n", man1.age);

    printf("이름: %s\n", man2.name);
    printf("핸드폰 번호: %s\n", man2.phoneNum);
    printf("나이: %d\n", man2.age);

    return 0;
}
