#include <stdio.h>
#include <stdlib.h>
int main(){
	int choice = 0;
	printf("���������ѡ��:(1 or 0)");
	scanf("%d", &choice);
	if (choice == 1){
		printf("��offer���������֣�\n");
	}
	else if (choice == 0){
		printf("�ؼ�������ɣ�\n");
	}
	else{
		printf("��������\n");
	}
	system("pause");
	return 0;
}