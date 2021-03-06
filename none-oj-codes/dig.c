#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 200100
#define sort(a, n) (qsort(a, n, sizeof(a[0]), cmp))
int n, dis, t123yh[size], pg999w[size], idx_t123yh, idx_pg999w;
char buffer[10];

int cmp(const void *a, const void *b) {
	return *(int *) a - *(int *) b;
}

int main(int argc, char *argv[]) {

	freopen("dig.in", "r", stdin);
	freopen("dig.out", "w", stdout);
	int i, j, v = 1;
//	int a[] = {5, 4, 6};
//	sort(a, 3);
//	printf("%i %i %i", a[0], a[1], a[2]);
	double d = 0, t = 0, t_sis_t = 0, d_sis_t = 0;
//	printf("%.2lf", ++v);
	memset(t123yh, 0x7f, sizeof(t123yh));
	memset(pg999w, 0x7f, sizeof(pg999w));
	scanf("%i %i", &n, &dis);
	for (i = 0; i < n; ++i) {
		scanf("%s %i", buffer, &j);
		if (buffer[0] == 'T') t123yh[idx_t123yh++] = j;
		else pg999w[idx_pg999w++] = j;
	}
	sort(t123yh, idx_t123yh);
	sort(pg999w, idx_pg999w);
	for (i = j = 0; v <= n; ++v) {
		t_sis_t = t123yh[i] - t;
		d_sis_t = (pg999w[j] - d) * v;
		if ((t_sis_t < d_sis_t && i < idx_t123yh) || j >= idx_pg999w) {
			t += t_sis_t;
			d += t_sis_t * 1.0 / v;
			++i;
		} else {
			t += d_sis_t;
			d = pg999w[j];
			++j;
		}
//		printf("[%.2lf]\n", t);
	}
	printf("%.0lf", t + (dis - d) * v);
	return 0;
}

/*
2 20
Time 3
Dist 10
*/

