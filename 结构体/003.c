//Æð±ðÃû
#include <stdio.h>

//exmpale
typedef struct
{
    char name[100];
    int age;
    char gender;
    double height;
} GF;

typedef struct game_character
{
    char name[100];
    int attck, defense, hp;
}GC;

int main()
{
    GC people1 = { "zhangsan",18,5,50 };
    GC people2 = { "lisi",18,9,100 };
    GC people3 = { "wangwu",19,6,20 };

    GC arr[3] = { people1,people2,people3 };
    
    for (int i = 0; i < 3; i++)
    {
        GC temp = arr[i];
        printf("%s,%d,%d,%d\n",temp.name, temp.attck, temp.defense, temp.hp);
    }
    return 0;
}