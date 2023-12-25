%{
	#include<stdio.h>
	int x[26];
	int name[26];
	float y[26];
	char z[26];
	char w[26][26];
	int loc[26];
	int ln[26];
	int show[3];
	int dd[3];
%}
%union
{
	int in;
	float fl;
	char ch;
	char st[26];
}
%start s

%token <ch> CH

%token <in> NUM  ID

%token <fl> FLO

%token <st> CHH

%token HBL IF THEN ELSE	INT HALMBZ FLOAT CHAR CHAIN FOR WHILE

%type <fl>  stat term fact

%type <in> rel lo idd ass count inde

%% 
s: f      
 | s ';' f  
;

f: stat 
{
	printf("the result = %g \n",$1);
}
	| ass
	| inde
	| rel  {printf("the result = %d \n",$1);}
	 | lo  {printf("the result = %d \n",$1);}
	 | if
	 | dec
	 | pr
	 | for
	 | while
;

while: WHILE '(' condition ')' '{' s ';' count '}'
{
	if (dd[2]==2)
	{
		if(dd[0]==1)
			x[dd[1]]--;
		else if(dd[0]==2)
			x[dd[1]]++;
		else if (dd[0] == 3)
			x[dd[1]] /= 2;
		else if (dd[0] == 4)
			x[dd[1]] *= 2;
	}

	if (show[0] == 1 && dd[0] == 1)
	{
		while ( x[show[1]] < show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] += $8;
		}
	}

	else if (show[0] == 3 && dd[0] == 1)
	{
		while ( x[show[1]] <= show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] += $8;
		}
	}

	else if (show[0] == 1 && dd[0] == 3)
	{
		while ( x[show[1]] < show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] *= $8;
		}
	}

	else if (show[0] == 3 && dd[0] == 3)
	{
		while ( x[show[1]] <= show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] *= $8;
		}
	}

	else if (show[0] == 2 && dd[0] == 2)
	{
		while ( x[show[1]] > show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] -= $8;
		}
	}

	else if (show[0] == 4 && dd[0] == 2)
	{
		while ( x[show[1]] >= show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] -= $8;
		}
	}

	else if (show[0] == 2 && dd[0] == 4)
	{
		while ( x[show[1]] > show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] /= $8;
		}
	}

	else if (show[0] == 4 && dd[0] == 4)
	{
		while ( x[show[1]] >= show[2] )
		{
			printf("loop is excuted \n");
			x[dd[1]] /= $8;
		}
	}
}

condition: ID '<' stat 
{
	show[0]=1;
	show[1]=$1;
	show[2]=$3;
}
	| 
ID '>'  stat 
{
	show[0]=2;
	show[1]=$1;
	show[2]=$3;
}
	| 
ID '<''=' stat
{
	show[0]=3;
	show[1]=$1;
	show[2]=$4;
}
	|
ID '>''=' stat
{
	show[0]=4;
	show[1]=$1;
	show[2]=$4;
}

