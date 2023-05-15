#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)

#define TITRE "TEST"

void main() {
	const char* pt_message = TITRE;
	const char tbMSG[] = { 0x53,0x4C,0x4F };
	char tbMSGComplet[15] = { '\0' };
	int annee = 2022;
	int8_t version = 0x33;
	int i = 6;
	char st[5];

	// titre
	strcpy(tbMSGComplet, pt_message);

	// 3
	strncat(tbMSGComplet, &version, 1);
	
	// espace
	strcat(tbMSGComplet, " ");

	// SLO
	strncat(tbMSGComplet, tbMSG, sizeof(tbMSG) / sizeof(char));

	// annee
	strcat(tbMSGComplet, itoa(annee, st, 10));

	// printf
	printf("%s\n", tbMSGComplet);

}