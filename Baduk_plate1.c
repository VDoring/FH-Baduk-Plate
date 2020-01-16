#include <stdio.h>
#include <Windows.h>

#define X 5
#define Y 5

int main() {
	int SelectBall; //�ٵϾ� ����
	int set_X, set_Y; //�ٵϾ� ���� ��ġ ����
	char BadukPlate[X][Y]; //�ٵ��� �迭
	for (int a = 0; a < X; a++) {
		for (int b = 0; b < Y; b++) {
			BadukPlate[a][b] = 1;
		}
	}

	while (1) {
		printf("Welcome to VDoring's Baduk Plate!\n\n");

		for (int i = 0; i < X; i++) {
			for (int j = 0; j < Y; j++) {
				if (BadukPlate[i][j] == 1) printf("��");
				else if (BadukPlate[i][j] == 2) printf("��");
			}
			printf("\n");
		}
		printf("\n");

		printf("Select Ball\n");
		printf("1.��\t2.��\n= ");
		scanf("%d", &SelectBall);

		printf("\nX-coordinate, Y-coordinate input please.\n= ");
		if (SelectBall == 1) {
			scanf("%d %d", &set_X, &set_Y);
			BadukPlate[set_X][set_Y] = 1;
			system("cls");
		}
		else if (SelectBall == 2) {
			scanf("%d %d", &set_X, &set_Y);
			BadukPlate[set_X][set_Y] = 2;
			system("cls");
		}
	}

}