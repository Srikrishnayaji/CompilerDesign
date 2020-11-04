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
	extern char cur_identifier[20];
	extern char cur_function[20];
	extern int cur_scope;
	extern int params_cnt;
	extern int funccall_params_cnt;
	void insert_symbol_table_scope(char*, int);
	void insert_symbol_table_params_cnt(char*, int);
	void remove_scope(int);
	int verify_funccall_cnt(char*, int);
	int check_arg_type(int , char* , int);
	void insert_arg_type(char*, char*, int);
	void insert_func_table(char* );
	char get_identifier_type(char* );
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
			: type_specifier variable_declaration_list ';' {
				
			}
			| structure_declaration;

variable_declaration_list
			: variable_declaration_identifier V ;

V
			: ',' variable_declaration_list {
				$$ = $2;
			}
			| ;

variable_declaration_identifier 
			: IDENTIFIER {ins(), insert_symbol_table_scope(cur_identifier, cur_scope);} vdi {
				char type = get_identifier_type(cur_identifier);
				if(type == 'i' && $3 == 5) $$ = 5;
				else if(type == 'c' && $3 == 6) $$ = 6;
				else if($3 != 127) {
					puts("ERROR:  Declaration type Mismatch.\n");
					yyerror("");
				}
			};

vdi : identifier_array_type {$$ = 127;} | assignment expression {
	$$ = $2;	
}; 

identifier_array_type
			: '[' initilization_params
			| ;

initilization_params
			: subtract NUM_CONSTANT ']' initilization {puts("ERROR: Array size negative!!"); yyerror("");}
			| NUM_CONSTANT {if(atoi(curval) == 0) {puts("ERROR: Array Size is 0!!"); yyerror("");}} ']' initilization
			| ']' string_initilization;

initilization
			: string_initilization
			| array_initialization
			| ;

type_specifier 
			: INT {$$ = 5;}| CHAR {$$ = 6;}| FLOAT {$$ = 5;}| DOUBLE 
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
			: type_specifier IDENTIFIER '('  { params_cnt = 0; ins(); strcpy(cur_function, cur_identifier); insert_symbol_table_scope(cur_identifier, cur_scope); insert_func_table(cur_function);};

function_declaration_param_statement
			: params ')' statement;

params 
			: parameters_list | ;

parameters_list 
			: type_specifier {insert_arg_type(Match_type, cur_function, params_cnt);} parameters_identifier_list {insert_symbol_table_params_cnt(cur_function, params_cnt);};

parameters_identifier_list 
			: param_identifier parameters_identifier_list_breakup;

parameters_identifier_list_breakup
			: ',' parameters_list 
			| ;

param_identifier 
			: IDENTIFIER { ins(); insert_symbol_table_scope(cur_identifier, cur_scope+1); params_cnt++;} param_identifier_breakup;

param_identifier_breakup
			: '[' ']'
			| ;

statement 
			: expression_statment | compound_statement 
			| conditional_statements | iterative_statements 
			| return_statement | break_statement 
			| variable_declaration;

compound_statement 
			: {cur_scope++;} '{' statment_list '}' {remove_scope(cur_scope); cur_scope--;};

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
			: RETURN return_statement_breakup {
				// printf(get_ideni)
				if($2 == 5 && get_identifier_type(cur_function) == 'i') {

				} else if($2 == 6 && get_identifier_type(cur_function) == 'c') {

				} else if(!($2 == 127 && get_identifier_type(cur_function) == 'v')){
					puts("ERROR: RETURN Type mismatch!");
					yyerror(cur_function);
				}
			};

return_statement_breakup
			: ';' {$$ = 127;}
			| expression ';' {$$ = $1;};

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
			: mutable expression_breakup {
				if($1 != $2) {
					printf("ERROR: Type Mismatch.\n");
					yyerror("");
				} else if($1 == 5) {
					$$ = 5;
				} else if($1 == 6) {
					$$ = 6;
				}
			}
			| simple_expression {
				$$ = $1;
			};

expression_breakup
			: assignment expression {
				$$ = $2;
			}
			| additionAssignment expression {
				$$ = $2;
			}
			| subtractionAssignment expression {
				$$ = $2;
			}
			| multiplicationAssignment expression {
				$$ = $2;
			}
			| divisionAssignment expression {
				$$ = $2;
			}
			| moduloAssignment expression {
				$$ = $2;
			}
			| increment {
				$$ = 5;
			} 
			| decrement {
				$$  = 5;
			};

