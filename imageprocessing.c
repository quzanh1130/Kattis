#include <stdio.h>

int main() {
    int h, w, h_k, w_k;
    scanf("%d %d %d %d", &h, &w, &h_k, &w_k);
    int image[h][w];
    int kernel[h_k][w_k];
    int kernel_id = h_k * w_k - 1;
    for(int i=0; i<h; i++){
        for(int j=0;j<w;j++){
            scanf("%d",&image[i][j]);
        }
    }

    for(int i=0;i<h_k;i++){
        for(int j=0;j<w_k;j++){
            scanf("%d",&kernel[i][j]);
        }
    }
    
    for(int i=0;i<h-h_k+1;i++){
        for(int j=0;j<w-w_k+1;j++){
            int res = 0;
            for(int k=kernel_id;k>=0;k--){
                int kernel_row = k / w_k;
                int kernel_col = k % w_k;
                int opposite_k = kernel_id - k;
                int opposite_kernel_row = opposite_k / w_k;
                int opposite_kernel_col = opposite_k % w_k;
                res += kernel[kernel_row][kernel_col] * image[i+opposite_kernel_row][j+opposite_kernel_col];
            }
            print("%d ",res);
        }
        printf("\n");
    }
    return 0;
}