/*VECTOR OF ALL REGULAR EXPRESSIONS*/

vector< pair<string, string > > RegexVectorCpp
{
    /*NEWLINE*/
    { "(\\n)", "A"}, //NEWLINE


    /*COMMENT: GROUPCOMMENT & INLINECOMMENT*/
   // { "(((?:/  \\*(?:[^*]|(?:\\*+[^*/]))*\\*+  /)|(?://.*))|((/( )( )/)(.*)))", "B"},  //COMMENT
    //    { "((/( )( )(\\*)(\\s|\\S)*(\\*)( )( )/)|((/( )( )/)(.*)))", "B"},  //COMMENT
        { "((/( )( )\\*(?:.|[\\n\\r])*?\\*( )( )/)|((/( )( )/)(.*)))", "B"},  //COMMENT


    /*HEADER*/
    { "(( )(\\s*)(import)(\\s*)(( ))([\\s\\S]*?)(;( ))", "C"},   //HEADER


    /*NAMESPACE_STD*/
    { "(( )(using)(\\s+)(namespace)(\\s+)(std)(\\s*)(;)( ))", "D"},  //NAMESPACE_STD


    /*TOTALQUOTE*/
    { "(\"[^\"^\\n]*(\"|\\n))|(\'[^\'^\\n]*(\'|\\n))", "E"},  //TOTALQUOTE


    /*NUMBER*/
    { "(( )(0([0-7]*(UL|ul|LU|lu|L|l|U|u)?))( ))|(( )(0(x|X)[0-9a-fA-F]+(UL|ul|LU|lu|L|l|U|u)?)( ))|(( )(((([0-9]+(( )\\.( ))[0-9]*)|([0-9]*(( )\\.( ))[0-9]+))([eE](( )[-+]( ))?[0-9]+[flFL]?)?)|([0-9]+(e|E)(( )[-+]( ))?[0-9]+[flFL]?))( ))|(( )([1-9][0-9]*(UL|ul|LU|lu|L|l|U|u)?)( ))", "F"},   //NUMBER


    /*CASE*/
    { "(( )(case(\\s+)(.*))|default)(\\s*):", "G"},  //CASE


    /*OPERATOR*/
    { "(\\.(  )\\.(  )\\.)|(-(  )>(  )\\*)|(:(  ):)|(\\.(  )>)|(-(  )>)|(\\.(  )\\*)", "H"}, //OTHER_OPERATOR_1  //OTHER_OPERATOR
    { "(<(  )<(  )=)|(>(  )>(  )=)|(\\*(  )=)|(/(  )=)|(%(  )=)|(\\+(  )=)|(-(  )=)|(&(  )=)|(\\^(  )=)|(\\|(  )=)|(\\+(  )\\+)|(-(  )-)", "I"}, //ASSIGN_OPERATOR_1  //ASSIGN_OPERATOR
    { "(<(  )<)|(>(  )>)", "J"}, //BITWISE_OPERATOR_1  //BITWISE_OPERATOR
    { "(<(  )=)|(>(  )=)|(\\|(  )\\|)|(&(  )&)|(=(  )=)|(!(  )=)|(<)|(>)|(\\?)", "K"}, //RELATIONAL_OPERATOR  //RELATIONAL_OPERATOR
    { "(~)|(\\|)|(&)|(\\^)", "J"}, //BITWISE_OPERATOR_2   //BITWISE_OPERATOR
    { "(=)", "I"}, //ASSIGN_OPERATOR_2  //ASSIGN_OPERATOR
    { "(\\+)|(-)|(\\*)|(/)|(%)|(!)", "L"}, //ARITHMETIC_OPERATOR
    { "(:)|(\\.)", "H"}, //OTHER_OPERATOR_2


    /*APPLY*/
    { "(std(\\s*)(:(  ):)(\\s*))?(( )(cin|cout|endl)( ))", "M"},


    /*IF*/
    { "( )(if|(if(\\s+)constexpr))( )", "N"},


    /*DATATYPE*/
    { "((( )(consteval|constexpr|constinit|const_cast|extern|long|mutable|register|short|signed|static|static_assert|static_cast|unsigned|const|volatile)( )(\\s*))*(( )(auto|bool|char|char8_t|char16_t|char32_t|double|float|int|wchar_t|void|struct|union|enum|typedef|string|vector|map|pair|template)( )))", "O"},

    /*SEPERATOR*/
    { ";", "P"},  //SEMICOLON
    { ",", "Q"},  //COMMA


    /*Braces*/
    { "\\{", "R"}, //L_CURLY_BRACE
    { "\\}", "S"}, //R_CURLY_BRACE
    { "\\[", "T"}, //L_SQUARE_BRACKET
    { "\\]", "U"}, //R_SQUARE_BRACKET
    { "\\(", "V"}, //L_PARENTHESIS
    { "\\)", "W"}, //R_PARENTHESIS

    /*IDENTIFIER*/
    { "(( )[A-Za-z_]+[0-9A-Za-z_]*( ))", "X"}  //ID

};