simple_expression 
			: and_expression simple_expression_breakup {
				$$ = $1;
			};

simple_expression_breakup 
			: or and_expression simple_expression_breakup | ;

and_expression 
			: unary_relation_expression and_expression_breakup {
				$$ = $1;
			};

and_expression_breakup
			: and unary_relation_expression and_expression_breakup
			| ;

unary_relation_expression 
			: not unary_relation_expression 
			| regular_expression {
				$$ = $1;
			};

regular_expression 
			: sum_expression regular_expression_breakup {
				if($1 == $2) {
					$$ = $1;
				}
			};

regular_expression_breakup
			: relational_operators sum_expression {
				$$ = $2;
			}
			| ;

relational_operators 
			: greaterthanAssignment | lessthanAssignment | greaterthan 
			| lessthan | equality | inequality ;

sum_expression 
			: sum_expression sum_operators term {
				if($1 == $3)
					$$ = $1;
				else 
					printf("ERROR: Type mismatch.\n");
					yyerror("");
			}
			| term {$$ = $1;};

sum_operators 
			: add 
			| subtract ;

term
			: term MULOP factor {
				if($1 == $3)
					$$ = $1;
				else 
					{
						printf("ERROR: Type mismatch");
						yyerror("");
					};
			} 
			| factor {$$ = $1;};

MULOP 
			: multiplication | divide | modulo ;

factor 
			: immutable {$$ = $1;}| mutable ;

mutable 
			: IDENTIFIER {
				// check identifire type and return;
				puts(cur_identifier);
				
				char type = get_identifier_type(cur_identifier);
				if(type == 'i') $$ = 5;
				if(type == 'c') $$ = 6;
			}
			| mutable mutable_breakup {
				if($2 == 5 || $1 == 5) 
					$$ = 5;
				else 
					printf("ERROR: Type Mismatch");
					yyerror("");
			};

mutable_breakup
			: '[' expression ']' 
			| '.' IDENTIFIER {if( $2 == 5) $$ = 5;};

immutable 
			: '(' expression ')' {
				if($2 == 5) $$ = 5;
			}
			| call {
				if($1 == 5) $$ = 5;
			}
			| constant {
				if($1 == 5) $$ = 5;
			};

call
			: IDENTIFIER '(' {strcpy(cur_function, cur_identifier);} arguments ')' {
				puts(cur_identifier);
				char type = get_identifier_type(cur_function);
				if(type == 'i') $$ = 5;
				if(type == 'c') $$ = 6;

				if(!verify_funccall_cnt(cur_function, funccall_params_cnt)) {
					puts("ERROR: Function Call arguments count mismatch");
					yyerror(cur_function);
				}
			};

arguments 
			: arguments_list | ;

arguments_list 
			: {funccall_params_cnt = 0;} expression {check_arg_type($2, cur_function, funccall_params_cnt);funccall_params_cnt++;} A;

A
			: ',' expression {check_arg_type($2, cur_function, funccall_params_cnt);;funccall_params_cnt++;} A 
			| ;

constant 
			: NUM_CONSTANT 	{ insV(); $$=5;} 
			| STRING_CONSTANT	{ insV(); } 
			| CHAR_CONSTANT{ insV(); $$=6;};

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
void print_func_table();

int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();
	if((bbracketsopen-bbracketsclose)){
        printf("ERROR: brackets error [\n");
		// yyerror("ERROR: brackets error [\n");
		flag = 1;
    }
    if((fbracketsopen-fbracketsclose)){
        printf("ERROR: brackets error {\n");
		// yyerror("ERROR: brackets error {\n");
		flag = 1;
    }
    if((cbracketsopen-cbracketsclose)){
        printf("ERROR: brackets error (\n");
		// yyerror("ERROR: brackets error (\n");
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
		printf("%30s %s\n", " ", "--------------");
		print_func_table();
	}
}


void yyerror(char *s)
{
	puts("=========================================================================");
	printf("Parsing Failed at line no: %d\n", yylineno);
	printf("Error: %s\n", yytext);
	exit(0);
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
