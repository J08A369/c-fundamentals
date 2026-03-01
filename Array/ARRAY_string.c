#include <stdio.h>
#include <stdlib.h>

void print_table(int row, int col, double marks[row][col])
{
    int i,j;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%02.1lf ",marks[i][j]);
        }
        printf("\n");
    }
}



int main()
{
    int number_of_students;
    printf("Enter number of students: ");
    scanf("%d",&number_of_students);

    char student_name[number_of_students][50];
    int i,j;

    for(i=0; i<number_of_students; i++)
    {
        printf("Student %d name: ",i);
        fflush(stdin);
        gets(student_name[i]);
    }

    for(i=0; i<number_of_students; i++)
    {
        printf("Student %d name: ",i);
        puts(student_name[i]);
    }

    int number_of_courses;
    printf("Enter number of courses: ");
    scanf("%d",&number_of_courses);

    double marks[number_of_students][number_of_courses];

    for(i=0; i<number_of_students; i++)
    {
        printf("Marks of %s: \n",student_name[i]);
        for(j=0; j<number_of_courses; j++)
        {
            printf("\t->Mark of course %d: ", j);
            scanf("%lf",&marks[i][j]);
        }
    }

    /// Average mark of each student
    double total_mark[number_of_students];

    for(i=0; i<number_of_students; i++)
    {
        total_mark[i] = 0;
        for(j=0; j<number_of_courses; j++)
        {
            total_mark[i] += marks[i][j];
        }
        printf("Average mark of %s is %0.2lf\n",student_name[i],total_mark[i]/number_of_courses);
    }

    system("cls");
    print_table(number_of_students,number_of_courses,marks);


    /// highest mark of each student
    double highest_student_mark[number_of_students];
    for(i=0; i<number_of_students; i++)
    {
        highest_student_mark[i] = marks[i][0];
        for(j=0; j<number_of_courses; j++)
        {
            if(highest_student_mark[i] < marks[i][j])
            {
                highest_student_mark[i] = marks[i][j];
            }
        }
        printf("Highest mark of %s is %0.2lf\n",student_name[i],highest_student_mark[i]);
    }

    /// HIGHEST NUMBER OF EACH COURSE
    double highest_course_mark[number_of_students];
    for(i=0; i<number_of_courses; i++)
    {
        highest_course_mark[i] = -1;
        for(j=0; j<number_of_students; j++)
        {
            if(highest_course_mark[i] < marks[j][i])
            {
                highest_course_mark[i] = marks[j][i];
            }
        }
        printf("\nHighest mark of course %d is %0.2lf\n",i,highest_course_mark[i]);
    }
    /// subject grade of each student

    return 0;
}
