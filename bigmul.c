#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <gmp.h>

int main(int argc, char *argv[])
{

        mpz_t a,b,c;
        mpz_init(a);
        mpz_init(b);
        mpz_init(c);
        if (argc<3)
        {
                printf("Usage bigmul number1 number2\n");
                exit(1);
        }



        mpz_set_str(a,argv[1],10);
        mpz_set_str(b,argv[2],10);
        mpz_mul(c,a,b);

        gmp_printf("A       => %Zd  \n",a);
        gmp_printf("B       => %Zd  \n",b);
        gmp_printf("Result  => %Zd  \n",c);

        mpz_clear(a);
        mpz_clear(b);
        mpz_clear(c);
        return 0;
}
