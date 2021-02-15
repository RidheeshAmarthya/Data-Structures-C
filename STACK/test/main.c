#include<stdio.h>

int main() {

    float eggWeight;
    printf("Enter the weight of the egg \n");
    scanf("%f",&eggWeight);

    int x = eggWeight;

    float small = (70 - eggWeight);
    small = small / 30;

    float large = (eggWeight - 40);
    large = large / 30;

    printf("Confidence that it is small: %f\n",small);
    printf("Confidence that it is large: %f\n",large);

    float lessThan_5 = (6 - 3 * small);
    float greaterThan_5 = (3 * large + 3);


    printf("Need to boil for %0.2f minutes\n",lessThan_5);
    printf("Need to boil for %0.2f minutes\n",greaterThan_5);

}
