/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:00:24 by nmota-bu          #+#    #+#             */
/*   Updated: 2022/05/21 10:31:21 by nmota-bu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

//  int strncmp(const char *str1, const char *str2, size_t n)
// compara la cadena a la que apunta str1 con la cadena a la que apunta str2.
// srt1 - primera cadena a ser comparada.
// srt2 - comparar la segunda cadena.
// n    - numero maximo de caracteres para comparar
// suma los valores ASCii de los char de los str y realiza la resta str1 - str2
// devolviendo el resultado.
//
#include <stdio.h>
#include <string.h>

int main () {
   char str1[] = "ABCD";
   char str2[] = "AbCd";
   int res;


//   strcpy(str1, "ABCDEF");
//   strcpy(str2, "abcdef");

   res = strncmp(str1, str2, 3);
	
   printf("str1: %s\nstr2: %s\nres: %d\n", str1, str2,  res);
   if(res < 0) {
      printf("str1 es menor que str2\n");
   } else if(res > 0) {
      printf("str1 es mayor que str2\n");
   } else {
      printf("str1 son iguales str2\n");
   }

   return(0);
}

//str1: ABCD
//str2: AbCd
//res: -32
//str1 es menor que str2
