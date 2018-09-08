#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

/*void example(char acWelcome[]){
    printf("%d",sizeof(acWelcome));
    return;
}
int main(){
    char acWelcome[]="Welcome to Huawei Test";
    example(acWelcome);

    return 0;
}*/
/*void Func(char str_arg[100])
{
       printf("%d\n",sizeof(str_arg));
}
int main(void)
{
    char str[]="Hello";
    printf("%d\n",sizeof(str));
    printf("%d\n",strlen(str));
    char*p=str;
    printf("%d\n",sizeof(p));
    Func(str);
    return 0;
}*/
/*#define M 5
 #define N 20
 int fun(char(* ss)[N], int *n)
 {
     int i, k = 0, len = N;
     for (i = 0; i < M; i++)
     {
         len = strlen(ss[i]);
         if (i == 0)
             *n = len;
         if (len > * n)
         {
             *n = len;
             k = i;
         }
     }
     return ( k );
 }
int main( )
 {
     char ss[M][N] = {"shanghai", "guangzhou", "beijing", "tianjing", "chongqing"};
     int n, k, i;
     printf("\nThe originalb stringsare:\n");
     for (i = 0; i < M; i++)
         puts(ss[i]);
     k = fun(ss, &n);
     printf("\nThe length of shortest string is: % d\n", n);
     printf("\nThe shortest string is: % s\n", ss[k]);
     return 0;
 }*/
/*class A
{
    public:
        void FuncA()
        {
            printf( "FuncA called\n" );
        }
        virtual void FuncB()
        {
            printf( "FuncB called\n" );
        }
};
class B : public A
{
    public:
        void FuncA()
        {
            A::FuncA();
            printf( "FuncAB called\n" );
        }
        virtual void FuncB()
        {
            printf( "FuncBB called\n" );
        }
};
int main( void )
{
    B  b;
    A  *pa;
    pa = &b;
    A *pa2 = new A;
    pa->FuncA(); //£¨ 3£©
    pa->FuncB(); //£¨ 4£©
    pa2->FuncA(); //£¨ 5£©
    pa2->FuncB();
    delete pa2;
    return 0;
}*/
/*int FindSubString( char* pch )
{
    int   count  = 0;
    char  * p1   = pch;
    while ( *p1 != '\0' )
    {
        if ( *p1 == p1[1] - 1 )
        {
            p1++;
            count++;
        }else  {
            break;
        }
    }
    int count2 = count;
    while ( *p1 != '\0' )
    {
        if ( *p1 == p1[1] + 1 )
        {
            p1++;
            count2--;
        }else  {
            break;
        }
    }
    if ( count2 == 0 )
        return(count);
    return(0);
}
void ModifyString( char* pText )
{
    char  * p1   = pText;
    char  * p2   = p1;
    while ( *p1 != '\0' )
    {
        int count = FindSubString( p1 );
        if ( count > 0 )
        {
            *p2++ = *p1;
            sprintf( p2, "%i", count );
            while ( *p2 != '\0' )
            {
                p2++;
            }
            p1 += count + count + 1;
        }else  {
            *p2++ = *p1++;
        }
    }
}
int main( void )
{
    char text[32] = "XYBCDCBABABA";
    ModifyString( text );
    printf( text );
    return 0;
}*/
/*#include<iostream>
using namespace std;
class MyClass
{
public:
    MyClass(int i = 0)
    {
        cout << i;
    }
    MyClass(const MyClass &x)
    {
        cout << 2;
    }
    MyClass &operator=(const MyClass &x)
    {
        cout << 3;
        return *this;
    }
    ~MyClass()
    {
        cout << 4;
    }
};
int main()
{
    MyClass obj1(1), obj2(2);
    MyClass obj3 = obj1;
    return 0;
}*/
char *myString()
{
    char buffer[6] = {0};
    char *s = "Hello World!";
    for (int i = 0; i < sizeof(buffer) - 1; i++)
    {
        buffer[i] = *(s + i);
    }
    return buffer;
}
int main(int argc, char **argv)
{
    printf("%s\n", myString());
    return 0;
}