for: FOR '(' idd ';' cond ';' count ')' '{'s'}' 
{ 
	int z=0,y=0;
	if (ln[show[1]]==1)
		z=1;
	if (dd[2]==1)
	{
		y=1;
		if(dd[0]==1)
			loc[dd[1]]--;
		else if(dd[0]==2)
			loc[dd[1]]++;
		else if (dd[0] == 3)
			loc[dd[1]] /= 2;
		else if (dd[0] == 4)
			loc[dd[1]] *= 2;
	}
	else 
	{	if(dd[0]==1)
			x[dd[1]]--;
		else if(dd[0]==2)
			x[dd[1]]++;
		else if (dd[0] == 3)
			x[dd[1]] /= 2;
		else if (dd[0] == 4)
			x[dd[1]] *= 2;
	}						

	if(show[0]==1&& dd[0]==1)
	{ 
		//printf("i= %d 3=%d z= %d, show2 = %d,dd1= %d, $7 = %d \n ", $3, z, show[2], y, $7);
		if(y==1&&z==1)
		{
			int i;
			for(i=$3; loc[show[1]] < show[2] ; loc[dd[1]] += $7 )
				printf("loop is excuted \n");
		}

		else if(y==0&&z==0)
		{
			int i;
			for(i=$3; x[show[1]] < show[2] ; x[dd[1]] += $7 )
				printf("loop is excuted \n");
		}

		else  if(y==1&&z==0)
		{
			int i;
			for(i=$3; x[show[1]] < show[2] ; loc[dd[1]] += $7 )
				printf("loop is excuted \n");
		}

		else  
		{
			int i;
			for(i=$3; loc[show[1]] < show[2] ; x[dd[1]] += $7 )
				printf("loop is excuted \n");
		}
	}
	
	else if(show[0]==1&& dd[0]==3)
	{ 
		//printf("i= %d 3=%d z= %d, show2 = %d,dd1= %d, $7 = %d \n ", $3, z, show[2], y, $7);
		if(y==1&&z==1)
		{
			int i;
			for(i=$3; loc[show[1]] < show[2] ; loc[dd[1]] *= $7 )
				printf("loop is excuted \n");
		}

		else if(y==0&&z==0)
		{
			int i;
			for(i=$3; x[show[1]] < show[2] ; x[dd[1]] *= $7 )
				printf("loop is excuted \n");
		}

		else  if(y==1&&z==0)
		{
			int i;
			for(i=$3; x[show[1]] < show[2] ; loc[dd[1]] *= $7 )
				printf("loop is excuted \n");
		}

		else  
		{
			int i;
			for(i=$3; loc[show[1]] < show[2] ; x[dd[1]] *= $7 )
				printf("loop is excuted \n");
		}
	}

	else if(show[0]==2&& dd[0]==2)
		{
			//printf("i= %d 3=%d z= %d, show2 = %d,dd1= %d, $7 = %d \n ", $3, z, show[2], y, $7);

			if(y==1&&z==1)
			{
				int i;
				for(i=$3; loc[show[1]] > show[2] ; loc[dd[1]] -= $7 )
					printf("loop is excuted \n");
			}

			else if(y==0&&z==0)
			{
				int i;
				for(i=$3; x[show[1]] > show[2] ; x[dd[1]] -= $7 )
					printf("loop is excuted \n");
			}
			else  if(y==1&&z==0)
			{
				int i;
				for(i=$3; x[show[1]] > show[2] ; loc[dd[1]] -= $7 )
					printf("loop is excuted \n");
			}
			else  
			{
				int i;
				for(i=$3; loc[show[1]] > show[2] ; x[dd[1]] -= $7 )
					printf("loop is excuted \n");
			}
		}
		
	else if (show[0] == 3 && dd[0] == 1)
		{
			if(y==1&&z==1)
				{
					int i;
					for(i=$3; loc[show[1]] <= show[2] ; loc[dd[1]] += $7 )
						printf("loop is excuted \n");
				}

			else if(y==0&&z==0)
				{
					int i;
					for(i=$3; x[show[1]] <= show[2] ; x[dd[1]] += $7 )
						printf("loop is excuted \n");
				}

			else  if(y==1&&z==0)
				{
					int i;
					for(i=$3; x[show[1]] <= show[2] ; loc[dd[1]] += $7 )
						printf("loop is excuted \n");
				}

			else  
				{
					int i;
					for(i=$3; loc[show[1]] <= show[2] ; x[dd[1]] += $7 )
						printf("loop is excuted \n");
				}			
		}

		else if (show[0] == 3 && dd[0] == 3)
		{
			if(y==1&&z==1)
				{
					int i;
					for(i=$3; loc[show[1]] <= show[2] ; loc[dd[1]] *= $7 )
						printf("loop is excuted \n");
				}

			else if(y==0&&z==0)
				{
					int i;
					for(i=$3; x[show[1]] <= show[2] ; x[dd[1]] *= $7 )
						printf("loop is excuted \n");
				}

			else  if(y==1&&z==0)
				{
					int i;
					for(i=$3; x[show[1]] <= show[2] ; loc[dd[1]] *= $7 )
						printf("loop is excuted \n");
				}

			else  
				{
					int i;
					for(i=$3; loc[show[1]] <= show[2] ; x[dd[1]] *= $7 )
						printf("loop is excuted \n");
				}			
		}

	else if (show[0] == 4 && dd[0] == 2)
			{
				if(y==1&&z==1)
				{
					int i;
					for(i=$3; loc[show[1]] >= show[2] ; loc[dd[1]] -= $7 )
						printf("loop is excuted \n");
				}

				else if(y==0&&z==0)
				{
					int i;
					for(i=$3; x[show[1]] >= show[2] ; x[dd[1]] -= $7 )
						printf("loop is excuted \n");
				}
				else  if(y==1&&z==0)
				{
					int i;
					for(i=$3; x[show[1]] >= show[2] ; loc[dd[1]] -= $7 )
						printf("loop is excuted \n");
				}
				else  
				{
					int i;
					for(i=$3; loc[show[1]] >= show[2] ; x[dd[1]] -= $7 )
						printf("loop is excuted \n");
				}
			}

		else if (show[0] == 4 && dd[0] == 4)
			{
				if(y==1&&z==1)
				{
					int i;
					for(i=$3; loc[show[1]] >= show[2] ; loc[dd[1]] /= $7 )
						printf("loop is excuted \n");
				}

				else if(y==0&&z==0)
				{
					int i;
					for(i=$3; x[show[1]] >= show[2] ; x[dd[1]] /= $7 )
						printf("loop is excuted \n");
				}
				else  if(y==1&&z==0)
				{
					int i;
					for(i=$3; x[show[1]] >= show[2] ; loc[dd[1]] /= $7 )
						printf("loop is excuted \n");
				}
				else  
				{
					int i;
					for(i=$3; loc[show[1]] >= show[2] ; x[dd[1]] /= $7 )
						printf("loop is excuted \n");
				}
			}

		else if(show[0]==2&& dd[0]==4)
		{
			//printf("i= %d 3=%d z= %d, show2 = %d,dd1= %d, $7 = %d \n ", $3, z, show[2], y, $7);

			if(y==1&&z==1)
			{
				int i;
				for(i=$3; loc[show[1]] > show[2] ; loc[dd[1]] /= $7 )
					printf("loop is excuted \n");
			}

			else if(y==0&&z==0)
			{
				int i;
				for(i=$3; x[show[1]] > show[2] ; x[dd[1]] /= $7 )
					printf("loop is excuted \n");
			}
			else  if(y==1&&z==0)
			{
				int i;
				for(i=$3; x[show[1]] > show[2] ; loc[dd[1]] /= $7 )
					printf("loop is excuted \n");
			}
			else  
			{
				int i;
				for(i=$3; loc[show[1]] > show[2] ; x[dd[1]] /= $7 )
					printf("loop is excuted \n");
			}
		}
}


