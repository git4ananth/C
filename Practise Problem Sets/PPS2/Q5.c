#include<stdio.h>
#include<stdlib.h>

typedef struct tree {
    int T;
    int P;
} Tree;

int cmpfunc(const void *a, const void *b) {
    Tree *t1 = (Tree *)a;
    Tree *t2 = (Tree *)b;
    return t1->T - t2->T;
}

int main() {
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);

    if (m < n) {
        printf("Invalid\n");
        return 0;
    }

    Tree trees = (Tree) malloc(m * sizeof(Tree));
    for(int i = 0; i < m; i++) {
        scanf("%d", &trees[i].T);
    }
    for(int i = 0; i < m; i++) {
        scanf("%d", &trees[i].P);
    }

    qsort(trees, m, sizeof(Tree), cmpfunc);

    int total_chestnuts = 0, time_taken = 0, min_time = 1e9;
    int chestnuts = (int) malloc(n * sizeof(int));

    for(int i = 0; i < m; i++) {
        total_chestnuts += trees[i].P;
        chestnuts[i % n] += trees[i].P;
        while(total_chestnuts - chestnuts[i % n] >= k) {
            total_chestnuts -= chestnuts[i % n];
            chestnuts[i % n] = 0;
            i++;
            if(i == m) break;
            total_chestnuts += trees[i].P;
            chestnuts[i % n] += trees[i].P;
        }
        if(total_chestnuts >= k) {
            time_taken = trees[i].T - trees[i % n].T;
            if(time_taken < min_time) {
                min_time = time_taken;
            }
        }
    }

    if(min_time == 1e9) {
        printf("Invalid\n");
    } else {
        printf("%d\n", min_time);
    }

    free(trees);
    free(chestnuts);
    return 0;
}