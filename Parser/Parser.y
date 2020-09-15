%{
	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;

	extern char Match_str[20];
	extern char Match_type[20];
	extern char curval[20];

%}

%nonassoc IF
%token INT CHAR FLOAT DOUBLE LONG SHORT SIGNED UNSIGNED STRUCT
%token RETURN MAIN
%token VOID
%token WHILE FOR DO 
%token BREAK
%token ENDIF
%token AUTO SWITCH CASE ENUM REG TYPEDEF EXTERN UNION CONTINUE STATIC DEFAULT GOTO VOLATILE CONST IDENTIFIER NUM_CONSTANT CHAR_CONSTANT STRING_CONSTANT


%nonassoc ELSE

%right leftshiftAssignment rightshiftAssignment
%right xorAssignment orAssignment
%right andAssignment moduloAssignment
%right multiplicationAssignment divisionAssignment
%right additionAssignment subtractionAssignment
%right assignment

%left or
%left and
%left bitOr
%left xor
%left bitAnd
%left equality inequality
%left lessthanAssignment lessthan greaterthanAssignment greaterthan
%left leftshift rightshift 
%left add subtract
%left multiplication divide modulo

%right SIZEOF
%right negation not
%left increment decrement 


%start program

%%
program
			: declaration_list;

declaration_list
			: declaration D 

D
			: declaration_list
			| ;

declaration
			: variable_declaration 
			| function_declaration
			| structure_definition;

variable_declaration
			: type_specifier variable_declaration_list ';' 
			| structure_declaration;

variable_declaration_list
			: variable_declaration_identifier V;

V
			: ',' variable_declaration_list 
			| ;

variable_declaration_identifier 
			: IDENTIFIER { ins(); } vdi;

vdi : identifier_array_type | assignment expression ; 

identifier_array_type
			: '[' initilization_params
			| ;

initilization_params
			: NUM_CONSTANT ']' initilization
			| ']' string_initilization;

initilization
			: string_initilization
			| array_initialization
			| ;

type_specifier 
			: INT | CHAR | FLOAT | DOUBLE 
			| LONG long_grammar 
			| SHORT short_grammar
			| UNSIGNED unsigned_grammar 
			| SIGNED signed_grammar
			| VOID ;

unsigned_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

signed_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

long_grammar 
			: INT | ;

short_grammar 
			: INT | ;

structure_definition
			: STRUCT IDENTIFIER { ins(); } '{' V1  '}' ';';

V1 : variable_declaration V1 | ;

structure_declaration 
			: STRUCT IDENTIFIER variable_declaration_list;


function_declaration
			: function_declaration_type function_declaration_param_statement;

function_declaration_type
			: type_specifier IDENTIFIER '('  { ins();};

function_declaration_param_statement
			: params ')' statement;

params 
			: parameters_list | ;

parameters_list 
			: type_specifier parameters_identifier_list;

parameters_identifier_list 
			: param_identifier parameters_identifier_list_breakup;

parameters_identifier_list_breakup
			: ',' parameters_list 
			| ;

param_identifier 
			: IDENTIFIER { ins(); } param_identifier_breakup;

param_identifier_breakup
			: '[' ']'
			| ;

statement 
			: expression_statment | compound_statement 
			| conditional_statements | iterative_statements 
			| return_statement | break_statement 
			| variable_declaration;

compound_statement 
			: '{' statment_list '}' ;

statment_list 
			: statement statment_list 
			| ;

expression_statment 
			: expression ';' 
			| ';' ;

conditional_statements 
			: IF '(' simple_expression ')' statement conditional_statements_breakup;

conditional_statements_breakup
			: ELSE statement
			| ;

iterative_statements 
			: WHILE '(' simple_expression ')' statement 
			| FOR '(' expression ';' simple_expression ';' expression ')' 
			| DO statement WHILE '(' simple_expression ')' ';';

return_statement 
			: RETURN return_statement_breakup;

return_statement_breakup
			: ';' 
			| expression ';' ;

break_statement 
			: BREAK ';' ;

string_initilization
			: assignment STRING_CONSTANT { insV(); };

array_initialization
			: assignment '{' array_int_declarations '}';

array_int_declarations
			: NUM_CONSTANT array_int_declarations_breakup;

array_int_declarations_breakup
			: ',' array_int_declarations 
			| ;

expression 
			: mutable expression_breakup
			| simple_expression ;

expression_breakup
			: assignment expression 
			| additionAssignment expression 
			| subtractionAssignment expression 
			| multiplicationAssignment expression 
			| divisionAssignment expression 
			| moduloAssignment expression 
			| increment 
			| decrement ;

simple_expression 
			: and_expression simple_expression_breakup;

simple_expression_breakup 
			: or and_expression simple_expression_breakup | ;

and_expression 
			: unary_relation_expression and_expression_breakup;

and_expression_breakup
			: and unary_relation_expression and_expression_breakup
			| ;

unary_relation_expression 
			: not unary_relation_expression 
			| regular_expression ;

regular_expression 
			: sum_expression regular_expression_breakup;

regular_expression_breakup
			: relational_operators sum_expression 
			| ;

relational_operators 
			: greaterthanAssignment | lessthanAssignment | greaterthan 
			| lessthan | equality | inequality ;

sum_expression 
			: sum_expression sum_operators term 
			| term ;

sum_operators 
			: add 
			| subtract ;

term
			: term MULOP factor 
			| factor ;

MULOP 
			: multiplication | divide | modulo ;

factor 
			: immutable | mutable ;

mutable 
			: IDENTIFIER 
			| mutable mutable_breakup;

mutable_breakup
			: '[' expression ']' 
			| '.' IDENTIFIER;

immutable 
			: '(' expression ')' 
			| call | constant;

call
			: IDENTIFIER '(' arguments ')';

arguments 
			: arguments_list | ;

arguments_list 
			: expression A;

A
			: ',' expression A 
			| ;

constant 
			: NUM_CONSTANT 	{ insV(); } 
			| STRING_CONSTANT	{ insV(); } 
			| CHAR_CONSTANT{ insV(); };

%%

extern FILE *yyin;
extern int yylineno;
extern char *yytext;
extern int cbracketsopen;
extern int cbracketsclose;
extern int bbracketsopen;
extern int bbracketsclose;
extern int fbracketsopen;
extern int fbracketsclose;
void insert_symbol_table_type(char *,char *);
void insert_symbol_table_value(char *, char *);
void insert_constantsTable(char *, char *);
void print_constant_table();
void print_symbol_table();

int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();
	if((bbracketsopen-bbracketsclose)){
        printf("ERROR: brackets error [");
		flag = 1;
    }
    if((fbracketsopen-fbracketsclose)){
        printf("ERROR: brackets error {");
		flag = 1;
    }
    if((cbracketsopen-cbracketsclose)){
        printf("ERROR: brackets error (");
		flag = 1;
    }


	if(flag == 0)
	{
		printf("Status: Parsing Complete - Valid\n");
		printf("SYMBOL TABLE\n");
		printf("%30s %s\n", " ", "------------");
		print_symbol_table();
		printf("\n\nCONSTANT TABLE\n");
		printf("%30s %s\n", " ", "--------------");
		print_constant_table();
	}
}

void yyerror(char *s)
{
	puts("=========================================================================");
	printf("Parsing Failed at line no: %d\n", yylineno);
	printf("Error: %s\n", yytext);
	flag=1;
}

void ins()
{
	insert_symbol_table_type(Match_str,Match_type);
}

void insV()
{
	insert_symbol_table_value(Match_str,curval);
}
