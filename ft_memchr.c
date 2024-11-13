/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lefoffan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 09:57:59 by lefoffan          #+#    #+#             */
/*   Updated: 2024/11/13 15:11:34 by lefoffan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*x;

	x = (unsigned char *) s;
	while (*x != (unsigned char) c && n)
	{
		n--;
		x++;
	}
	if (!x)
		return (NULL);
	return ((void *) s);
}

//////////////////////////

#include <stdio.h>
#include <string.h>

// Fonction de test générique pour memchr
void run_memchr_test(const void *mem, size_t size, int c) {
    // ft_memchr
    void *result = ft_memchr(mem, c, size);

    // Appel à memchr pour obtenir le résultat attendu
    void *expected = memchr(mem, c, size);

    // Comparaison des résultats
    if (result != expected)
	{
        printf("Test échoué : \n");
        printf("    Cherché : '%c' (0x%02x)\n", c, c);
        printf("    Résultat attendu : %p\n", expected);
        printf("    Résultat trouvé    : %p\n", result);
    }
	else
        printf("Test réussi : '%c' trouvé a %s\n", c, res);
}

int	main(void)
{
	// Test avec une chaîne classique
    char str[] = "Hello, world!";
    run_memchr_test(str, 13, 'o');

	// Test avec le char rechercher a la fin
	run_memchr_test(str, 13, '!');

	// Test avec le char rechercher apres le n
	run_memchr_test(str, 12, '!');

	// Test avec un bloc de mémoire pas terminer par \0
    unsigned char block[] = {0x01, 0x02, 0x03, 0x04, 0x05};
    run_memchr_test(block, 5, 0x03);

	// Test avec un caractère non trouvé
    run_memchr_test(str, 13, 'z');
}
