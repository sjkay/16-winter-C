
/*
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define N 6
char name[N][7] = {"", "노트", "연필", "지우개", "자", "볼펜"};
int unit_cost[N] = {0, 1000, 500, 300, 800, 1500};
int number[N] = {0};

void print_menu();
void print_item();
void ordering();
void order_sheet();

int main()
{
	int answer;
	
	do
	{
		print_menu();
		scanf("%d", &answer);
		system("cls");

		switch(answer)
		{
			case 1: ordering(); break;
			case 2: order_sheet(); break;
			case 3: exit(0); break;
		}

		printf("\n계속 서비스를 원하시면 아무키나 누르세요.");
		getch();
		system("cls");
	
	}while(answer != 3);

	fflush(stdin);
	getchar();
	return 0;
}

void print_menu()
{
	printf(">> 환영합니다. \n");
	printf("==========================\n");
	printf("==1. 상품 주문하기 =======\n");
	printf("==2. 주문서 확인하기 =====\n");
	printf("==3. 종료하기 ============\n");
	printf("==========================\n");
	printf("원하는 서비스를 선택하세요. ");
}

void print_item()
{
	printf(">> 상품 주문 서비스입니다. \n");
	printf("==========================\n");
	printf("==1 노트\t1000\n");
	printf("==2 연필\t500\n");
	printf("==3 지우개\t300\n");
	printf("==4 자\t\t800\n");
	printf("==5 볼펜\t1500\n");
	printf("==========================\n");
}

void ordering()
{
	int item, n;
	print_item();
	printf("원하는 상품의 번호는? "); scanf("%d", &item);
	printf("%s을(를) 주문할 개수는? ", name[item]); scanf("%d", &n);

	number[item] += n;
	printf("\n주문하신 %s %d개는 총 %d원입니다. \n", name[item], n, n * unit_cost[item]);
}

void order_sheet()
{
	int i, cost, total_cost = 0;
	printf(">> 상품 주문 내역서 \n");
	printf("==========================\n");
	printf("상품명     개수     가격\n");
	printf("--------------------------\n");
	
	for(i = 1; i < N; i++)
	{
		if(number[i] != 0)
		{
			cost = unit_cost[i] * number[i];
			printf("%s\t%4d\t%9d\n", name[i], number[i], cost);
			total_cost += cost;
		}
	}

	printf("==========================\n");
	printf("총액               %d원\n", total_cost);
}


*/