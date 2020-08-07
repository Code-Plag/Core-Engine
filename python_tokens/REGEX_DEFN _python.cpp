/*VECTOR OF ALL REGULAR EXPRESSIONS*/

vector< pair<string, string > > RegexVectorPython
{
    /*NEWLINE*/
    { "(\\n)", "A" }, //NEWLINE


    /*COMMENT: GROUPCOMMENT & INLINECOMMENT*/
    { "(( )#( ).*)", "B" },   // (\\n[\\s]*?)((\"\"\"[\\s\\S]*?\"\"\")|(\'\'\'[\\s\\S]*?\'\'\')) if needed for multiline

    /*HEADER*/
    { "((( )import( ))|(( )from( ).*?( )import( )))(.*)", "C" },   //HEADER 

    /*TOTALQUOTE*/ /*multiline totalquote*/
    { "((\"\"\"[\\s\\S]*?\"\"\")|(\'\'\'[\\s\\S]*?\'\'\'))|(\"[^\"^\\n]*(\"|\\n))|(\'[^\'^\\n]*(\'|\\n))", "E" },  //TOTALQUOTE


    /*NUMBER*/

    { "([-+]{1}[\\s]*)?((((( )([0-9]*(( )\\.( ))[0-9]*((e|E)(( )(-|\\+)( ))[0-9]*)*?))|(( )([0-9]*(( )\\.( ))[0-9]*((e|E)[0-9]*)*?)))|((( )([0-9]+((e|E)(( )(-|\\+)( ))[0-9]*)*?))|(( )([0-9]+((e|E)[0-9]*)*?))))(j|J))", "F" },   //Complex number
    { "([-+]{1}[\\s]*)?(( )0(b|B)[01]+( ))", "F" },         //Binary number
    { "([-+]{1}[\\s]*)?(( )0(o|O)[0-7]+( ))", "F" },         //Octal number
    { "([-+]{1}[\\s]*)?(( )0(x|X)[0-9a-fA-F]+( ))", "F" }, //HexaDecimal
    { "([-+]{1}[\\s]*)?((( )([0-9]*(( )\\.( ))[0-9]*((e|E)(( )(-|\\+)( ))[0-9]*)*?)( ))|(( )([0-9]*(( )\\.( ))[0-9]*((e|E)[0-9]*)*?)( )))", "F" },
    { "([-+]{1}[\\s]*)?((( )([0-9]+((e|E)(( )(-|\\+)( ))[0-9]*)*?)( ))|(( )([0-9]+((e|E)[0-9]*)*?)( )))", "F" }, //Decimal

   /*OPERATOR*/

    { "(/(  )/(  )=)|(\\*(  )\\*(  )=)|(>(  )>(  )=)|(<(  )<(  )=)|(\\+(  )=)|(-(  )=)|(\\*(  )=)|(/(  )=)|(%(  )=)|(&(  )=)|(\\|(  )=)|(\\^(  )=)|(\\+(  )\\+)|(-(  )-)", "I" }, //ASSIGN_OPERATOR_1
    { "(\\*(  )\\*)|(/(  )/)", "L" },  //ARITHMETIC_OPERATOR_2
    { "((!(  )=)|(( )is( )[\\s]*( )not( )))|((=(  )=)|( )is( ))|(>(  )=)|(<(  )=)", "K" }, // RELATIONAL_OPERATOR_1
    { "(<(  )<)|(>(  )>)|(&|( )AND( ))|(\\||( )OR( ))|(\\^|( )XOR( ))|(~|( )NOT( ))", "J" }, //BITWISE_OPERATOR
    { "(>)|(<)", "K" }, // RELATIONAL_OPERATOR_2
    { "(=)", "I" },  //ASSIGN_OPERATOR_2
    { "(\\+)|(-)|(\\*)|(/)|(%)|(!)", "L" },  //ARITHMETIC_OPERATOR_2
    { "(( )not( )[\\S]*( )in( ))|(( )in( ))", "D" }, //MEMBERSHIP_OPERATOR
    { "(( )and( ))|(( )or( ))|(( )not( ))", "G" }, //LOGICAL_OPERATOR
    { "(:)|(\\.)", "H" }, //OTHER_OPERATOR





    /*APPLY*/
    { "(std(\\s*)(:(  ):)(\\s*))?(( )(cin|cout|endl)( ))", "M" },


    /*IF*/
    { "( )(if|(if(\\s+)constexpr))( )", "N" },


    /*DATATYPE*/
    { "((( )(consteval|constexpr|constinit|const_cast|extern|long|mutable|register|short|signed|static|static_assert|static_cast|unsigned|const|volatile)( )(\\s*))*(( )(auto|bool|char|char8_t|char16_t|char32_t|double|float|int|wchar_t|void|size_t|struct|union|enum|typedef|string|vector|map|pair|template)( )))", "O" },

    /*SEPERATOR*/
  //  { ";", "P"},  //SEMICOLON
    { ",", "Q" },  //COMMA


    /*Braces*/
    { "\\{", "R" }, //L_CURLY_BRACE
    { "\\}", "S" }, //R_CURLY_BRACE
    { "\\[", "T" }, //L_SQUARE_BRACKET
    { "\\]", "U" }, //R_SQUARE_BRACKET
    { "\\(", "V" }, //L_PARENTHESIS
    { "\\)", "W" }, //R_PARENTHESIS

    /*IDENTIFIER*/
    { "(( )[A-Za-z_]+[0-9A-Za-z_]*( ))", "X" }  //ID

};

