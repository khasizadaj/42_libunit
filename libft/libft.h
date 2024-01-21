/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkhasiza <jkhasiza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:47:39 by codespace         #+#    #+#             */
/*   Updated: 2024/01/18 14:14:19 by jkhasiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <ctype.h>
# include <fcntl.h>
# include <stdarg.h>

typedef long long int	t_lli;
typedef int				t_bool;

# define TRUE 1 
# define FALSE 0

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int				ft_atoi(const char *nptr);
t_lli			ft_atoi_lli(const char *nptr);
void			ft_bzero(void *s, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
t_bool			ft_isint(char *str);
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_itoa(int n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_int_arrcpy(int *dest, const int *src, size_t n);
t_bool			ft_strarr_has(char *mem, char **arr);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *s, int c, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strchr(const char *s, int c);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char const *s, void (*f)(unsigned int, char *));
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strdup(const char *s);
char			*ft_strrchr(const char *s, int c);
size_t			ft_strlen(const char *s);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new_elem);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new_elem);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstclear_no_content(t_list **lst);
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*));
t_list			*ft_lstget(t_list **lst, int index);

int				chr_in(char c, char const *str);
int				ft_printf(const char *input, ...);
char			*u_to_hex(unsigned int n, int lowercase);
char			*llu_to_hex(unsigned long long n, int lowercase);
void			ft_puthexlower_fd(unsigned int n, int fd);
void			ft_puthexupper_fd(unsigned int n, int fd);
char			*ft_dtoa(int n);
char			*ft_utoa(unsigned int n);
int				get_length_di(int n);
int				get_length_u(unsigned int n);
int				get_length_p(unsigned long long n);
int				get_length(char type, void *arg);
void			ft_putuint(unsigned int n, int fd);
void			ft_putmemory(void *arg);

#endif
