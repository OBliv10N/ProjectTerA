#include "Point.h"

int p = high - 1; //17

void check_line(){
	for (int i = high - 1; i > 0; i--) {//17 , 16 , ... , 1
		int c = 0;
		for (int j = 0; j < wide; j++) {// 0 , 1
			if (field[i][j]) c++; //[17][0] 1
			field[p][j] = field[i][j]; //[17][0]
		}
		if (c < wide) p--; // 0 < 12 p = 16
	}
}
