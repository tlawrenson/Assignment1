//Assignment1 refraction.c
#include <stdio.h>
#include <math.h>

int main(void) {

  double n1, n2, theta1, theta2, sinTheta1, sinTheta2;
  n1 = 1;
//scaning for known variables
  printf("What is the angle of incidence (in degrees)\n");
  scanf("%lf", &theta1);

  printf("What is the index of refraction of the medium?\n");
  scanf("%lf", &n2);
//printing an error with invalid values
  if(theta1 < 0 || n2 < 0 || theta1 >= 90){
    printf("An invalid value was given.\n");
  }
//variables are given value with math.h
  sinTheta1 = sin(theta1);
  
  theta2 = asin((sinTheta1)/n2);
//final print statement with all values
  printf("Angle of incidence: %lf\n Index of refraction: %lf\n Angle of refraction: %lf\n", theta1, n2, theta2);

  

  return 0;
}
