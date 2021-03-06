/*************************************************************************
	> File Name: EP026.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 13时42分53秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define MAX_N 1000

int dnum[MAX_N + 5];

int get_length(int d) {
        int y = 1, n = 1;
        memset(dnum, 0, sizeof(dnum));
        while (y != 0 && dnum[y] == 0) {
                dnum[y] = n;
                y = y * 10 % d;
                n += 1;
            
    }
        return y ? n - dnum[y] : 0;

}

int main() {
        int max_length = 0, ans = 0;
    for (int d = 2; d < 1000; d++) {
                int temp_length = get_length(d);
        if (temp_length > max_length) {
                        max_length = temp_length;
                        ans = d;
                    
        }
            
    }
        printf("%d -> %d\n", ans, max_length);
        return 0;

}

