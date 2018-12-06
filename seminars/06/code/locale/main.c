#include <locale.h>
#include <stdio.h>
#include <wchar.h>
#include <wctype.h>

int main()
{
    setlocale(LC_ALL, "");
    wint_t c = getwc(stdin);
    if (c == EOF) {
        return 0;
    }
    printf("%d\n", c);
    return 0;
}
