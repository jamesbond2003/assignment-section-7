/*
Name            : Zaid Ahmed Khan
Roll NO         : 21CH10079
Assignment No   : 08
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
    char var[40];
    int val;
} dictnode;
typedef struct
{
    int dsize;
    int numentry;
    dictnode dictionary[];
} DICT;

DICT *createdict(int dictsize)
{
    DICT *dict;
    dict = (DICT *)malloc(sizeof(DICT));
    dict->dsize = dictsize;
    dict->numentry = 0;
    return dict;
}
dictnode makeentry(char var1[], int val1)
{
    dictnode dic;
    strcpy(dic.var, var1);
    dic.val = val1;
    return dic;
}
void add1entry(dictnode newentry, DICT *pdictionary)
{
    int check = 0;
    for (int i = 0; i <= pdictionary->numentry; i++)
    {
        if (!strcmp((pdictionary->dictionary[i]).var, newentry.var))
        {
            (pdictionary->dictionary[i]).val = newentry.val;
            // printf("%d\n",(pdictionary->dictionary[i]).val);
            check = 1;
        }
    }
    if ((pdictionary->numentry) < (pdictionary->dsize - 1) && check == 0)
    {
        pdictionary->dictionary[pdictionary->numentry] = newentry;
        pdictionary->numentry++;
    }
    else if (check == 0)
    {
        printf("NO space is left DICT is full/n");
    }
}
void printentry(DICT *pdictionary, char var[])
{
    int temp=1;
    for (int i = 0; i <= pdictionary->numentry; i++)
    {
        if (!strcmp((pdictionary->dictionary[i]).var, var))
        {
            temp=0;
            printf("%s  ", var);
            printf("%d\n", (pdictionary->dictionary[i]).val);
        }
    }
    if(temp==1){
        printf("%s not found",var);
    }
}
void deletentry(DICT *pdictionary, char var[])
{
    int j = 0;
    for (int i = 0; i <= pdictionary->numentry; i++)
    {
        if (!strcmp(pdictionary->dictionary[i].var, var))
        {
            j = i;
            break;
        }
    }
    for (int i = j; i < pdictionary->numentry; i++)
    {
        (pdictionary->dictionary[i]).val = (pdictionary->dictionary[i + 1]).val;
        strcpy((pdictionary->dictionary[i]).var, (pdictionary->dictionary[i + 1]).var);
    }
    pdictionary->numentry--;
}
void printdict(DICT *pdictionary)
{
    for (int i = 0; i < pdictionary->numentry; i++)
    {
        printf("%s  ", (pdictionary->dictionary[i]).var);
        printf("%d\n", pdictionary->dictionary[i].val);
    }
}
void quit()
{
    printf("Bye/n");
}
int main()
{
    DICT *dic = createdict(10);
    int choice=1;
    while (choice!=-1)
    {
        printf("enter 1 to add\n");
        printf("enter 2 to find\n");
        printf("enter 3 to del\n");
        printf("enter 4 to print all enteries\n");
        printf("enter -1 to quit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        if (choice==1)
        {
            char c[50];
            int temp;
            printf("add ");
            scanf("%s %d",&c,&temp);
            dictnode dn = makeentry(c,temp);
            add1entry(dn, dic);
        }
        else if (choice==2)
        {
            char c[50];
            printf("find ");
            scanf("%s",&c);
            printentry(dic,c);
        }
        else if (choice==3)
        {
            char c[50];
            printf("del ");
            scanf("%s",&c);
            deletentry(dic,c);
        }
        else if (choice==4)
        {
            printf("print \n");
            printdict(dic);
        }
        else if(choice==-1){
            break;
        }
        else{
            printf("Please enter a valid choice\n");
            printf("enter your choice:");
            scanf("%d",&choice);
        }
        printf("\n");
    }
    return 0;
}