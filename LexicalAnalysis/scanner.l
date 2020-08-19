%{
    #include<stdio.h>
    int line_number = 0;
%}

/*wrong code: errorchar a = 'b'
char c = 'd'_regx_string \"(.)*(\n)*(.)*     error_regex_paranthesis \((.)*(\n)+(.)*\) */

identifier [a-zA-Z_][a-zA-Z0-9_]*
numerical_constants [+-]?(([0-9]*\.[0-9]+)|([0-9]+\.[0-9]*)|([0-9]+))
char_constants [\s]?\'(.)\'
string_constants \"(.)*\"
keywords_1 auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed
keywords_2 void|do|if|static|while|default|goto|volatile|const|float|short|unsigned
multiline_comment \/\*([^(\*/)]*|(\n)*)\*\/
singleline_comment \/\/(.)*
binary_operators \+|\-|\*|\/|\%
unary_operators \+\+|\-\-
relational_operators \=\=|\!\=|\>|\<|\>\=|\<\=
logical_operators \&\&|\|\||\!
bitwise_operators \&|\||\^|\<\<|\>\>
assignment_operators \+\=|\-\=|\*\=|\/\=|\%\=|\=
special_operators sizeof
special_symbols \[|\]|\{|\}|\(|\)|\,|\;
header_files #(.)*
operators {unary_operators}|{special_operators}|{logical_operators}|{relational_operators}|{bitwise_operators}|{binary_operators}|{assignment_operators}

%%

\n {printf("%s", yytext);}
[\n\t' ']* ;
{singleline_comment} ;
{multiline_comment} ;
{header_files} ;
({keywords_1}|{keywords_2}) {printf("keyword");}
({numerical_constants}){identifier} {printf("ERROR: Invalid Identifier"); exit(1);}
{numerical_constants}|{string_constants} {printf("%s is a constant\n", yytext);}
(\")(\s|{identifier}|{numerical_constants})* {printf("ERROR: String error"); exit(1);}
{identifier} {printf("identifier");}
{operators} { printf("operator");}
{special_symbols} {printf("special symbol");}

%%

int main(){
    yyin = fopen("SampleProgram.c", "r");
    yylex();
    fclose(yyin);
    return (0);
}

int yywrap(){
    return(1);
}
