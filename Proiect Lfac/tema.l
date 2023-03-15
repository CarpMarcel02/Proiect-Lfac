%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
%}
%option noyywrap
%%
"string" {return SIR;}
"int" {return INT;}
"char" {return CHARV;}
"bool" {return BOOLV;}
"float" {return FLOATV;}
"print" {return PRINT;}
"Eval" {return EVAL;}
"TypeOf" {return TYPEOF;}
"class" {return CLASS;}
"const" {return CONST;}

"<-" {return ASSIGN;}
"+"|"-"|"/"|"*"|"%" {return OPERATOR;}
"<"|">"|"<="|">="|"="|"si"|"sau" {return LOPERATOR;}
"begin_progr" {return BGIN;}
"if" {return IF;}
"else" {return ELSE;}
"then" {return THEN;}
"endif" {return ENDIF;}
"for" {return FOR;}
"while" {return WHILE;}
"over" {return OVER;}
"do" {return DO;}
"{" {return START_CLASA;}
"}" {return END_CLASA;}
"end_progr" {return END;}
_[_a-zA-z][_a-zA-z0-9]* {yylval.nume=strdup(yytext); return ID;}
[0-9]+ {yylval.valoare=atoi(yytext); return NR; }
"*"[a-zA-Z]+ {return PTR;}
[0-9]+"."[0-9]* {yylval.f_valoare = atof(yytext); return FLOAT;}
"true"|"false" {yylval.bool_valoare=strdup(yytext); return BOOL;}
\'[a-zA-Z]\' {yylval.caracter=yytext[1]; return CHAR;}
["].*["] {yylval.string=strdup(yytext); return STRING;}
[_a-zA-Z][_a-zA-Z0-9]* {yylval.nume=strdup(yytext); return FUNCTIE;}
@[_a-zA-Z][_a-zA-Z0-9]* {yylval.nume=strdup(yytext); return VECTOR;}
[ \t] ;
\n {yylineno++;}
. {return yytext[0];}



