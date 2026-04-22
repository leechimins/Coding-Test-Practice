#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int floor = 1, roomS = 1, roomE = 6, step = 0, roomNumber, i = 0;
	scanf("%d", &roomNumber);
	roomNumber--;

	if (!roomNumber);
	else
		do {
			i++;
			roomS = step * 6;
			step = i * (i + 1) / 2;
			roomE = step * 6;

			floor++;
		} while (!(roomS < roomNumber && roomNumber <= roomE));
		

	printf("%d", floor);

	return 0;
}