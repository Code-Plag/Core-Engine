/*VECTOR OF ALL REGULAR EXPRESSIONS*/

vector< pair<string, string > > RegexVectorPython
{
    /*NEWLINE*/
    { "(\\n)", "A" }, //NEWLINE

    /*COMMENT: GROUPCOMMENT & INLINECOMMENT*/
    { "(( )#( ).*)", "B" },   // (\\n[\\s]*?)((\"\"\"[\\s\\S]*?\"\"\")|(\'\'\'[\\s\\S]*?\'\'\')) if needed for multiline

    /*HEADER*/
    { "((( )import( ))|(( )from( ).*?( )import( )))(.*)", "C" },   //HEADER 

    /*BYTE BYTEARRAY*/
    { "(( )bytes(( )\\(( )).*(( )\\)( )))|(( )bytearray(( )\\(( )).*(( )\\)( )))", "D" }, // Bytes BytesArray
    { "(b|B|(br)|(Br)|(bR)|(BR))(((\"\"\"[\\s\\S]*?\"\"\")|(\'\'\'[\\s\\S]*?\'\'\'))|(\"[^\"^\\n]*(\"|\\n))|(\'[^\'^\\n]*(\'|\\n)))", "D" },  //TOTALQUOTE

    /*TOTALQUOTE*/ /*multiline totalquote*/
    { "((\"\"\"[\\s\\S]*?\"\"\")|(\'\'\'[\\s\\S]*?\'\'\'))|(\"[^\"^\\n]*(\"|\\n))|(\'[^\'^\\n]*(\'|\\n))", "E" },  //TOTALQUOTE

    /*NUMBER*/
    { "([-+]{1}[\\s]*)?((((( )([0-9]*(( )\\.( ))[0-9]*((e|E)(( )(-|\\+)( ))[0-9]*)*?))|(( )([0-9]*(( )\\.( ))[0-9]*((e|E)[0-9]*)*?)))|((( )([0-9]+((e|E)(( )(-|\\+)( ))[0-9]*)*?))|(( )([0-9]+((e|E)[0-9]*)*?))))(j|J))", "F" },   //Complex number
    { "([-+]{1}[\\s]*)?(( )0(b|B)[01]+( ))", "F" },    //Binary number
    { "([-+]{1}[\\s]*)?(( )0(o|O)[0-7]+( ))", "F" },   //Octal number
    { "([-+]{1}[\\s]*)?(( )0(x|X)[0-9a-fA-F]+( ))", "F" },   //HexaDecimal
    { "([-+]{1}[\\s]*)?((( )([0-9]*(( )\\.( ))[0-9]*((e|E)(( )(-|\\+)( ))[0-9]*)*?)( ))|(( )([0-9]*(( )\\.( ))[0-9]*((e|E)[0-9]*)*?)( )))", "F" }, //Decimal
    { "([-+]{1}[\\s]*)?((( )([0-9]+((e|E)(( )(-|\\+)( ))[0-9]*)*?)( ))|(( )([0-9]+((e|E)[0-9]*)*?)( )))", "F" }, //Integer
    { "(( )True())|(()False( ))|(( )None( ))", "F" }, //Boolean
    { "( )random(( )\\.( ))randrange(( )\\(( )).*(( )\\))", "F" }, //Range Random

    /*OPERATOR*/
    { "(/(  )/(  )=)|(\\*(  )\\*(  )=)|(>(  )>(  )=)|(<(  )<(  )=)|(\\+(  )=)|(-(  )=)|(\\*(  )=)|(/(  )=)|(%(  )=)|(&(  )=)|(\\|(  )=)|(\\^(  )=)|(\\+(  )\\+)|(-(  )-)", "I" }, //ASSIGN_OPERATOR_1
    { "(\\*(  )\\*)|(/(  )/)", "L" },  //ARITHMETIC_OPERATOR_2
    { "((!(  )=)|(( )is( )[\\s]*( )not( )))|((=(  )=)|( )is( ))|(>(  )=)|(<(  )=)", "K" }, // RELATIONAL_OPERATOR_1
    { "(<(  )<)|(>(  )>)|(&|( )AND( ))|(\\||( )OR( ))|(\\^|( )XOR( ))|(~|( )NOT( ))", "J" }, //BITWISE_OPERATOR
    { "(>)|(<)", "K" }, // RELATIONAL_OPERATOR_2
    { "(=)", "I" },  //ASSIGN_OPERATOR_2
    { "(\\+)|(-)|(\\*)|(/)|(%)|(!)", "L" },  //ARITHMETIC_OPERATOR_2
    { "(( )not( )[\\S]*( )in( ))|(( )in( ))", "" }, //MEMBERSHIP_OPERATOR
    { "(( )and( ))|(( )or( ))|(( )not( ))", "G" }, //LOGICAL_OPERATOR
    { "(\\.)", "H" }, //OTHER_OPERATOR

    /*EXCEPTION*/
    { "(( )try( ):)", "" }, // Try
    { "((( )except( )).*:)|((( )finally( )).*:)", "" },  // Exception
    { "(( )raise( )).*", "" },  // Raise

    /*Function Def*/
    { "(( )def( ))([\\s]*?)(( )[A-Za-z_]+[0-9A-Za-z_]*( ))([\\s]*?)(\\([\\s\\S]*?\\))([\\s]*?):", "" }, // function Definition

    /*SEPERATOR*/
    { ";", "P" },  //SEMICOLON
    { ",", "Q" },  //COMMA
    { ":", "" },  //COLON

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
    /*Input*/
    { " input ", "" },
    { " raw_input ", "" },
    { " print ", "" },

    /*If else*/
    { " if ", "" },
    { " elif ", "" },
    { " else ", "" },

    /*Break Continue*/
    { " continue ", "" },
    { " break ", "" },

    /*Pass*/
    { " pass ", "" },

    /*Return*/
    { " return ", "" },

    /*Loop*/
    { " for ", "" },
    { " while ", "" },

    /*Def*/
    { " def ", "" },
    { " lambda ", "" },

    /*Class*/
    { " class ", "" },

    /*Del*/
    { " del ", "" },

    /*Self*/
    { " self ", "" },


    /*Other Keywords*/
    { " as ", "k" },
    { " async ", "k" },
    { " assert ", "k" },
    { " await ", "k" },
    { " from ", "k" },
    { " global ", "k" },
    { " is ", "k" },
    { " nonlocal ", "k" },
    { " with ", "k" },
    { " yield ", "k" },

};


