#include <stdio.h>
#include <string.h>

typedef struct
{
    unsigned char address[30];
    unsigned char father_name[];
} std_more_details;

typedef struct student
{
    struct student *stdFriend;
    std_more_details std_details;
    unsigned char std_name[30];
    unsigned char std_id;
} student_t;

void get_student_info(student_t *student, unsigned char arr_size);
void set_student_info(student_t *student, unsigned char arr_size);

student_t student1, student2;

int main(int argc, char const *argv[])
{

    //     student1.stdFriend = &student2;

    //  strcpy(student2.std_details.father_name , "ggamal");
    //   printf("%s", student1.stdFriend->std_details.father_name);
    //     set_student_info(&student1, 1);
    //     get_student_info(&student1, 1);
    return 0;
}

void get_student_info(student_t *student, unsigned char arr_size)
{
    unsigned int std_c = 0;
    for (std_c = 0; std_c < arr_size; std_c++)
    {
        printf("\nname of student     %i is : %s", std_c, student[std_c].std_name);
        printf("\nenter id of student %i is : %d  ", std_c, student[std_c].std_id);
        printf("\nfather name student %i is : %s", std_c, student[std_c].std_details.father_name);
        printf("\nadderss of student  %i is : %s", std_c, student[std_c].std_details.address);
    }
}

void set_student_info(student_t *student, unsigned char arr_size)
{
    unsigned int std_c = 0;
    for (std_c = 0; std_c < arr_size; std_c++)
    {

        printf("\nenter name of student %i : ", std_c);
        gets(student[std_c].std_name);
        printf("\nenter id of student %i : ", std_c);
        scanf("%d", &student[std_c].std_id);
        fflush(stdin);
        printf("\nfather name : ");
        gets(student[std_c].std_details.father_name);
        printf("\naddress : ");
        gets(student[std_c].std_details.address);
    }
}
