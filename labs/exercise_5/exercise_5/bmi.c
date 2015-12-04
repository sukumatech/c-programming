#include <stdio.h>
//#include <cmath>
#pragma warning(disable:4996)

#define CM_TO_METERS 100

int main (void)
{
	//const float CM_TO_METERS = 100.0;
	const float LOW_BMI = 18.5;
	const float HIGH_BMI = 25.0;
	//input
	float height = 0.0;
	float weight = 0.0;
	float bmi = 0.0;
	float height_meters = 0.0;

	printf("Enter height in cm ");
	scanf("%f", &height);
	printf("Enter weight in kgs ");
	scanf("%f", &weight);

	//calculate the bmi

	//convert height to meters
	height_meters = height/(CM_TO_METERS);

	bmi = weight / (height_meters*height_meters);

	if (bmi < LOW_BMI)
	{
		printf("Your BMI: %f \n" , bmi);
		printf("According to BMI you have underweight \n");
	}

	if (bmi >= LOW_BMI && bmi < HIGH_BMI)
	{
		printf("Your BMI: %f \n", bmi);
		printf("According to BMI you have normal weight \n");
	}

	if (bmi >= HIGH_BMI)
	{
		printf("Your BMI: %f \n", bmi);
		printf("According to BMI you have overweight \n");
	}




	return 0;
}