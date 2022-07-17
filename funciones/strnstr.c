/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 21:01:18 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/26 21:09:29 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

// char *strnstr(const char *haystack, const char *needle, size_t len)
// La función encuentra la primera aparición de la subcadena needle en la
// cadena haystack. Los caracteres finales '\0' no se comparan.
// 

#include<string.h>
#include<stdio.h>
int main () {
   const char haystack[50] = "42Barcelona es la mejor";
   const char needle[10] = "mejor";
   char *ret;

   ret = strnstr(haystack, needle, 30);

   printf("La subcadena es: %s\n", ret);

   return(0);
}

// La subcadena es: mejor
// si size_t es menor que la posicion donde se encuentra el string a buscar 
// devuelve (null)