count: inde  
{
	$$=$1;
}
	| 
ass 
{
	$$=$1;
}


cond: ID '<' stat 
{
	show[0]=1;
	show[1]=$1;
	show[2]=$3;
}
    | 
ID '>'  stat 
{
	show[0]=2;
	show[1]=$1;
	show[2]=$3;
}
	| 
ID '<''=' stat
{
	show[0]=3;
	show[1]=$1;
	show[2]=$4;
}
	|
ID '>''=' stat
{
	show[0]=4;
	show[1]=$1;
	show[2]=$4;
}

idd: INT ID '=' stat  
{
	if(ln[$2]==0)
	{
		loc[$2]= $4;
		$$=loc[$2];
		ln[$2]=1;
	}
	else 
		printf("the variable is decleare before");
}
   | 
ID '=' stat   
{
	if(name[$1]==1)
	{
		$$=x[$1];
		x[$1]=$3;
	}
	else 
		printf("this variable is decleared before or not decleare before");
}


pr: HALMBZ '(' ID ')' 
{
	if(name[$3]==1)
		printf("%d \n",x[$3]);
	else
		if (name[$3]==2)
			printf("%g \n",y[$3]);
		else 
			if(name[$3]==3)
				printf("%c \n",z[$3]);
			else 
				if(name[$3]==4)
				{
					int i;
					for(i=1;i<w[$3][0];i++)
						printf("%c",w[$3][i]);
					printf("\n");
				}
				else 
					printf("variable is not decleared");
}

 | 
 
 HALMBZ'(' CHH ')'   
 {
	 int i;
	for(i=1;i<$3[0];i++)
	printf("%c",$3[i]);
	printf("\n");
}


dec: INT ID   
{
	if(name[$2]==0)
		name[$2]=1;
	else
		if(name[$2]==1)
			printf("this variable is declared before in the same type \n");
		else 
			printf("this variable is declared before in the various type \n");
}
    | 
    
INT ID '=' stat 
{
	if(name[$2]==0)
	{
		name[$2]=1;
		x[$2]=$4;
	}
	else 
		if(name[$2]==1)
			printf("this variable is declared before in the same type \n");
		else 
			printf("this variable is declared before in the various type \n");
}
  | 

