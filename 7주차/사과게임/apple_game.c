#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find(int arr[][17], int N, int M, int w, int h) {

    int i = 0, j = 0, sum = 0;
    int cnt = 0;
    if (w > M || h > N) return 0;

    while (i < N - h + 1) {
        while (j < M - w + 1) {
            for (int t = i; t < i + h; t++) {
                for (int s = j; s < j + w; s++) {
                    sum += arr[t][s];
                }
            }
            if (sum == 10) cnt++;
            sum = 0;
            j++;
        }
        i++;
        j = 0;
    }

    return cnt;

}

int main() {
    int arr[10][17];
    int N, M, cnt = 0;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        int sum = 0, left = -1, right = -1;
        while (left <= right && right < M) {
            if (sum == 10) {
                cnt++;
                sum += arr[i][++right];
            }
            else if (sum > 10) {
                sum -= arr[i][++left];
            }
            else if (sum < 10) {
                sum += arr[i][++right];
            }
        }
    }

    for (int j = 0; j < M; j++) {
        int sum = 0, left = -1, right = -1;
        while (left <= right && right < N) {
            if (sum == 10) {
                cnt++;
                sum += arr[++right][j];
            }
            else if (sum > 10) {
                sum -= arr[++left][j];
            }
            else if (sum < 10) {
                sum += arr[++right][j];
            }
        }
    }
    
    cnt += find(arr, N, M, 2, 2);
    cnt += find(arr, N, M, 2, 3);
    cnt += find(arr, N, M, 3, 2);
    cnt += find(arr, N, M, 4, 2);
    cnt += find(arr, N, M, 2, 4);
    cnt += find(arr, N, M, 3, 3);
    
    printf("%d\n", cnt);
    return 0;
    
}