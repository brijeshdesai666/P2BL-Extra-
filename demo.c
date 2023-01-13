# include <stdio.h>

int main(void)
{
    int er_no;
    int sub, sem;
    char grad, sub_name[20][100];
    char name[50];
    int marks[4];
    int total = 0;
    printf("         \\\\\\\\\\student results\\\\\\\\\\   ");
    // Read in student name and marks
    printf("\n\n\n");
    printf("Enter student name: ");
    scanf("%s",&name);
    printf("enter the er_no:");
    scanf("%s",&er_no);
    printf("Enter Student Sem\n");
    scanf("%d",&sem);
    printf("enter the total sub");
    scanf("%d",&sub);

    for (int i = 0; i < sub; i++)
    {
        printf("Enter %d subject name\n",i+1);
        scanf("%s",sub_name[i]);
    }
    

    for (int i = 0; i < sub; i++) {
        printf("Enter mark for subject %s: ", sub_name[i]);
        scanf("%d",&marks[i]);
    }

    // Calculate total marks
    for (int i = 0; i < sub; i++) {
        total += marks[i];
    }

    // Print result
    printf("\nResult:\n");
    printf("%s: %d\n", name, total);

    printf("\npercentage\n");
    float per=total/4;
    printf("per:%f",per);
    printf("\n");

    // print grad
    if(per<100&&per>90)
    {
        printf("grad A");
    }
    else if(per>80)
    {
        printf("grad B");
    }
    else if(per>70)
    {
        printf("grad c");
    }
    else{
        printf("Last grad\n");
    }
    return 0;
}