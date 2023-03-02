/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphonyia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:30:36 by jphonyia          #+#    #+#             */
/*   Updated: 2022/10/23 16:45:57 by jphonyia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

typedef struct nlist {
	struct nlist *next;
	char *name;
	char *value;
}	nlist;

#define HASHSIZE 53

typedef struct Dict
{
	nlist*	_[HASHSIZE];
}	Dict;

//static struct nlist *hashtab[HASHSIZE];

Dict	*_init_Dict(unsigned hashsize)
{
	Dict* self;

	self = (Dict*)malloc(sizeof(Dict));
	return (self);
}

unsigned	hash(char *s)
{
	unsigned	hashval;
/*
    for (hashval = 0; *s != '\0'; s++)
      hashval = *s + 31 * hashval;
*/
	hashval = 0;
	while (*s != '\0')
	{
		hashval = *s + 31 * hashval;
		s++;
	}
	return (hashval % HASHSIZE);
}

nlist	*lookup(Dict* self, char *s)
{
	nlist	*np;
/*
    for (np = self->_[hash(s)]; np; np = np->next)
        if (strcmp(s, np->name) == 0)
          return np;
*/
	np = self->_[hash(s)];
	while (np)
	{
		if (strcmp(s, np->name) == 0)
			return (np);
	np = np->next;
	}
	return (0x00);
}

char	*_strdup(char *);

nlist	*install(Dict* self, char *name, char *value)
{
	nlist	*np;
	unsigned	hashval;
 	/* not found */
	if ((np = lookup(self, name)) == 0x00)
	{
		np = (struct nlist *) malloc(sizeof(*np));
		if (np == 0x00 || (np->name = _strdup(name)) == 0x00)
			return 0x00;
		hashval = hash(name);
		np->next = self->_[hashval];
		self->_[hashval] = np;
	}
	else
		free((void*) np->value);
	if ((np->value = _strdup(value)) == 0x00)
		return (0x00);
	return (np);
}

char	*_strdup(char *s)
{
	char	*p;

	p = (char *) malloc(strlen(s)+1); /* +1 for ’\0’ */
	if (p != 0x00)
		strcpy(p, s);
	return (p);
}
