#include <stdio.h>
#include <math.h> 

int main(void){
  double initialValue, finalValue, rateOfReturn, time, years, weeks, days;
  //scan for initial and final values
  printf("What is the initial value of the investment?\n");
  scanf("%lf", &initialValue);

  printf("What is the final value of the investment?\n");
  scanf("%lf", &finalValue);
  //scan for time frame
  printf("How many years, weeks and days(in that order) were there in between the initial and final investment.\nPlease press enter after each individual number\n");
  scanf("%lf", &years);
  scanf("%lf", &weeks);
  scanf("%lf", &days);
  //buff out negative time given
  if(years < 0 || weeks < 0 || days < 0){
    printf("Invalid time entered.");
  }else{
   time = years + (days/365) + (weeks/52);
    //math for final print statement
   rateOfReturn = ((pow(finalValue/initialValue, 1/time)) - 1) * 100;

    printf("Initial Value: %lf\nFinal Value: %lf\nYears: %lf\nAnnualized Rate of Return: %lf percent\n", initialValue, finalValue, time, rateOfReturn);
  }
  return 0;
}