FLOAT ID            
{
	if(name[$2]==0)
		name[$2]=2;
	else 
		if(name[$2]==2)
			printf("this variable is declared before in the same type \n");
		else 
			printf("this variable is declared before in the various type \n");
}
   | 

FLOAT ID '=' stat    
{
	if(name[$2]==0)
	{
		name[$2]=2;
		y[$2]=$4;
	}
	else 
		if(name[$2]==2)
			printf("this variable is declared before in the same type \n");
		else 
			printf("this variable is declared before in the various type \n");
}

| 

CHAR ID  
{
	if(name[$2]==0)
		name[$2]=3;
	else 
		if(name[$2]==3)
			printf("this variable is decleare before in same type \n");
		else 
			printf("this variable is decleared but in variouse type \n");
}

 | 
 
CHAR ID '=' CH 
{
	if(name[$2]==0)
	{
		name[$2]=3;
		z[$2]=$4;
	}
	else 
		if(name[$2]==3)
			printf("this variable is decleare before in same type \n");
		else 
			printf("this variable is decleared but in variouse type \n");
}

| 

CHAIN ID          
{
	if(name[$2]==0)
		name[$2]=4;
	else 
		if(name[$2]==4)
			yyerror("declare in same type");
		else 
			yyerror("declear in vaious type");
}

| 

CHAIN ID '=' CHH 
{
	if(name[$2]==0)
	{
		name[$2]=4;
		int i;
		for(i=0;i<$4[0];i++)
			w[$2][i]=$4[i];
	}
	else 
		if(name[$2]==4)
			yyerror("declare in same type");
		else 
			yyerror("declear in vaious type");
}
		

if: IF '(' lo ')' THEN '{'s'}' 
{
	if($3==0)
		printf("if not excuted \n");
	else 
		printf("if is excuted \n");
}

 | 
 
 IF '('lo ')' THEN '{' s'}' ELSE '{'s'}' 
 {
	 if($3==0)
		printf("else si excuted \n");
	else 
		printf("if is excuted \n");
}

lo: rel '&' rel 
{
	$$=$1&&$3;
}
  | 
rel '|' rel 
{
	$$=$1||$3;
}
   | 
'!' rel 
{
	$$=!$2;
}
   | 
rel 
{
	$$=$1;
}
;


rel: stat '<' stat {$$=$1<$3;}

    | stat '>' stat {$$=$1>$3;}
    
    | stat '<''=' stat {$$=($1<=$4);}
    
    | stat '>''=' stat {$$=($1>=$4);}
    
    | stat '!''=' stat {$$=($1==$4);}
    
    | stat '<''>' stat {$$=($1!=$4);}
;


inde: '+''+' ID 
{
	if(ln[$3]==1)
	{
		++loc[$3]; 
		$$=1;
		dd[0]=1;
		dd[1]=$3;
		dd[2]=1;
	}
	else 
		if(name[$3]==1)
		{
			++x[$3];
			$$=1;
			dd[0]=1;
			dd[1]=$3;
			dd[2]=2;
		}
		else 
			if(name[$3]==0)
				printf("this variable is not declare before \n");
			else 
				printf("this variable is declare with various type that not comptabile with the operation\n");
}
    | 
    
'-''-' ID 
{
	if(ln[$3]==1)
	{
		--loc[$3];
		$$=1;
		dd[0]=2;
		dd[1]=$3;
		dd[2]=1;
	}
	else 
		if(name[$3]==1)
		{
			--x[$3];
			$$=1;
			dd[0]=2;
			dd[1]=$3;
			dd[2]=2;
		}
		else 
			if(name[$3]==0)
				printf("this variable is not declare before \n");
			else 
				printf("this variable is declare with various type that not comptabile with the operation\n");
}
    | 
    
'+'ID '+' 
{
	if(ln[$2]==1)
	{
		++loc[$2]; 
		$$=1;
		dd[0]=1;
		dd[1]=$2;
		dd[2]=1;
	}
	else 
		if(name[$2]==1)
		{
			++x[$2];
			$$=1;
			dd[0]=1;
			dd[1]=$2;
			dd[2]=2;
		}
		else 
			if(name[$2]==0)
				printf("this variable is not declare before \n");
			else 
				printf("this variable is declare with various type that not comptabile with the operation\n");
}
    |  
    
