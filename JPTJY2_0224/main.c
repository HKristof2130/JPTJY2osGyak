#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp=fopen("neptunkod.txt","a+");
    fprintf(fp,"Hegyesi Krist�f\t JPTJY2\nProgterv\t OS_Gyak0217");
    fclose(fp);

    return 0;
}
