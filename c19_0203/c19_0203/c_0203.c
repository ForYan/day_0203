#include <stdio.h>
#include <stdlib.h>
int main(){
	int choice = 0;
	printf("请输入你的选择:(1 or 0)");
	scanf("%d", &choice);
	if (choice == 1){
		printf("好offer在向你招手！\n");
	}
	else if (choice == 0){
		printf("回家卖红薯吧！\n");
	}
	else{
		printf("错误输入\n");
	}
	system("pause");
	return 0;
}