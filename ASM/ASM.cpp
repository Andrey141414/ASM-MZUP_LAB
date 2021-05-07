
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h> // чтобы использовать функцию time()
#define ROWS 4
#define COLLUMS 4
int main()
{
   
   
        srand(time(NULL));
        printf("MMX\n");
       
        _int16 MATRIX[ROWS][COLLUMS];//Объявление двумерного массива
        //Заполнение массива псевдослучайными числами (диапазо [-5;5]))
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLLUMS; j++)
            {
                MATRIX[i][j] = -5 + rand() % (5 + 5 + 1);
            }
        }




        _asm
        {
        
        }
        ////массив из нулей
        //_int16 nill_arr[COLLUMS];
        //for (int i = 0; i < COLLUMS; i++)
        //{
        //    nill_arr[i] = 0;
        //}



       
        //_int16 result[COLLUMS];//массив для результата
        //_int16 PLUS_ELEMENTS[COLLUMS];//массив для счёта положительных переменных в столбцах
        //_int16 MINUS_ELEMENTS[COLLUMS];//массив для счёта отрицательных в столбцах
        //_asm
        //{
        //    
        //    lea edx, [MATRIX];//Загразить адрес массива в edx
        //    mov ecx, ROWS;//Загразить число строк массива в eсx для цикла

        //CYCL: movq mm0, [edx];//поместить строку в mm0

        //    movq mm7, nill_arr;//поместить нулевую строку в mm7 для сравнения
        //   
        //    PCMPGTW mm0, mm7;//если выходной не больше входного, то входной заполняется нулями. 
        //    PSRLW mm0, 15;//побитовый сдвиг на 15 чтобы убрать ненужные биты
        //    PADDW mm1, mm0;//mm1+mm0


        //    movq mm0, [edx];//поместить строку в mm0
        //    PCMPGTW mm7, mm0;//сравнение элементов, результат в регистр, где была нулевая строка
        //    PSRLW mm7, 15;//побитовый сдвиг на 15
        //    PADDW mm3, mm7;//mm3+mm7


        //    add edx, (COLLUMS * 2);//перейти на сл строку

        //    loop CYCL;//цикл для подсчёта количества отрицательных и положительных элементов

        //   

        //    movq[PLUS_ELEMENTS], mm1;//положительные
        //    movq[MINUS_ELEMENTS], mm3; //отрицательные
        //   



        //    PCMPEQW mm1, mm3;//сравнение элементов
        //    //если количество отр и полож элементов одинаково то эл mm1 заполняется единицами)
        //    PSRLW mm1, 15;//побитовый сдвиг на 15
        //    movq[result], mm1;//Результаи

        //    EMMS;
        //}


        ////Вывод результата
        //printf("\n\nMATRIX\n");
        //for (int i = 0; i < ROWS; i++)
        //{
        //    puts("");
        //    for (int j = 0; j < COLLUMS; j++)
        //    {
        //        printf(" %d\t ", MATRIX[i][j]);
        //    }
        //}


        //printf("\nThe same number of positive and negative elements in\n");
        //for (int i = 0; i < COLLUMS; i++)
        //{
        //    if (result[i])
        //        printf("%d ", i + 1);
        //}
        //printf("\nCOLLUMS\n");


        //_getch();
        //system("cls");
    
    
}
