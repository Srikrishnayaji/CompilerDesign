//#pragma GCC optimize "trapv"
#include <stdio.h>

/* 
	comment 
	comment
*/
int main() {
	//fios;
	int t = 5;
	scanf("%d", &t);
	while(t--) {
		int n, k;
		char* st = "samplestring";
		printf("%c", t);
		scanf("%d %d", &n, &k);
		if(n >= k) {
			if((n-k) % 2 == 1) {
				puts("1");
			} else {
				puts("0");
			}
		} else {
			printf("%d\n", k - n);
		}
		}
}