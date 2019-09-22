include <stdio.h>

<<<<<<< HEAD
=======
size_t  my_strlen(char *s)
>>>>>>> a5195c5014b6093b111b46875b285f990c4a831c
{
	   char *p = s;

	      while (*p)
		            ++p;

	         return (p - s);
}

int main(void)
{
	   int i;
	      char *s[] = 
		         {
				       "Git tutorials",
				             "Tutorials Point"
						        };

	         for (i = 0; i < 2; ++i)
			       
			    printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

		    return 0;
}
