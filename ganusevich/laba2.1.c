#include <stdio.h>
#include <stdlib.h>

void menu();

int valueConnections = 0, valueFloor = 0;
float height=0, width=0, mediumLenght=0;

void setConnections()
{
	printf("\n������� ���������� �����������.\n");
	scanf_s("%d", &valueConnections);
}

void setFloor()
{
	printf("\n������� ���������� ������, ������� ����� ������������ � ����\n");
	scanf_s("%d", &valueFloor);
}

void setHeight()
{
	printf("\n������� ������ �������� � ������� ���������� ����.\n");
	scanf_s("%f", &height);
	scanf_s("%f", &width);
}

void setLenght()
{
	printf("\n������� ������� ���������� �� ����� ����������� �� ������������������ ����� �� �����. \n");
	scanf_s("%f", &mediumLenght);
}

void getValueProjekting()
{
	float value;
	value = (valueConnections * 3 + valueFloor * 163 + ((double)mediumLenght + (((double)height + (double)width) * ((double)valueFloor - 1))) * 1.5) * 0.3;
	printf("\n��������� �������������� = %f\n", value);
}

void getLenghtCable()
{
	float LenghtCable;
	LenghtCable = mediumLenght + (height + width) * (valueFloor - 1);
	printf("\n����� ������ = %f\n", LenghtCable);
}

void getValueHardware()
{
	float value;
	value = (valueConnections * 3 + valueFloor * 110+(mediumLenght + ((height + width) * (valueFloor - 1)))) * 1.5;
	printf("\n��������� ������������ = %f\n", value);
}

void getValueProjekt()
{
	float value;
	value = (valueConnections * 3 + valueFloor * 163 + (mediumLenght + (((double)height + (double)width) * ((double)valueFloor - 1)) * 1.5)) * 1.3;
	printf("\n��������� ������� = %f\n", value);
}

void getInformation()
{
	printf("\n��������� ����� VBL\n+375297777777");
}

void main() 
{
	system("chcp 1251");

	int Exit=0;

	do
	{
		menu();
		switch (getch())
		{
		case '1': 
		{
			setConnections();
			break; 
		}
		case '2':
		{
			setFloor();
			break;
		}
		case '3':
		{
			setHeight();
			break; }
		case '4':
		{
			setLenght();
			break;
		}
		case '5':
		{
			getValueProjekting();
			break;
		}
		case '6':
		{
			getLenghtCable();
			break;
		}
		case '7':
		{
			getValueHardware();                                                   
			break;
		}
		case '8':
		{
			getValueProjekt();
			break;
		}
		case '9':
		{
			getInformation();
			break;
		}
		case '0':
		{
			Exit++;
			break;
		}
	
		default:
		{
			printf("������, ���������� �����");
			break; 
		}
	}
	} 
	while (Exit == 0);
}

void menu()
{
	printf("\n�������� �����:\n");
	printf("1. ���� ���������� �����������.\n");
	printf("2. ���� ���������� ������, ������� ����� ������������ � ����\n");
	printf("3. ���� ������ �������� � ������� ���������� ����.\n");
	printf("4. ���� �������� ���������� �� ����� ����������� �� ������������������ ����� �� �����. \n");
	printf("5. ������ ��������� �������������� ����. \n");
	printf("6. ������ ����� ����� ������. \n");
	printf("7. ������ ��������� ������������ �������� ������������. \n");
	printf("8. ������ ����� ��������� �������.\n");
	printf("9. ������� ���������� � ����� � ��������.\n");
	printf("0. ����� �� ���������. \n");
}