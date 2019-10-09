#include <hangul/hangul.h>
#include <stdio.h>

int main(void)
{
    int keyboard_count = hangul_keyboard_list_get_count();
    printf("count of keyboards: %d\n", keyboard_count);
    return 0;
}
