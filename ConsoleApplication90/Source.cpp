#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int task;
	cin >> task;
	if (task == 1)
	{
		//1.�������� ���������, ������� ������ � ���������� ���������� ������ �� 5 ����� �����, ����� ���� ������� ����������
		//��������� ���������.����� ������ ������� �������� ������ ���������� ��������� � ������� ��������.
		//���� ������� ����� �����.
		//����� ����� ������� ����� ������� <Enter>
		//�[1] - > 12
		//�[2] - > 0
		//�[3] - > 3
		//�[4] - > -1
		//�[5] - > 0
		//� �������
		//3 ��������� ��������.
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
		/*�������� ���������, ������� ������� ����������� ������� ���������� � ���������� ������� ����� �����.
		���� �������� ������������� ��� ������ �� ����� ������ ��������� .
			����� ������������ �������� �������.
			������� � ����� ������ �������� �������(5 ����� �����)
			� ������� <Enter>
			-> 23 0 45 - 5 12
			����������� ������� ������� : -5*/
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
	/*	�������� ���������, ������� ��������� ������� �������������� ��������� ��������� ���������� � ����������
	������� ����� �����.���� �������� ������������� ��� ������ �� ����� ������ ���������.*/
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
		/*�������� ���������, ������� ��������� ������� �������������� ��������� ������� ��� ����� ������������ � 
			������������� ��������� �������.���� �������� ������������� ��� ������ �� ����� ������ ���������.
			������� �������������� ��� ����� min � max ��������.
			������� ������(10 ����� ����� � ����� ������) ->12 10 5 7 15 4 10 17 23 7 ����������� ������� : 4 
			������������ ������� : 23 ������� �����.��� ����� min � max �������� : 10.36*/
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
		/*�������� ���������, ������� ���������, ��������� �� ��������� � ���������� ����� � �������.������ ������
		��������� �� ����� ������ ���������.*/
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
		/*�������� ���������, ������� ���������, ������� ��� ��������� � ���������� ����� ����������� � �������.*/
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
		//�������� ���������, ������� ���������, ���� �� �� ��������� � ���������� ������� �������� � ���������� ���������.
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
		/*�������� ���������, ������� ���������� ���������� �������� � ������, ��� ���� ��������� �������.
			������������� ��� ������ �� ����� ������ ��������� �������� ����.
			*** ������ ����� �������� ***
			������� ����(��) � ������� <Enter>.
			��� ���������� ������� 0 � ������� <Enter>
			-> 175
			-> 170
			-> 180
			-> 168
			-> 170
			-> 0
			������� ���� : 172.6 ��
			� 2 ������� ���� ��������� �������.*/
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
		/*9. �������� ���������, ������� ������������ ���������� ��������.��� ������ ������ ��������� ������ ��������� �������
		�� ������ ���������� ������.������������� ��� ������ �� ����� ������ ��������� �������� ����.
			��������� ����������� ��������.
			������� �������� ������ :
		������� -> 12
			�������� -> 10
			����� -> 7
			����� -> 1
			���������� ��������
			������� 12
			�������� 10
			����� 7
			����� 1
			��� ���������� ��������� ������� <Enter>*/
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
		/*��� ������ �������� s1, ..sn.���������� ������� ��� ����������� � ������� ������ �.*/
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
		/*��� ������ �������� S1, ..., Sn.����������� ��� �����, ��������������� ����� �������� ��������� ����� �*/
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