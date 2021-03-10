#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char command1[15];
    char command2[15];

   strcpy( command1, "dir" );
   strcpy( command2, "valami-parancs" );
   system(command1);
   system(command2);

    return 0;
}
