#include <stdio.h>

//strPointer.c

void main() {
	char name[10] = { "ȫ�浿" };

	gets_s(name, 10); // Ű����

	printf("%s \n", name);
	printf("%s \n", "�̼���");

	char a[20] = { "i like banana" };
	char* pstr = "i like banana";
	printf("%s \n", pstr);
	printf("%s \n", a);

	printf("%c %c \n", a[2], pstr[2]);
	a[7] = 'h';
	printf("%s \n", a);
	/*pstr[7] = 'g';
	printf("%s \n", pstr);*/

	char* brand = "�Ｚ����"; // ���� �������� ���ڿ�
	  // ���� ���ڿ� - ����, ����, ���� 

	char* subject[3] = { "����","����","����" };
	/*gets_s(pstr, 8);
	printf("%s \n", pstr);*/

	char names[4][10] = {"�̼���","�庸��","�念��",
	"������"};

	printf("%s \n", names+2);

	//char(*p)[10] = names;
	//printf("%s \n", p[1]);

	char* p = names[1];
	printf("%s \n", p);
}