#include<stdio.h>

typedef struct data
{
    char *name;
    int work_days;
    int join_date;
    int join_month;
    int join_year;
    int salary;
}emp_data;

int main(void)
{
    emp_data emp_1002 = {"Lakshay", 1002, 6, 2, 11, 2020, 100000};

    int id;
    printf("Enter employee ID: ");
    scanf("%d", &id);
    
    char *emp_id = "emp_" + id;
    
    printf("Employee details: \n");
    printf("1. Name = %s", emp_1002.name);
    printf("2. Working days");

    return 0;
}