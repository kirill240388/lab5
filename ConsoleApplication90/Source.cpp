#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int task;
	cin >> task;
	if (task == 1)
	{
		//1.Написать программу, которая вводит с клавиатуры одномерный массив из 5 целых чисел, после чего выводит количество
		//ненулевых элементов.Перед вводом каждого элемента должна выводиться подсказка с номером элемента.
		//Ввод массива целых чисел.
		//После ввода каждого числа нажмите <Enter>
		//а[1] - > 12
		//а[2] - > 0
		//а[3] - > 3
		//а[4] - > -1
		//а[5] - > 0
		//В массиве
		//3 ненулевых элемента.
		int mas[5],sum;
		sum = 0;
		for (int i = 0;i < 5;i++)
		{
			cout << "vvedite znachenie massiva " << i << endl;
			cin >> mas[i];
		}
		
		for (int i = 0;i < 5;i++)
			{
				
				cout << i << ": " << mas[i] << endl;
				if (mas[i] > 0)
				{
					sum++;
				}
				
			}
		cout <<"Kolichestvo nenulevyh elementov massiva "<< sum << endl;
			
	}
	if (task == 2)
	{
		/*Написать программу, которая выводит минимальный элемент введенного с клавиатуры массива целых чисел.
		Ниже приведен рекомендуемый вид экрана во время работы программы .
			Поиск минимального элемента массива.
			Введите в одной строке элементы массива(5 целых чисел)
			и нажмите <Enter>
			-> 23 0 45 - 5 12
			Минимальный элемент массива : -5*/
		int mas[5], min;
		
		cout << "vvedite v odnoi stroke 5 celyh chisel " << endl;
		cout << "->";
		for (int i = 0;i < 5;i++)
		{
			
			cin >> mas[i];
			min = mas[i];
		}
		
		for (int i = 0;i < 5;i++)
		{
		if (mas[i] < min)
			{
			min = mas[i];
			}
	    }
		cout <<"Minimalniy element massiva "<< min << endl;

	}
	if (task == 3)
	{
	/*	Написать программу, которая вычисляет среднее арифметическое ненулевых элементов введенного с клавиатуры
	массива целых чисел.Ниже приведен рекомендуемый вид экрана во время работы программы.*/
		double mas[10],sum,mid,count;
		sum = 0;
		mid = 0;
		count = 0;
		cout << "vvedite v odnoi stroke elementy massiva 10 chisel " << endl;
		cout << "->";
		for (int i = 0;i < 10;i++)
		{

			cin >> mas[i];
			
		}

		for (int i = 0;i < 10;i++)
		{
			if (mas[i]!=0)
			{
				count++;
				sum+= mas[i];
			}
		}
		mid = sum / count;
		cout << "Summa elementov massiva: " << sum << endl;
		cout << "Kolichestvo nenulevyh elementov massiva: " << count <<endl;
		cout << "Srednee arifmeticheskoe nenulevyh elementov: " << mid << endl;

	}
	if (task == 4)
	{
		/*Написать программу, которая вычисляет среднее арифметическое элементов массива без учета минимального и 
			максимального элементов массива.Ниже приведен рекомендуемый вид экрана во время работы программы.
			Среднее арифметическое без учета min и max значений.
			Введите массив(10 целых чисел в одной строке) ->12 10 5 7 15 4 10 17 23 7 Минимальный элемент : 4 
			Максимальный элемент : 23 Среднее арифм.без учета min и max значений : 10.36*/
		double mas[10], sum, mid, count,min,max;
		sum = 0;
		mid = 0;
		count = 0;
		cout << "vvedite v odnoi stroke elementy massiva 10 chisel " << endl;
		cout << "->";
		for (int i = 0;i < 10;i++)
		{

			cin >> mas[i];
			min =mas[i];
			max =mas[i];
		}

		for (int i = 0;i < 10;i++)
		{
			
			if (mas[i] < min)
			{
				min = mas[i];
			}
			if (mas[i] > max)
			{
				max = mas[i];
			}
			if(mas[i]!=min&&mas[i]!=max)
			{
				count++;
				sum += mas[i];
			}
		}
		mid = sum / count;
		cout << "Minimalniy element: " << min << endl;
		cout << "Maksimalniy element: " << max << endl;
		cout << "Srednee arifmeticheskoe bez ucheta min i max elementov: " << mid << endl;

	}
	if (task == 5)
	{
		/*Написать программу, которая проверяет, находится ли введенное с клавиатуры число в массиве.Массив должен
		вводиться во время работы программы.*/
		int A[10], n;

		cout << "vvedite v odnoi stroke elementy massiva 10 chisel ";
		for (int i = 0; i<10; i++)
			cin >> A[i];

		cout << "Vvedite chislo ";
		cin >> n;

		bool b = false;
		for (int i = 0; i<10; i++)
			if (A[i] == n)
			{
				b = true;
			}

		if (b)
			cout << "Vvedennoe chislo nahoditsya v massive " << endl;
		else
			cout << "Vvedennogo chisla v massive net " << endl;
	}
	if (task == 6)
	{
		/*Написать программу, которая вычисляет, сколько раз введенное с клавиатуры число встречается в массиве.*/
		int A[10], n, count;
		count = 0;
		cout << "vvedite v odnoi stroke elementy massiva 10 chisel ";
		for (int i = 0; i<10; i++)
			cin >> A[i];

		cout << "Vvedite chislo ";
		cin >> n;

		bool b = false;
		for (int i = 0; i<10; i++)
			if (A[i] == n)
			{
				b = true;
				count++;
			}

		if (b)
		{
			cout << "Chislo vstrechaetsya " << count << " raz v massive" << endl;
		}
		else
			cout << "Vvedennogo chisla v massive net " << endl;
	}
	if (task == 7)
	{
		//Написать программу, которая проверяет, есть ли во введенном с клавиатуры массиве элементы с одинаковым значением.
		int A[10],count;
		count = 0;
		bool b = false;
		cout << "vvedite v odnoi stroke elementy massiva 10 chisel " << endl;

		for (int i = 0; i < 10; i++) 
			cin >> A[i];
				
		for (int i = 0; i < 10; i++) 
		{
			for (int j = (i + 1); j < 10; j++) 
			{
				//j++;
				if (A[i] == A[j])
				{
					b = true;
					count++;
					cout << A[i] << endl;
					cout << A[j] << endl;
				}
			}
		}

		if (b)
			cout << "V massive est "<<count<<" elementov s odinakovymi znacheniyami" << endl;
		else
			cout << "Sovpadeniy net" << endl;
	}
	if (task == 8)
	{
		/*Написать программу, которая определяет количество учеников в классе, чей рост превышает средний.
			Рекомендуемый вид экрана во время работы программы приведен ниже.
			*** Анализ роста учеников ***
			Введите рост(см) и нажмите <Enter>.
			Для завершения введите 0 и нажмите <Enter>
			-> 175
			-> 170
			-> 180
			-> 168
			-> 170
			-> 0
			Средний рост : 172.6 см
			У 2 человек рост превышает средний.*/
		double mas[10], sum, mid, count, exceed;
		sum = 0;
		mid = 0;
		count = 0;
		exceed = 0;
		cout << "***Analiz rosta uchenikov***" << endl;
		cout << "vvedite rost uchenikov " << endl;
		cout << "Dlya zaversheniya vvedite 0 i nazhmite <enter>" << endl;
		
		for (int i = 0;;i++)
		{
			cout << "->";
			cin >> mas[i];
			if (mas[i] == 0)
			{
				break;
			}
			sum += mas[i];
			count++;
		}
		mid = sum / count;

		for (int i = 0;;i++)
		{
			if (mas[i] > mid)
			{
				exceed++;
			}
			else
				break;
		}
		cout << "Vsego uchenikov: " << count << endl;
		cout << "Sredniy rost: " << mid << endl;
		cout << "U " << exceed << " chelovek rost prevyshaet sredniy" << endl;

	}
	if (task == 9)
	{
		/*9. Написать программу, которая обрабатывает результаты экзамена.Для каждой оценки программа должна вычислить процент
		от общего количества оценок.Рекомендуемый вид экрана во время работы программы приведен ниже.
			Обработка результатов экзамена.
			Введите исходные данные :
		пятерок -> 12
			четверок -> 10
			троек -> 7
			двоек -> 1
			Результаты экзамена
			пятерок 12
			четверок 10
			троек 7
			двоек 1
			Для завершения программы нажмите <Enter>*/
		double mas[100], count, rate2, rate3, rate4, rate5;
		rate5 = 0;
		rate4 = 0;
		rate3 = 0;
		rate2 = 0;
		count = 0;
		cout << "***Obrabotka rezultatov examena***" << endl;
		cout << "vvedite ishodnye dannye " << endl;
		cout << "Dlya zaversheniya vvedite 0 i nazhmite <enter>" << endl;

		for (int i = 0;;i++)
		{
			cout << "->";
			cin >> mas[i];
			if (mas[i] == 0)
			{
				break;
			}
			count++;
		}
		
		for (int i = 0;;i++)
		{
			if (mas[i]==5)
			{
				rate5++;
			}
			if (mas[i]==4)
			{
				rate4++;
			}
			if (mas[i]==3)
			{
				rate3++;
			}
			if (mas[i]==2)
			{
				rate2++;
			}
			if(mas[i]==0)
			break;
		}
		cout << "Vsego pytyorok: " << rate5 << " = " << (rate5 / count) * 100<<"%" << endl;
		cout << "Vsego chetvyorok: " << rate4 << " = " << (rate4 / count) * 100<<"%" << endl;
		cout << "Vsego troek: " << rate3 << " = " << (rate3 / count) * 100<<"%" << endl;
		cout << "Vsego dvoek: " << rate2 << " = " << (rate2 / count) * 100<<"%" << endl;
	}
	if (task == 10)
	{
		/*Дан массив символов s1, ..sn.Подсчитать сколько раз встречается в массиве символ К.*/
		char mas[100];
		int count;
		count = 0;
		for (int i = 0;;i++)
		{
     		cin >> mas[i];
			if (mas[i] == '0')
			{
				break;
			}
			
		}

		for (int i = 0;;i++)
		{
			if (mas[i] == 'k')
			{
				count++;
			}
			if(mas[i]=='0')
				break;
		}
		cout << "Simvol K vstrechaetsya " << count << " raz" << endl;
	}
	if (task == 11)
	{
		/*Дан массив символов S1, ..., Sn.Распечатать все буквы, непосредственно перед которыми находится буква С*/
		char mas[100];
		int count;
		count = 0;
		for (int i = 0;;i++)
		{
			cin >> mas[i];
			if (mas[i] == '0')
			{
				break;
			}

		}

		for (int i = 0;;i++)
		{
			if (mas[i] == 'c')
			{
				i++;
				cout << mas[i] << endl;
			}
			if (mas[i] == '0')
				break;
		}
		
	}
	
	
}