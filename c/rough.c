// // Create a structure hospital and include the following data members:
// // Name of patient
// // Patient id (as static)
// // Blood group
// // Contact number (long long)
// // Name of disease
// // Date of admission
// // Including the functions to input and print the data for N number of patients.

// #include <stdio.h>

// typedef struct patient
// {
//     char *name;
//     int pid;
//     char *blood;
//     int *phone;
//     char *disease;
//     char *date;
// } patient;

// int main(void)
// {
//     patient *ptr1, p1;
//     ptr1 = &p1;

//     printf("\n Enter the following details: ");

//     printf("\n Enter Name of patient: ");
//     scanf("%s", &ptr1->name);

//     printf("\n Patient id: ");
//     scanf("%d", &ptr1->pid);

//     printf("\n Blood group: ");
//     scanf("%s", &ptr1->blood);

//     printf("\n Contact number: ");
//     scanf("%d", &ptr1->phone);

//     printf("\n Name of disease: ");
//     scanf("%s", &ptr1->disease);

//     printf("\n Date of admission: ");
//     scanf("%s", &ptr1->date);


//     puts(ptr1->name);
//     puts(ptr1->pid);
//     puts(ptr1->blood);
//     puts(ptr1->phone);
//     puts(ptr1->disease);
//     puts(ptr1->date);
    

//     return 0;
// }

// #include<stdio.h>

// main()
// {
//    int n;
//    n = f1(4);

//    printf("%d",n);


//    return 0;
// }

// f1(int x)
// {
//     int b;
//     if (x==1)    
//     {
//         return 1;
//     }

//     else
//     {
//         b = x*f1(x-1);
        
//     }
    
//     return b;
// }


// #include<stdio.h>

// void foo()
//    {
//        printf("2");
       
//    }
// int main(void)
// {
//     void foo();
//    foo();
//    return 0;
// }


#include <stdio.h>

int main()

{

       printf("%.0f", 2.89);

}