'-'ID'-' 
{
	if(ln[$2]==1)
	{
		--loc[$2];
		$$=1;
		dd[0]=2;
		dd[1]=$2;
		dd[2]=1;
	}
	else 
		if(name[$2]==1)
		{
			--x[$2];
			$$=1;
			dd[0]=2;
			dd[1]=$2;
			dd[2]=2;
		}
		else 
			if(name[$2]==0)
				printf("this variable is not declare before \n");
			else 
				printf("this variable is declare with various type that not comptabile with the operation\n");
}
;


ass: ID '=' stat  
{
	$$=-1;
	if(name[$1]==1)
		x[$1]=$3;
	else 
		if(name[$1]==0)
			printf("this variable not declare before \n");
		else 
			if(name[$1]==2)
				y[$1]=$3;
			else 
				printf("this variable is not conpitable with operation\n");
}
   | 
   
ID '=''+' stat 
{
	if(ln[$1]==1)
	{
		loc[$1]=loc[$1]+$4;
		$$=$4;
		dd[0]=1;
		dd[1]=$1;
		dd[2]=1;
	}
	else 
		if(name[$1]==1)
		{
			x[$1]=x[$1]+$4;
			$$=$4;
			dd[0]=1;
			dd[1]=$1;
			dd[2]=2;
		}
		else 
			printf("wrong assignment \n");
}
   | 
   
ID '=''-' stat 
{
	if(ln[$1]==1)
	{
		loc[$1]=loc[$1]-$4;
		$$=$4;
		dd[0]=2;
		dd[1]=$1;
		dd[2]=1;
	}
	else 
		if(name[$1]==1)
		{
			x[$1]=x[$1]-$4;
			$$=$4;
			dd[0]=2;
			dd[1]=$1;
			dd[2]=2;
		}
		else 
			printf("wrong assignment \n");
}
   | 

ID '=''*' stat 
{
	if(ln[$1]==1)
	{
		loc[$1]=loc[$1]*$4;
		$$=$4;
		dd[0]=3;
		dd[1]=$1;
		dd[2]=1;
	}
	else 
		if(name[$1]==1)
		{
			x[$1]=x[$1]*$4;
			$$=$4;
			dd[0]=3;
			dd[1]=$1;
			dd[2]=2;
		}
		else 
			printf("wrong assignment \n");
}
   | 

ID '=''/' stat 
{
	if($4==0)
		printf("division by 0");
	else 
		if(ln[$1]==1)
		{
			loc[$1]=loc[$1]/$4;
			$$=$4;
			dd[0]=4;
			dd[1]=$1;
			dd[2]=1;
		}
		else  if(name[$1]==1)
		{
			x[$1]=x[$1]/$4;
			$$=$4;
			dd[0]=4;
			dd[1]=$1;
			dd[2]=2;
		}
		else 
			printf("wrong assignment \n");   
}
| 

ID '=' CH 
{
	if(name[$1]==0)
		printf("you must declear this variable before you assign value \n");
	else 
		if(name[$1]==3)
			z[$1]=$3;
		else 
			yyerror("not combitable");
}

| 

ID '=' CHH 
{
	if(name[$1]==0)
		yyerror("not decleared ");
	else 
		if(name[$1]==4)
		{
			int i;
			for(i=0;i<$3[0];i++)
				w[$1][i]=$3[i];
		}
		else 
			yyerror("not combitable ");
}
;


stat: stat '+' term 
{
	$$=$1+$3;
}
    | 
    
stat '-' term 
{
	$$=$1-$3;
}
    | 
    
term 
{
	$$=$1;
}
;


term: term '*' fact 
{
	$$=$1*$3;
} 
     | 
     
term '/' fact 
{
	if($3 == 0)
		printf("divison by 0");
	else 
		$$=$1/$3;
}
     | 
     
fact  
{
	$$=$1;
}
;


fact: NUM  
{
	$$=$1;
}
     | 
     
'('stat')'  
{
	$$=$2;
}
     |	
     
ID 
{
	if(name[$1]==1)
		$$=x[$1];
	else
		if(name[$1]==2)
			$$=y[$1];
		else 
			if (name[$1]==0)
				printf("this variable is not declare before \n");
			else 
				printf("this variable is not comptable iwth operation \n");	 
}
     | 
     
FLO 
{
	$$=$1;
}
%%


int yyerror(char* s)
{
	printf("error in %s \n",s);
	return 0;
}


int main()
{
	yyparse();
}