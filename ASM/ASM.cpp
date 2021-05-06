
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    for (int t=0;;)
    {

        printf("Line algoritm\n");
        int a, b, i, y;//Объявление переменных

        //Ввод исхожных данных
        printf("\nInput a: ");
        scanf_s("%d", &a);

        printf("\nInput b: ");
        scanf_s("%d", &b);

        printf("\nInput i: ");
        scanf_s("%d", &i);

        _asm
        {

            mov ecx, [i]    ;// Загрузить I в ecx
            mov eax, [a]    ;// Загрузить A в eax
            add eax, [b]    ;// A + B
            mov ebx, eax    ;// Загрузить A + B в ebx
            mov eax, 0      ;// Загрузить 0 в ax
            CYCL : add eax, ecx;// ax + cx
            loop CYCL       ;
            imul eax, ebx   ;// (A + B)* (1 + 2 + 3 + … + I)
            mov[y], eax     ;// Загрузить результат в Y
        }

        //Вывод результата
        printf("\nY = %d", y);
        _getch();
        system("cls");

    }
}
