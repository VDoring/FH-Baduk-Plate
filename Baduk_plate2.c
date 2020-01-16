#include <stdio.h>
#include <Windows.h>

#define X 10
#define Y 10

int main() {
	int SelectBall; //�ٵϾ� ����
	int set_X, set_Y; //�ٵϾ� ���� ��ġ ����
	int numX, numY = 0; //X, Y�� ���ڸ� ǥ��(�������� ����)
	char BadukPlate[X][Y]; //�ٵ��� �迭
	for (int a = 0; a < X; a++) { //�ٵ��� �ʱ�ȭ
		for (int b = 0; b < Y; b++) {
			BadukPlate[a][b] = 1;
		}
	}

	while (1) {
		printf("Welcome to VDoring's Baduk Plate!\n\n");

		printf(" ");
		for (numX = 0; numX < X; numX++) { //X�� ���ڸ� ǥ��
			printf("%d ", numX);
		}
		printf("\n");

		for (int i = 0; i < X; i++) { //����� ���� ���� �ٵ��� ���� ���
			for (int j = 0; j < Y; j++) {
				if (BadukPlate[i][j] == 1) {
					if (j == 0) {
						printf("%d", numY); numY++;
					}
					printf("��");
				}
				else if (BadukPlate[i][j] == 2) {
					if (j == 0) {
						printf("%d", numY); numY++;
					}
					printf("��");
				}
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
			numY = 0;
			system("cls");
		}
		else if (SelectBall == 2) {
			scanf("%d %d", &set_X, &set_Y);
			BadukPlate[set_X][set_Y] = 2;
			numY = 0;
			system("cls");
		}
	}

}