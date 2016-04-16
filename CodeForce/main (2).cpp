#include <stdio.h>
// (typical 32 bit machine)
typedef struct structa_tag
{
    char    c;
    short int  s;
} structa_t;

// structure B
typedef struct structb_tag
{
    short int  s;
    char    c;
    int     i;
} structb_t;

// structure C
typedef struct structc_tag
{
    char    c;
    double   d;
    int   s;
} structc_t;

// structure D
typedef struct structd_tag
{
    double   d;
    int   s;
    char    c;
} structd_t;

// structure E
typedef struct structe_tag
{
    double    d;
    int       i;
    short int s;
    char      c;
} structe_t;

// structure F
typedef struct structf_tag
{
    char      c;
    short int s;
    int       i;
    double    d;
} structf_t;

// structure F
typedef struct structg_tag
{
    char      c;
    char      d;
    char      e;
    char      f;
    char      g;
    char      h;
    short int i;
    int       j;
} structg_t;


int main()
{
    printf("sizeof(char) = %d\n", sizeof(char));
    printf("sizeof(short int) = %d\n", sizeof(short int));
    printf("-----------------\n");
    printf("sizeof(structa_t) = %d\n", sizeof(structa_t));

    printf("\n");
    printf("sizeof(short int) = %d\n", sizeof(short int));
    printf("sizeof(char) = %d\n", sizeof(char));
    printf("sizeof(int) = %d\n", sizeof(int));
    printf("-----------------\n");
    printf("sizeof(structb_t) = %d\n", sizeof(structb_t));

    printf("\n");
    printf("sizeof(char) = %d\n", sizeof(char));
    printf("sizeof(double) = %d\n", sizeof(double));
    printf("sizeof(int) = %d\n", sizeof(int));
    printf("-----------------\n");
    printf("sizeof(structc_t) = %d\n", sizeof(structc_t));

    printf("\n");
    printf("sizeof(double) = %d\n", sizeof(double));
    printf("sizeof(int) = %d\n", sizeof(int));
    printf("sizeof(char) = %d\n", sizeof(char));
    printf("-----------------\n");
    printf("sizeof(structd_t) = %d\n", sizeof(structd_t));

    printf("\n");
    printf("sizeof(double) = %d\n", sizeof(double));
    printf("sizeof(int) = %d\n", sizeof(int));
    printf("sizeof(short int) = %d\n", sizeof(short int));
    printf("sizeof(char) = %d\n", sizeof(char));
    printf("-----------------\n");
    printf("sizeof(structe_t) = %d\n", sizeof(structe_t));

    printf("\n");
    printf("sizeof(char) = %d\n", sizeof(char));
    printf("sizeof(short int) = %d\n", sizeof(short int));
    printf("sizeof(int) = %d\n", sizeof(int));
    printf("sizeof(double) = %d\n", sizeof(double));
    printf("-----------------\n");
    printf("sizeof(structe_t) = %d\n", sizeof(structe_t));

    printf("\n");
    printf("sizeof(structg_t) = %d\n", sizeof(structg_t));

    return 0;
}
