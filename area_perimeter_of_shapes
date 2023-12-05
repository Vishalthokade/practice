#include <stdio.h>
#include <stdlib.h>
//#define PI 3.14;
enum mainmenu {
	EXIT, CIRCLE, RECTANGLE, SQUARE
};
typedef enum submenu {
	PERI = 1, AREA
} submenu_t;
int choice;
void circleop() {
	enum submenu opt;
	double rad, area;
	double res = 0;
	do {
		printf("1. PERIMETER 2. AREA\n enter your choice: ");
		scanf("%d", &opt);
		switch (opt) {
		case PERI:
			printf("\n enter radius: ");
			scanf("%lf", &rad);
			res = 2*3.14*rad;
			printf("\n perimeter of circle: %lf m", res);

			break;
		case AREA:
			printf("\n enter radius: ");
			scanf("%lf", &rad);
			area = 3.14*rad*rad;
			printf("\n area of circle: %lf m^2", area);
			break;
		}
	} while (choice != 0);
}

	void rectangleop() {
		enum submenu opt;
		double len, res, area, br; //var declaration
		do {
			printf("1. PERIMETER 2. AREA\n enter your choice: ");
			scanf("%d", &opt);
			switch (opt) {
			case PERI:
				printf("\n enter length: ");
				scanf("%lf", &len);
				printf("\n enter breadth: ");
				scanf("%lf", &br);
				res = 2 * (len + br);
				printf("\n perimeter of rectangle: %lf m", res);
				break;
			case AREA:
				printf("\n enter length: ");
				scanf("%lf", &len);
				printf("\n enter breadth: ");
				scanf("%lf", &br);
				area = len * br;
				printf("\n area of rectangle: %lf m^2", area);
				break;
			}
		} while (choice != 0);

	}
		void squareop() {
			enum submenu opt;
			double side, res, area; //var declaration
			do {
				printf("1. PERIMETER 2. AREA\n enter your choice: ");
				scanf("%d", &opt);
				switch (opt) {
				case PERI:
					printf("\n enter side: ");
					scanf("%lf", &side);
					res = 4 * side;
					printf("\n perimeter of square: %lf m", res);
					break;

				case AREA:
					printf("\n enter side: ");
					scanf("%lf", &side);
					area = side * side;
					printf("\n area of square: %lf m^2", area);
				}
			} while (choice != 0);
		}


		int main(void) {
			enum mainmenu choice;
			do {
				printf("\n 0. EXIT, 1. CIRCLE, 2. RECTANGLE, 3. SQUARE\n enter your choice: ");
				scanf("%d", &choice);
				switch (choice) {
				case CIRCLE:
					circleop();
					break;
				case RECTANGLE:
					rectangleop();
					break;
				case SQUARE:
					squareop();
					break;
				}
			} while (choice != 0);
			return 0;
		}
