#include <stdio.h>
#include <stdlib.h>
int main()
{
	int choice = 0;
	printf("请输入你的选择：0 会好好学习 1 我还没玩够\n");
	scanf("%d", &choice);
	if (choice == 0){
		printf("会上一个好高中\n");

	}
	else{
		printf("回家算柿饼吧\n");
	}
	system("pause");
	return 0;
}
