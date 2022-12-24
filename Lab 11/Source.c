#include<stdio.h>
#include<locale.h>
#include <math.h>
#define N 10
#define XMAX 50
/*int main() {
	setlocale(LC_ALL,"RUS");
	float temp;
	float A[10];
	float B[10],sr=0;
	int C[10],summ=0;
	for (int i = 0; i < 10; i++)
	{
		printf("a[i] =", i + 1);
		scanf_s("%f", &temp);
		summ += temp;
		C[i] = i;
		B[i] = temp;
		if (temp == 0)
		{
			A[i] = i;
		}
		else
		{
			A[i] = temp;
		}
	}
	printf("| исходное значение  | \t | индекс     |   | новое значение |\n");
	for (int k = 0; k < 10; k++)
	{
		printf("|  %.0f                 |\t |  %d         |   |   %.0f           | \n", B[k], C[k], A[k]);
	}
	sr =(float) summ / N;
	printf("среднее значение = %.1f", sr);

}*/

/*int main() {


	float A[100];
	float m = 0;
	float n = 0;
	int num1 = 0;
	int num2 = 0;
	for (int i = 0; i < 100; i++)
	{
		A[i] = XMIN + 1.f * (XMAX - XMIN) * rand() / RAND_MAX;
		float numb = A[i];
		if (numb > 0)
		{
			m = m + ;
			num1 += 1;
		}
		else
		{
			n = n + numb;
			num2 += 1;
		}
	}
	printf(" Имя массива = A ;\n Накопленное значение отриц.элементов = %f ;\n Накопленное значение полож.элементов = %f ;\n Кол-во положительных элементов = %d ;\n Кол-во отрицательных элементов = %d ;\n Среднее значение положительных элементов = %f\n", n, m, num1, num2, m / 2);
}
*/
int main() {
	int arr[N];
	setlocale(LC_ALL, "RUS");
	int sum = 0, kol = 1, kol1 = 1;
	float sr = 0;
	for (int i = 0; i < N; i++) 
	{
		scanf_s("%d", &arr[i]);
		kol = kol + 1;
		sum = sum + arr[i];
	}
	sr = (float)sum / kol;
	for (int i = 0; i < N; i++) 
	{
		if (arr[i] < sr)
			kol1 = kol1 + 1;

	}
	printf("Кол-во чисел меньших ср. значени = %d",kol1);
}