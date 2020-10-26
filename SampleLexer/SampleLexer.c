// SampleLexer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "symbols.h"
#include <errno.h>

extern FILE* yyin;
extern int yylex(void);
const char* lexUnits[] = { "AUTO",
							"BREAK",
							"CASE",
							"CHAR",
							"CONST",
							"CONTINUE",
							"DEFAULT",
							"DO",
							"DOUBLE",
							"ELSE",
							"ENUM",
							"EXTERN",
							"FLOAT",
							"FOR",
							"GOTO",
							"IF",
							"INT",
							"LONG",
							"REGISTER",
							"RETURN",
							"SHORT",
							"SIGNED",
							"SIZEOF",
							"STATIC",
							"STRUCT",
							"SWITCH",
							"TYPEDEF",
							"UNION",
							"UNSIGNED",
							"VOID",
							"VOLATILE",
							"WHILE",
							"CONSTANT",
							"STRING_LITERAL",
							"ELLIPSIS",
							"RIGHT_ASSIGN",
							"LEFT_ASSIGN",
							"ADD_ASSIGN",
							"SUB_ASSIGN",
							"MUL_ASSIGN",
							"DIV_ASSIGN",
							"MOD_ASSIGN",
							"AND_ASSIGN",
							"XOR_ASSIGN",
							"OR_ASSIGN",
							"RIGHT_OP",
							"LEFT_OP",
							"INC_OP",
							"DEC_OP",
							"PTR_OP",
							"AND_OP",
							"OR_OP",
							"LE_OP",
							"GE_OP",
							"EQ_OP",
							"NE_OP",
							"SEMICOLON",
							"LEFT_BRACE",
							"RIGHT_BRACE",
							"COMMA",

							"ASSIGN",
							"LEFT_PRNTS",
							"RIGHT_PRNTS",
							"LEFT_BRACKET",
							"RIGHT_BRACKET",

							"SUBSTRACT",
							"ADD",
							"MULTIPLY",
							"DIVIDE",
							"MOD",
							"LESS",
							"GREATER" 
							};

int main()
{
	int tokenValue = 0;
	yyin = fopen("input.csrc", "rt");
	if (yyin != NULL)
	{
		while ((tokenValue = yylex()) != 0)
		{
			printf(" -> TOKEN ID: %d; Token Value: %s \n", tokenValue, lexUnits[tokenValue - 1]);
		}
	}
	else
	{
		printf("Fisierul de intrare nu poate fi deschis. Erorare: %d", errno);
	}

}
