#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<Windows.h>

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);


start:

	int n = 0;
	printf("������� ����� �������: ");
	scanf("%d", &n);

	switch (n)
	{
	case 1: {
		//1.	������������ ������ ��� �����. ����������, ����� �� ��� �����, � ���� ���, ������� �� �� ����� � ������� �����������.
		int a = 0, b = 0;
		a = 1 + rand() % 100;
		b = 1 + rand() % 100;

		printf("%d - %d\n", a, b);

		if (a == b)
			printf("����� �����\n");
		else {
			if (a > b)
				printf("%d\t %d\n", a, b);
			else if (b > a)
				printf("%d\t %d\n", b, a);
		}
	}
			break;
	case 3:
	case 2: {
		//2.	������������ � ���������� ������ 5 ������ ��������. ����������, ������� �� ������� � ��������. ������� �������� ������, ���� ��� ������� ���� 4 ����� � ����

		float a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, answer = 0;

		printf("������� ���� ������ ��������:\n");

		printf("1) ");
		scanf("%f", &a1);
		printf("2) ");
		scanf("%f", &a2);
		printf("3) ");
		scanf("%f", &a3);
		printf("4) ");
		scanf("%f", &a4);
		printf("5) ");
		scanf("%f", &a5);

		answer = (a1 + a2 + a3 + a4 + a5) / 5;
		printf("%f\n", answer);

		if (answer >= 4)
			printf("���� ������\n");
		else
			printf("��� �������\n");

	}
			break;

	case 4: {
		//4.	�������� ���������-�����������. ������������ ������ ��� ����� � �������� �������������� ��������. ������� �� ����� ���������

		float a = 0, b = 0, answer = 0;
		int  c = 0;
		printf("������� ������ ��������: ");
		scanf("%f", &a);
		printf("������� ������ ��������: ");
		scanf("%f", &b);
		printf("������� ����������� ��������\n��������� - 1\n������� - 2\n�������� - 3\n��������� - 4\n ");
		scanf("%d", &c);

		switch (c)
		{
		case 1: {
			answer = a*b;
			printf("�����: %f\n", answer);
		}
				break;
		case 2: {
			answer = a / b;
			printf("�����: %f\n", answer);
		}
				break;
		case 3: {
			answer = a + b;
			printf("�����: %f\n", answer);
		}
				break;
		case 4: {
			answer = a - b;
			printf("�����: %f\n", answer);
		}
				break;
		default:
			break;
		}
	}
			break;
	case 5: {
		//5.	�������� ���������, ������� �� ������ ������������ ������ ���� ����������� ����������. ������������ ����� ������� ���� ������ � ���� ����
		int n = 0;
		printf("Black = 0,\nBlue = 1,\nGreen = 2,\nCyan = 3,\nRed = 4,\nMagenta = 5,\nBrown = 6,\nLightGray = 7,\nDarkGray = 8,\nLightBlue = 9,\nLightGreen = 10,\nLightCyan = 11,\nLightRed = 12,\nLightMagenta = 13,\nYellow = 14,\nWhite = 15\n");
		printf("�������� �������� ���� ������: ");
		scanf("%d", &n);


		switch (n)
		{
		case 0: {

			SetConsoleTextAttribute(hConsole, 0);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				break;
		case 1: {

			SetConsoleTextAttribute(hConsole, 1);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				break;
		case 2: {

			SetConsoleTextAttribute(hConsole, 2);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				break;
		case 3: {

			SetConsoleTextAttribute(hConsole, 3);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				break;
		case 4: {

			SetConsoleTextAttribute(hConsole, 4);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				break;
		case 5: {

			SetConsoleTextAttribute(hConsole, 5);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				break;
		case 6: {

			SetConsoleTextAttribute(hConsole, 6);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				break;
		case 7: {

			SetConsoleTextAttribute(hConsole, 7);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				break;
		case 8: {

			SetConsoleTextAttribute(hConsole, 8);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				break;
		case 9: {

			SetConsoleTextAttribute(hConsole, 9);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				break;
		case 10: {

			SetConsoleTextAttribute(hConsole, 10);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				 break;
		case 11: {

			SetConsoleTextAttribute(hConsole, 11);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				 break;
		case 12: {

			SetConsoleTextAttribute(hConsole, 12);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				 break;
		case 13: {

			SetConsoleTextAttribute(hConsole, 13);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				 break;
		case 14: {

			SetConsoleTextAttribute(hConsole, 14);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				 break;
		case 15: {

			SetConsoleTextAttribute(hConsole, 15);
			printf("Hello world!\n");
			SetConsoleTextAttribute(hConsole, 15);
		}
				 break;
		default:
			break;
		}


	}
			break;
	case 6: {
		//6.	�������� ���������, ������� �� ������ ������������ �������� ��������� �� ����� � ������� �� ������� �� ������� ������������
		int n = 0, result = 0, result1=0, result2 = 0, result3=0, result4 = 0, result5 = 0, result6 = 0, result7 = 0;

		n = 1 + rand() % 20;
		printf("%d\n", n);

		result = pow(n, 0);
		result1 = pow(n, 1);
		result2 = pow(n, 2);
		result3 = pow(n, 3);
		result4 = pow(n, 4);
		result5 = pow(n, 5);
		result6 = pow(n, 6);
		result7 = pow(n, 7);

		printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", result, result1, result2, result3, result4, result5, result6, result7);

	}
			break;
	case 7:{
		//7.	� ��� ��� �� ��������� ������������ ��������� ��� ���������� �����, ��������� �� ������ ��������,
		//� ������� ��� �� �������� ���������. �������� ����������, ��� ���������� ����� � ������ ���������� ������, 
		//� ������ ���������� ����� ���������� ���, ����� � ������ ��������� ���� ������� ����������. 
		//��������� �� ����������� ����� � ���� ���������� ����������, 
		//����� ���������� ���������� ���������� ��������� ��� ���� ���������� (���� ��� ������ ��������)
		int m1 = 0, m2 = 0, m3 = 0, sr = 0, answer = 0,answer2=0,answer3=0;

		m1 = 1 + rand() % 50;
		m2 = 1 + rand() % 50;
		m3 = 1 + rand() % 50;
		printf("%d - %d - %d\n", m1, m2, m3);

		sr = (m1 + m2 + m3) / 3;

		if (m1 > sr&&m2<sr&&m3<sr) {
			answer = (m1 - sr)-1;
			printf("���������� ���������� %d �����\n", answer);
		}
		else if (m2 > sr&&m1 < sr&&m3 < sr) {
			answer = (m2 - sr)-1;
			printf("���������� ���������� %d �����\n", answer);
		}
		else if (m3 > sr&&m1 < sr&&m2 < sr) {
			answer = (m3 - sr)-1;
			printf("���������� ���������� %d �����\n", answer);
		}
		else if (m1 > sr&&m2>sr&&m3<sr) {
			answer = m1 - sr;
			answer2 = m2 - sr;
			answer3 = (answer + answer2)-1;
			printf("���������� ���������� %d �����\n", answer3);
		}
		else if (m2 > sr&&m3>sr&&m1<sr) {
			answer = m3 - sr;
			answer2 = m2 - sr;
			answer3 = (answer + answer2)-1;
			printf("���������� ���������� %d �����\n", answer3);
		}
		else if (m3 > sr&&m1>sr&&m2<sr) {
			answer = m3 - sr;
			answer2 = m1 - sr;
			answer3 = (answer + answer2)-1;
			printf("���������� ���������� %d �����\n", answer3);
		}

		

	}
		   break;

	default:
		break;
	}
	goto start;
}