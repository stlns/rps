#include <stdio.h>
#include <stdlib.h>

int pcmove() {
	int b = 1, e = 3;
	return b + (int)(rand()/(double)(RAND_MAX + 1) * (e - b + 1));
}
int main(void) {
	int r, i = 0; int c[2]; c[0] = 0; c[1] = 1;
	printf("how many rounds you want to play?: "); scanf("%d", &r);
	while(i <= r) {
		int m; printf("rock, paper, scissors? [1-3]: "); scanf("%d", &m);
		int pc = pcmove();
		if(m >= 1 && m <= 3) {
			if(pc == m) { printf("withdraw!\n"); } else {
				if(m == 1 && pc == 2) { printf("rock covered by paper!\n"); }
				else if(m == 1 && pc == 3) { printf("rock beats scissors!\n"); }
				else if(m == 2 && pc == 1) { printf("paper covers rock!\n"); }
				else if(m == 2 && pc == 3) { printf("paper cutten by rock!\n"); }
				else if(m == 3 && pc == 1) { printf("scissors beaten by rock!\n"); }
				else if(m == 3 && pc == 2) { printf("scissors cut the paper!\n"); }
			}
			i++;
		} else { printf("invalid number\n"); }
	}
}