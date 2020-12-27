#include "stdio.h"

#include"string.h"

int main( )

{char a[80]="AB",b[80]="LMNP";

int i=0;

strcat(a,b);
puts(b);
while(a[i++]!='\0')
{
	printf("%d",i);
b[i]=a[i];
printf("\n");
}
puts(b);

return 0;

}