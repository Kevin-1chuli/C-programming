#include <stdio.h>
float validMarks(const char *assessments ){

    float marks;
    int status;

    do{
        printf("%s: ",assessments);
        status = scanf("%f", &marks);
        if(status != 1 || marks < 0 || marks > 100){
          printf("Invalid input!, please enter a value btn 0 and 100.\n");
          while (getchar() != '\n');

        }

    }while(status != 1 || marks < 0 || marks > 100);
   return marks;
}


int main(){
    float physics[4],chemistry[4],math[4];
    float avg_physics, avg_chemistry, avg_math, overall_avg;

char *assessments[] = {"assignment","coursework", "mid-term","end-term"};

printf("Enter marks for physics: \n");
float sum_physics = 0;
for(int i = 0;i < 4; i++){
    physics[i] = validMarks(assessments[i]);
    sum_physics += physics[i];
}
avg_physics = sum_physics / 4;


printf("Enter marks for chemistry:\n");
float sum_chemistry = 0;
for(int i = 0;i < 4; i++){
    chemistry[i] = validMarks(assessments[i]);
    sum_chemistry += chemistry[i];
}
avg_chemistry = sum_chemistry / 4;


printf("Enter marks for math:\n");
float sum_math = 0;
for(int i = 0;i < 4; i++){
 math[i] = validMarks(assessments[i]);
    sum_math += math[i];
}
avg_math = sum_math / 4;

overall_avg = (avg_physics + avg_chemistry + avg_math)/3;

printf("Average marks: \n");
printf("Physics: %.2f\n",avg_physics);
printf("chemistry: %.2f\n",avg_chemistry);
printf("math: %2.f\n",math);
printf("\nOverall Average: %.2f",overall_avg);

    return 0;
}