/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboudaa <lboudaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 21:29:03 by lboudaa           #+#    #+#             */
/*   Updated: 2015/03/08 17:17:38 by lboudaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFF_SIZE 100

int					ft_atoi(const char *str);
char				*ft_strdup(const char *s1);
void				ft_bzero(void *s, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *s1, const char *s2);
size_t				ft_strlen(const char *s);
char				*ft_strncat(char *s1, const char *s2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *s1, const char *s2, size_t n);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void				*ft_memmove(void *s1, const void *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				ft_putchar(char c);
void				ft_putnbr(int c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				*ft_itoa(int n);
char				**ft_strsplit(char const *s, char c);

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

size_t				ft_strclen(char const *s, char c);
int					ft_isspace(int c);
char				*ft_reverse(char *str);
int					ft_intlen(int n);
int					ft_count_words(char const *s);
void				ft_sort_int_tab(int *tab, unsigned int size);
int					ft_needs_sort(int one, int two);
void				ft_swap(void *ptra, void *ptrb);
void				ft_union(char *s1, char *s2);
int					ft_hidenp(char *s1, char *s2);
char				*ft_rotone(char *str);
char				*ft_epur_str(char *str);
int					ft_nospace_strlen(char *str);
size_t				ft_power(int n, int p);
void				ft_lstpush(t_list **alst, t_list *new);
size_t				ft_abs(int n);
char				*ft_strlower(char *str);
char				*ft_strupper(char *str);
void				ft_sort_ascii_list(t_list *l);
void				ft_sort_ascii_string(char **av, int ac);
void				ft_putnbr_base(int nb, char *base);
void				ft_putnbr_base_fd(int nb, int fd, char *base);

int					get_next_line(int const fd, char **line);

#endif
