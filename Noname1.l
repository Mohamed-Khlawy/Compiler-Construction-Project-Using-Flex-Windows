%option noyywrap
%{
	#include<stdio.h>
	#include"y.tab.h"
	
%}

%%
"for" {return FOR;}

"while" {return WHILE;}

"do" {return DO;}

\".+\" {  
	yylval.st[0]=yyleng-1;
	int i;
	for(i=1;i<yylval.st[0];i++)
		yylval.st[i]=yytext[i];
	return CHH;
}

"chain" {return CHAIN;}

"char" return CHAR;

"float" {return FLOAT;}

"halmbz" return HALMBZ;

"int" {return INT;}

[Ii][Ff] {return IF;}

"then" {return THEN;}

"else" {return ELSE;}

[0-9]+ {
	yylval.in=atoi(yytext);
	return NUM;
}

[0-9]*(\.[0-9]+)? { 
	yylval.fl=atof(yytext);
	return FLO;
} 

[a-z] {
	yylval.in=*yytext-'a';
	return ID;
}

[-+;/*()=><!&|{}#] {
	return *yytext;
}

"hbl" {return HBL;}

\'.\'  {
	yylval.ch=yytext[1];
	return CH;
}

[ \t\n] ;

%%