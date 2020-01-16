#include <stdio.h>
#include <Windows.h>

#define X 10
#define Y 10

int main() {
	int SelectBall; //바둑알 선택
	int set_X, set_Y; //바둑알 놓을 위치 저장
	int numX, numY = 0; //X, Y축 숫자를 표기(가독성을 위함)
	char BadukPlate[X][Y]; //바둑판 배열
	for (int a = 0; a < X; a++) { //바둑판 초기화
		for (int b = 0; b < Y; b++) {
			BadukPlate[a][b] = 1;
		}
	}

	while (1) {
		printf("Welcome to VDoring's Baduk Plate!\n\n");

		printf(" ");
		for (numX = 0; numX < X; numX++) { //X축 숫자를 표기
			printf("%d ", numX);
		}
		printf("\n");

		for (int i = 0; i < X; i++) { //저장된 값에 따라 바둑판 문자 출력
			for (int j = 0; j < Y; j++) {
				if (BadukPlate[i][j] == 1) {
					if (j == 0) {
						printf("%d", numY); numY++;
					}
					printf("○");
				}
				else if (BadukPlate[i][j] == 2) {
					if (j == 0) {
						printf("%d", numY); numY++;
					}
					printf("●");
				}
			}
			printf("\n");
		}
		printf("\n");

		printf("Select Ball\n");
		printf("1.○\t2.●\n= ");
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