/*MAP OF ALL KEYWORDS*/
unordered_map <string, string> KEYWORD_hash_Map_Cpp
{

    /*LOOP KEYWODS*/
    {" for_each ", "Y"}, //LOOP
    {" for ", "Y"},
    {" while ", "Y"},
    {" do ", "Y"},

    /*NUMBERS*/
    {" true ", "F"},
    {" false ", "F"},
    {" NULL ", "F"},
    {" nullptr ", "F"},

    /*DATATYPE KEYWORDS*/
    {" long ", "O"},
    {" short ", "O"},
    {" signed ", "O"},
    {" unsigned ", "O"},

    /*APPLY KEYWORDS*/
    {" System.Out.Println ", "M"},
    {" System.Out.Print ", "M"},
    {" sc.nextInt ", "M"},
    {" endl ", "M"},

    /*OPERATOR KEYWORDS*/
    {" sizeof ", "H"},  //OTHER_OPERATOR
    {" and ", "K"},  //RELATIONAL_OPERATOR
    {" and_eq ", "I"}, //ASSIGN_OPERATOR
    {" bitand ", "J"}, //BITWISE_OPERATOR
    {" bitor ", "J"},  //BITWISE_OPERATOR
    {" compl ", "J"},  //BITWISE_OPERATOR
    {" not ", "K"},  //RELATIONAL_OPERATOR
    {" not_eq ", "I"}, //ASSIGN_OPERATOR
    {" xor ", "K"},  //RELATIONAL_OPERATOR
    {" xor_eq ", "I"},  //ASSIGN_OPERATOR

    /*KEYWORDS USED FOR TOKENIZATION*/
    {" switch ", "Z"},
    {" else ", "a"},
    {" break ", "b"},
    {" continue ", "c"},
    {" return ", "d"},
    {" goto ", "e"},
    {" catch ", "f"},
    {" throw ", "g"},
    {" synchronized ", "h"},
    {" class ", "i"},
    {" typedef ", "j"},

    /*OTHER KEYWORDS*/
    {" alignas ", "k"},
    {" alignof ", "k"},
    {" atomic_cancel ", "k"},
    {" atomic_commit ", "k"},
    {" atomic_noexcept ", "k"},
    {" asm ", "k"},

    {" concept ", "k"},
    {" const ", "k"},
    {" consteval ", "k"},
    {" constexpr ", "k"},
    {" constinit ", "k"},
    {" const_cast ", "k"},
    {" co_await ", "k"},
    {" co_return ", "k"},
    {" co_yield ", "k"},

    {" decltype ", "k"},
    {" delete ", "k"},
    {" dynamic_cast ", "k"},
    {" define ", "k"},
    {" defined ", "k"},

    {" enum ", "k"},
    {" explicit ", "k"},
    {" export ", "k"},
    {" extern ", "k"},
    {" endif ", "k"},
    {" elif ", "k"},
    {" error ", "k"},

    {" friend ", "k"},

    {" inline ", "k"},
    {" ifdef ", "k"},
    {" ifndef ", "k"},

    {" line ", "k"},

    {" mutable ", "k"},

    {" namespace ", "k"},
    {" new ", "k"},
    {" noexcept ", "k"},

    {" operator ", "k"},
    {" or ", "k"},
    {" or_eq ", "k"},

    {" private ", "k"},
    {" protected ", "k"},
    {" public ", "k"},
    {" pragma ", "k"},
    {" _Pragma ", "k"},

    {" reflexpr ", "k"},
    {" register ", "k"},
    {" reinterpret_cast ", "k"},
    {" requires ", "k"},

    {" static ", "k"},
    {" static_assert ", "k"},
    {" static_cast ", "k"},
    {" std ", "k"},

    {" this ", "k"},
    {" thread_local ", "k"},

    {" typeid ", "k"},
    {" typename ", "k"},

    {" undef ", "k"},
    {" using ", "k"},

    {" virtual ", "k"},
    {" volatile ", "k"},

    {" __has_include ", "k"},
    {" __has_cpp_attribute ", "k"},

};


	{" JavaTokenConstants.FILE_END ", "k"},
	{" JavaTokenConstants.SEPARATOR_TOKEN ", "k"},
	{" PACKAGE ", "k"},
	{" IMPORT ", "k"},
	{" CLASS_BEGIN ", "k"},
	{" J_CLASS_END ", "k"},
	{" J_METHOD_BEGIN ", "k"},
	{" J_METHOD_END ", "k"},
	{" J_VARDEF ", "k"},
	{" J_SYNC_BEGIN ", "k"},
	{" J_DO_BEGIN ", "k"},
	{" J_DO_END ", "k"},


	{" abstract ", "k"},
	{" synchronized ", "k"},
	{" assert ", "k"},
	{" boolean ", "k"},
	{" break ", "k"},
	{" byte ", "k"},
	{" case ", "k"},	
	{" switch ", "k"},
	{" catch ", "k"},
	{" char ", "k"},
	{" class ", "k"},
	{" const ", "k"},	
	{" continue ", "k"},
	{" default ", "k"},
	{" do ", "k"},
	{" double ", "k"},
	{" else ", "k"},
	{" enum ", "k"},
	{" extends ", "k"},
	{" final ", "k"},
	{" finally ", "k"},
	{" float ", "k"},
	{" for ", "k"},
	{" goto ", "k"},
	{" if ", "k"},
	{" implements ", "k"},
	{" import ", "k"},
	{" instanceof ", "k"},
	{" int ", "k"},
	{" interface ", "k"},
	{" long ", "k"},
	{" native ", "k"},
	{" new ", "k"},
	{" package ", "k"},
	{" private ", "k"},
	{" protected ", "k"},
	{" public ", "k"},
	{" return ", "k"},
	{" short ", "k"},
	{" static ", "k"},
	{" strictfp ", "k"},
	{" super ", "k"},
	{" switch ", "k"},
	{" synchronized ", "k"},
	{" this ", "k"},
	{" throw ", "k"},
	{" throws ", "k"},
	{" transient ", "k"},
	{" try ", "k"},
	{" void ", "k"},
	{" volatile ", "k"},
	{" while ", "k"},
	{" true ", "k"},
	{" false ", "k"},
	{" null ", "k"},
	{" var ", "k"},
	{" varJDK ", "k"},
	{" _ ", "k"},
	{" const ", "k"},
	{" goto ", "k"},
	{" String ", "k"},

	{" @Override ", "k"},
	{" @Deprecated ", "k"},
	{" @SuppressWarnings ", "k"},
	{" @Retention ", "k"},
	{" @Documented ", "k"},
	{" @Target ", "k"},
	{" @Inherited ", "k"},
	{" @SafeVarargs ", "k"},
	{" @FunctionalInterface ", "k"},
	{" @Repeatable ", "k"},

	{" @UnderConstruction ", "k"},
	{" @interface ", "k"},
	{" @Entity ", "k"},
	{" @Table ", "k"},
	{" @Id ", "k"},
	{" @GeneratedValue ", "k"},
	{" @Column ", "k"},

	{" PriorityQueue ", "k"},
	{" Queue ", "k"},
	{" Deque ", "k"},
	{" Set ", "k"},
	{" HashSet ", "k"},
	{" LinkedHashSet ", "k"},
	{" SortedSet ", "k"},
	{" TreeSet ", "k"},
	{" List ", "k"},
	{" ArrayList ", "k"},
	{" LinkedList ", "k"},
	{" Vector ", "k"},
	{" Stack ", "k"},
	{"  ", "k"},
	{"  ", "k"},
	{"  ", "k"},
	{"  ", "k"},
	{"  ", "k"},
	{"  ", "k"},
	





