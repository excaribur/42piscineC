# include <stdio.h> 
# include <string.h> 
# include <stdlib.h>

# define BYTE 1
# define LEN 32

typedef struct book
{
	unsigned int number;
	char *word;
}	book;
book *dict;

int leng(book *book)
{
    int i;

    i = 0;
    while(book[i].word)
    {
        i++;
    }
    return i;
}
void display(book *book)
{
    printf("size=%d\n",leng(book));
     for (int i = 0; i < leng(book); i++)
    {
        printf("number:%d & word:%s\n",book[i].number ,book[i].word);
    }
}

void ft_free_book(book *book)
{
    for (int i = 0; i < leng(book); i++)
    {
        free(book[i].word);
    }
    free(book);
}

book *ft_realloc(int n)
{
    book *new = (book *)malloc(sizeof(book) * n);
    new = dict;
/*
    for (int i = 0; i < leng(dict); i++)
    {
        new[i].number = dict[i].number;
        new[i].word = strdup(dict[i].word);
    }
*/
    ft_free_book(dict);
    return (new);
}

int main()
{
    

    dict = (book *)malloc(sizeof(book) * 3);

    

    for (int i = 0; i < 5; i++)
    {
        dict[i].number = i + 1;
        dict[i].word = strdup("Hello");

        int size = leng(dict);
        printf("size before=%d\n",leng(dict));
        if(i == 2)
        {
            dict = ft_realloc(10);
            printf("size after=%d\n",leng(dict));
        }
        
    }

    display(dict);

    
    ft_free_book(dict);
    return (0);
}