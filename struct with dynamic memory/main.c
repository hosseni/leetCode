
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// structure body
typedef struct
{
    unsigned int id;
    unsigned char name[30];
} student_t; // ilias : because using typedef with stract

student_t ahmed; // global object from student_t struct
student_t *ptrAhmed = NULL; // pointer to struct student_t initialized bu NULL

int main(int argc, char const *argv[])
{

    unsigned char name[] = "elhosseni gamal";

    // allocate dynamic memory 
    // malloc return a pointer to struct student_t
    ptrAhmed = (student_t *)malloc(sizeof(student_t));
    if (NULL == ptrAhmed)
        printf("null pointer\n");

    else
    {
        ptrAhmed->id = 15000;
        printf("ahmed id   : %d\n", ptrAhmed->id);
        // string function to copy string from source to dest
        strcpy(ptrAhmed->name, name);
        printf("ahmed name : %s\n", ptrAhmed->name);
    }
    // deallocate the allocated memory space
    free(ptrAhmed);
    return 0;
}