/*MAP OF ALL KEYWORDS*/
unordered_map <string, string> KEYWORD_hash_Map_Python
{

















    /*LOOP KEYWODS*/
    { " for_each ", "Y" }, //LOOP
    { " for ", "Y" },
    { " while ", "Y" },
    { " do ", "Y" },

    /*NUMBERS*/
    { " true ", "F" },
    { " false ", "F" },
    { " NULL ", "F" },
    { " nullptr ", "F" },

    /*DATATYPE KEYWORDS*/
    { " long ", "O" },
    { " short ", "O" },
    { " signed ", "O" },
    { " unsigned ", "O" },

    /*APPLY KEYWORDS*/
    { " cout ", "M" },
    { " cin ", "M" },
    { " endl ", "M" },
    { " getline ", "M" },
    { " printf ", "M" },
    { " scanf ", "M" },

    /*OPERATOR KEYWORDS*/
    { " sizeof ", "H" },  //OTHER_OPERATOR
    { " and ", "K" },  //RELATIONAL_OPERATOR
    { " and_eq ", "I" }, //ASSIGN_OPERATOR
    { " bitand ", "J" }, //BITWISE_OPERATOR
    { " bitor ", "J" },  //BITWISE_OPERATOR
    { " compl ", "J" },  //BITWISE_OPERATOR
    { " not ", "K" },  //RELATIONAL_OPERATOR
    { " not_eq ", "I" }, //ASSIGN_OPERATOR
    { " xor ", "K" },  //RELATIONAL_OPERATOR
    { " xor_eq ", "I" },  //ASSIGN_OPERATOR

    /*KEYWORDS USED FOR TOKENIZATION*/
    { " switch ", "Z" },
    { " else ", "a" },
    { " break ", "b" },
    { " continue ", "c" },
    { " return ", "d" },
    { " goto ", "e" },
    { " catch ", "f" },
    { " throw ", "g" },
    { " synchronized ", "h" },
    { " class ", "i" },
    { " typedef ", "j" },

    /*OTHER KEYWORDS*/
    { " alignas ", "k" },
    { " alignof ", "k" },
    { " atomic_cancel ", "k" },
    { " atomic_commit ", "k" },
    { " atomic_noexcept ", "k" },
    { " asm ", "k" },

    { " concept ", "k" },
    { " const ", "k" },
    { " consteval ", "k" },
    { " constexpr ", "k" },
    { " constinit ", "k" },
    { " const_cast ", "k" },
    { " co_await ", "k" },
    { " co_return ", "k" },
    { " co_yield ", "k" },

    { " decltype ", "k" },
    { " delete ", "k" },
    { " dynamic_cast ", "k" },
    { " define ", "k" },
    { " defined ", "k" },

    { " enum ", "k" },
    { " explicit ", "k" },
    { " export ", "k" },
    { " extern ", "k" },
    { " endif ", "k" },
    { " elif ", "k" },
    { " error ", "k" },

    { " friend ", "k" },
    { " fortran ", "k" },

    { " inline ", "k" },
    { " ifdef ", "k" },
    { " ifndef ", "k" },

    { " line ", "k" },

    { " mutable ", "k" },

    { " namespace ", "k" },
    { " new ", "k" },
    { " noexcept ", "k" },

    { " operator ", "k" },
    { " or ", "k" },
    { " or_eq ", "k" },

    { " private ", "k" },
    { " protected ", "k" },
    { " public ", "k" },
    { " pragma ", "k" },
    { " _Pragma ", "k" },

    { " reflexpr ", "k" },
    { " register ", "k" },
    { " reinterpret_cast ", "k" },
    { " requires ", "k" },
    { " restrict ", "k" },

    { " static ", "k" },
    { " static_assert ", "k" },
    { " static_cast ", "k" },
    { " std ", "k" },

    { " this ", "k" },
    { " thread_local ", "k" },

    { " typeid ", "k" },
    { " typename ", "k" },

    { " undef ", "k" },
    { " using ", "k" },

    { " virtual ", "k" },
    { " volatile ", "k" },

    { " __has_include ", "k" },
    { " __has_cpp_attribute ", "k" },

};


