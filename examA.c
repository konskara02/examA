#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
char seq[1000000];
int i , k, len;
while ( scanf ( "%s" , seq ) == 1 )
{
	len = strlen( seq );
	for( i = 0 ; i < len ; i++ )
	{
		if( seq[i] == 'A' && (seq[i+1] == 'T' || seq[i+1]=='U') && seq[i+2] == 'G' )
		{
			for( k = i + 3 ; k < len ; k = k + 3 )
			{
				if( (seq[k] == 'T' || seq[k] == 'U') && seq[k+1] == 'A' && seq[k+2] == 'G' )
				{
					printf("This sequence has coding content\n");
				}
				else if( (seq[k] == 'T' || seq[k] == 'U') && seq[k+1] == 'A' && seq[k+2] == 'A' )
				{
					printf("This sequence has coding content\n");
				}
				else if( (seq[k] == 'T' || seq[k] == 'U') && seq[k+1] == 'G' && seq[k+2] == 'A' )
				{
					printf("This sequence has coding content\n");
				}
			}
		}
	}
	i=0;
	k=0;
	for( i = len ; i > 0 ; i-- )
	{
		if( seq[i] == 'A' && (seq[i-1] == 'T' || seq[i-1]=='U') && seq[i-2] == 'G' )
		{
			for( k = i - 3 ; k > 0 ; k = k - 3 )
			{
				if( (seq[k] == 'T' || seq[k] == 'U') && seq[k-1] == 'A' && seq[k-2] == 'G' )
                               	{
                                       printf("This sequence has coding content\n");
                               	}
                               	else if( (seq[k] == 'T' || seq[k] == 'U') && seq[k-1] == 'A' && seq[k-2] == 'A' )
                               	{
                                       printf("This sequence has coding content\n");
                               	}
                               	else if( (seq[k] == 'T' || seq[k] == 'U') && seq[k-1] == 'G' && seq[k-2] == 'A' )
                               	{
                                       printf("This sequence has coding content\n");
				}
			}
		}
	}
	i=0;
	k=0;
}
}
