#include <stdio.h>
int main() {
 float a, b, c, d, det;
 float inverse[2][2];
 printf("Enter elements of 2x2 matrix (row-wise):\n");
 scanf("%f %f", &a, &b);
 scanf("%f %f", &c, &d);
 det = (a * d) - (b * c);
 if (det == 0) {
 printf("Inverse does not exist (determinant is zero).\n");
 return 0;
 }
 inverse[0][0] = d / det;
 inverse[0][1] = -b / det;
 inverse[1][0] = -c / det;
 inverse[1][1] = a / det;
printf("Inverse of the matrix:\n");
 for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        printf("%.2f ", inverse[i][j]);
    }
    printf("\n");
 }
 return 0;
}