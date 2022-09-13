#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

void sortStr(char *str, int size);
int main()
{
    // 문자열 사전식 출력하기 , 아스키코드 오름차순 정렬

    char str[MAX];
    scanf("%s", str);

    sortStr(str, strlen(str));
    printf("%s\n", str);

    return 0;
}

void sortStr(char *str, int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            // 이 방법도 있지만 각 문자를 입력받을때 그것을 int 형으로 형변환해서 저장해서 비교하는것도 하나의       
            int strToNum1 = str[j] - '0';
            int strToNum2 = str[j + 1] - '0';
            if (strToNum2 < strToNum1)
            {
                int tmp = str[j + 1];
                str[j + 1] = str[j];
                str[j] = tmp;
            }
        }
    }
}
