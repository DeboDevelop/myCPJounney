#include <stdio.h>
#include <string.h>

void cal_substr(char *str, int size) {
    int i = 0, a = 0, b = 0;
    for(i = 0; i <= size - 4; i++)
    {
        if( str[i] == 'S' && str[i + 1] == 'U' && str[i + 2] == 'V' && str[i + 3] == 'O')
            a++;
    }
    
    for(i = 0; i <= size - 7; i++)
    {
        if( str[i] == 'S' && str[i + 1] == 'U' && str[i + 2] == 'V' && str[i + 3] == 'O' && str[i + 4] == 'J' && str[i + 5] == 'I' && str[i + 6] == 'T')
            b++;
    }
    printf("SUVO = %d, ",a-b);
    printf("SUVOJIT = %d\n",b);
}

int main()
{
    int t; char str[150];
    scanf("%d", &t);
    for (int i = 0; i < t; ++i)
    {
        scanf("%s", str);
        int l = strlen(str);
        cal_substr(str, l);
    }
    return 0;
}