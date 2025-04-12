#include <stdio.h>

int main(void)
{
    int maxMassiveSize = 100; // Устанавливаем размер массива 
    char name[maxMassiveSize];
    printf("Как вас зовут? ");
    scanf("%s", name);
    printf("Привет, %s\n", name);
    return 0;
}