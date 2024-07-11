#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void get_poly(double **coeff, int *degreep) {
    printf("Enter degree of the polynomial: ");
    scanf("%d", degreep);
    *coeff = (double *) malloc(*(degreep) * sizeof(double));
    if (*coeff == (double *)NULL){
        printf("Memory allocation failed\n");
        exit(0);
    }
    for (int i = 0; i < *(degreep); ++i) {
        printf("Enter coefficient for %dth term: ", i);
        scanf("%lf",&(*coeff)[i]);
    }

}

double eval_poly(double coeff[], int degree, double x) {
    double sum = 0;
    for (int i = 0; i < degree; ++i) {
        sum += coeff[i] * pow(x, i);
    }
    return sum;
}

int main() {
    double *coeff;
    int degreep;
    double x;
    get_poly(&coeff, &degreep);
    printf("degree is %d ",degreep);
    printf("enter x:");
    scanf("%lf", &x);
    printf("the value is %lf", eval_poly(coeff, degreep, x));


    return 0;
}
