#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp=fopen("neptunkod.txt","a+");
    fprintf(fp,"Hegyesi Kristóf\t JPTJY2\nProgterv\t OS_Gyak0217");
    fclose(fp);

    return 0;
}
