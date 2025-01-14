//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-template_scanner-cocoa.h"
#import "PMDebug.h"

//---------------------------------------------------------------------------------------------------------------------*

@implementation OC_Lexique_template_scanner

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Template Replacements                                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static NSArray * kTemplateReplacementArray_template_5F_scanner ; // Of NSString 


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Template Delimiters                                                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static NSArray * kTemplateDefinitionArray_template_5F_scanner ;

//---------------------------------------------------------------------------------------------------------------------*

- (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mLexicalAttribute_a_string = [[NSMutableString alloc] init] ;
    mLexicalAttribute_floatValue = 0.0 ;
    mLexicalAttribute_functionContent = [[NSMutableString alloc] init] ;
    mLexicalAttribute_identifierString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_sint64value = 0 ;
    mLexicalAttribute_tokenString = [[NSMutableString alloc] init] ;
  }
  if (nil == kTemplateDefinitionArray_template_5F_scanner) {
    kTemplateDefinitionArray_template_5F_scanner = [NSArray arrayWithObjects:
      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@"%" endString:@"%" discardStartString:YES],
      nil
    ] ;
  }
  if (nil == kTemplateReplacementArray_template_5F_scanner) {

    kTemplateReplacementArray_template_5F_scanner = [NSArray arrayWithObjects:
      @"\\%",       @"\\n",       @"\\\\",       nil
    ] ;
  }
  return self ;
}

//---------------------------------------------------------------------------------------------------------------------*

- (void) FINALIZE_OR_DEALLOC {
  noteObjectDeallocation (self) ;
  macroSuperFinalize ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) indexingDirectory {
  return @"" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 I N D E X I N G    T I T L E S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSArray *) indexingTitles { // Array of NSString

  return [NSArray array] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Terminal Symbols as end of script in template mark                                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const BOOL kEndOfScriptInTemplateArray_template_5F_scanner [99] = {
  NO /* identifier */,
  NO /* functionContent */,
  NO /* literal_double */,
  NO /* signed_literal_integer64 */,
  NO /* . */,
  NO /* .= */,
  NO /* ... */,
  NO /* string */,
  NO /* comment */,
  NO /* after */,
  NO /* before */,
  NO /* between */,
  NO /* block */,
  NO /* by */,
  NO /* call */,
  NO /* default */,
  NO /* display */,
  NO /* do */,
  NO /* else */,
  NO /* elsif */,
  NO /* emptylist */,
  NO /* emptymap */,
  NO /* end */,
  NO /* error */,
  NO /* exists */,
  NO /* false */,
  NO /* for */,
  NO /* foreach */,
  NO /* from */,
  NO /* function */,
  NO /* here */,
  NO /* if */,
  NO /* in */,
  NO /* list */,
  NO /* listof */,
  NO /* let */,
  NO /* loop */,
  NO /* mapof */,
  NO /* mod */,
  NO /* no */,
  NO /* not */,
  NO /* or */,
  NO /* prefixedby */,
  NO /* print */,
  NO /* println */,
  NO /* repeat */,
  NO /* return */,
  NO /* sort */,
  NO /* tab */,
  NO /* template */,
  NO /* then */,
  NO /* to */,
  NO /* true */,
  NO /* typeof */,
  NO /* yes */,
  NO /* warning */,
  NO /* while */,
  NO /* write */,
  NO /* executable */,
  NO /* * */,
  NO /* | */,
  NO /* , */,
  NO /* + */,
  NO /* -- */,
  NO /* :: */,
  NO /* > */,
  NO /* ; */,
  NO /* : */,
  NO /* - */,
  NO /* ( */,
  NO /* ) */,
  NO /* -> */,
  NO /* ? */,
  NO /* == */,
  NO /* ?? */,
  NO /* ! */,
  NO /* := */,
  NO /* ++ */,
  NO /* [ */,
  NO /* ] */,
  NO /* += */,
  NO /* ?! */,
  NO /* !? */,
  NO /* / */,
  NO /* != */,
  NO /* >= */,
  NO /* & */,
  NO /* <= */,
  NO /* { */,
  NO /* } */,
  NO /* +> */,
  NO /* -= */,
  NO /* < */,
  NO /* ^ */,
  NO /* >> */,
  NO /* ~ */,
  NO /* <- */,
  NO /* << */,
  NO /* @ */
} ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Key words table 'goilTemplateKeyWordList'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const C_cocoa_lexique_table_entry ktable_for_template_5F_scanner_goilTemplateKeyWordList [50] = {
  {"by", template_scanner_1_by},
  {"do", template_scanner_1_do},
  {"if", template_scanner_1_if},
  {"in", template_scanner_1_in},
  {"no", template_scanner_1_no},
  {"or", template_scanner_1_or},
  {"to", template_scanner_1_to},
  {"end", template_scanner_1_end},
  {"for", template_scanner_1_for},
  {"let", template_scanner_1_let},
  {"mod", template_scanner_1_mod},
  {"not", template_scanner_1_not},
  {"tab", template_scanner_1_tab},
  {"yes", template_scanner_1_yes},
  {"call", template_scanner_1_call},
  {"else", template_scanner_1_else},
  {"from", template_scanner_1_from},
  {"here", template_scanner_1_here},
  {"list", template_scanner_1_list},
  {"loop", template_scanner_1_loop},
  {"sort", template_scanner_1_sort},
  {"then", template_scanner_1_then},
  {"true", template_scanner_1_true},
  {"after", template_scanner_1_after},
  {"block", template_scanner_1_block},
  {"elsif", template_scanner_1_elsif},
  {"error", template_scanner_1_error},
  {"false", template_scanner_1_false},
  {"mapof", template_scanner_1_mapof},
  {"print", template_scanner_1_print},
  {"while", template_scanner_1_while},
  {"write", template_scanner_1_write},
  {"before", template_scanner_1_before},
  {"exists", template_scanner_1_exists},
  {"listof", template_scanner_1_listof},
  {"repeat", template_scanner_1_repeat},
  {"return", template_scanner_1_return},
  {"typeof", template_scanner_1_typeof},
  {"between", template_scanner_1_between},
  {"default", template_scanner_1_default},
  {"display", template_scanner_1_display},
  {"foreach", template_scanner_1_foreach},
  {"println", template_scanner_1_println},
  {"warning", template_scanner_1_warning},
  {"emptymap", template_scanner_1_emptymap},
  {"function", template_scanner_1_function},
  {"template", template_scanner_1_template},
  {"emptylist", template_scanner_1_emptylist},
  {"executable", template_scanner_1_executable},
  {"prefixedby", template_scanner_1_prefixedby}
} ;

static NSInteger search_into_template_5F_scanner_goilTemplateKeyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_template_5F_scanner_goilTemplateKeyWordList, 50) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               P A R S E    L E X I C A L    T O K E N                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (void) parseLexicalTokenForLexicalColoring {
  mLoop = YES ;
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    mTokenStartLocation = mCurrentLocation ;
    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_template_5F_scanner objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {
      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_template_5F_scanner objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;
      if (foundEndDelimitor) {
        mMatchedTemplateDelimiterIndex = -1 ;
      }
    }
    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\0')) {
      
      [self searchForReplacementPattern:kTemplateReplacementArray_template_5F_scanner] ;
      
      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_template_5F_scanner] ;
      if (mMatchedTemplateDelimiterIndex < 0) {
        [self advance] ;
        mTokenCode = -2 ;
      }
    }
    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\0') && scanningOk) {
      [mLexicalAttribute_a_string setString:@""] ;
      mLexicalAttribute_floatValue = 0.0 ;
      [mLexicalAttribute_functionContent setString:@""] ;
      [mLexicalAttribute_identifierString setString:@""] ;
      mLexicalAttribute_sint64value = 0 ;
      [mLexicalAttribute_tokenString setString:@""] ;
      mTokenStartLocation = mCurrentLocation ;
      if (scanningOk && ([self testForInputChar:123])) {
        do {
          if (scanningOk && ([self testForInputFromChar:1 toChar:124] || [self testForInputFromChar:126 toChar:65533])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_functionContent, mPreviousChar) ;
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        if (scanningOk && ([self testForInputChar:125])) {
          mTokenCode = template_scanner_1_functionContent ;
        }else{
          scanningOk = NO ;
        }
      }else if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90])) {
        do {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_identifierString, mPreviousChar) ;
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        if (mTokenCode == 0) {
          mTokenCode = search_into_template_5F_scanner_goilTemplateKeyWordList (mLexicalAttribute_identifierString) ;
        }
        if (mTokenCode == 0) {
          mTokenCode = template_scanner_1_identifier ;
        }
      }else if (scanningOk && ([self testForInputChar:45])) {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 45) ;
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          do {
            if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
              scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
            }else if (scanningOk && ([self testForInputChar:95])) {
            }else{
              mLoop = NO ;
            }
          }while (mLoop && scanningOk) ;
          mLoop = YES ;
          if (scanningOk && ([self testForInputChar:46])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 46) ;
            do {
              if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
                scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
              }else if (scanningOk && ([self testForInputChar:95])) {
              }else{
                mLoop = NO ;
              }
            }while (mLoop && scanningOk) ;
            mLoop = YES ;
            scanner_cocoa_routine_convertStringToDouble (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_floatValue) ;
            mTokenCode = template_scanner_1_literal_5F_double ;
          }else{
            scanner_cocoa_routine_convertDecimalStringIntoSInt64 (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_sint64value) ;
            mTokenCode = template_scanner_1_signed_5F_literal_5F_integer_36__34_ ;
          }
        }else{
          mTokenCode = template_scanner_1__2D_ ;
        }
      }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
        do {
          if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          }else if (scanningOk && ([self testForInputChar:95])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        if (scanningOk && ([self testForInputChar:46])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 46) ;
          do {
            if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
              scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
            }else if (scanningOk && ([self testForInputChar:95])) {
            }else{
              mLoop = NO ;
            }
          }while (mLoop && scanningOk) ;
          mLoop = YES ;
          scanner_cocoa_routine_convertStringToDouble (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_floatValue) ;
          mTokenCode = template_scanner_1_literal_5F_double ;
        }else{
          scanner_cocoa_routine_convertDecimalStringIntoSInt64 (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_sint64value) ;
          mTokenCode = template_scanner_1_signed_5F_literal_5F_integer_36__34_ ;
        }
      }else if (scanningOk && ([self testForInputChar:46])) {
        if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 48) ;
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, 46) ;
          scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
          do {
            if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
              scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
            }else if (scanningOk && ([self testForInputChar:95])) {
            }else{
              mLoop = NO ;
            }
          }while (mLoop && scanningOk) ;
          mLoop = YES ;
          scanner_cocoa_routine_convertStringToDouble (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_floatValue) ;
          mTokenCode = template_scanner_1_literal_5F_double ;
        }else{
          if (scanningOk && ([self testForInputString:@".." advance:YES])) {
            mTokenCode = template_scanner_1__2E__2E__2E_ ;
          }else if (scanningOk && ([self testForInputString:@"=" advance:YES])) {
            mTokenCode = template_scanner_1__2E__3D_ ;
          }else{
            mTokenCode = template_scanner_1__2E_ ;
          }
        }
      }else if (scanningOk && [self testForInputString:@"\?\?" advance:YES]) {
        mTokenCode = template_scanner_1__3F__3F_ ;
      }else if (scanningOk && [self testForInputString:@"\?!" advance:YES]) {
        mTokenCode = template_scanner_1__3F__21_ ;
      }else if (scanningOk && [self testForInputString:@">>" advance:YES]) {
        mTokenCode = template_scanner_1__3E__3E_ ;
      }else if (scanningOk && [self testForInputString:@">=" advance:YES]) {
        mTokenCode = template_scanner_1__3E__3D_ ;
      }else if (scanningOk && [self testForInputString:@"==" advance:YES]) {
        mTokenCode = template_scanner_1__3D__3D_ ;
      }else if (scanningOk && [self testForInputString:@"<=" advance:YES]) {
        mTokenCode = template_scanner_1__3C__3D_ ;
      }else if (scanningOk && [self testForInputString:@"<<" advance:YES]) {
        mTokenCode = template_scanner_1__3C__3C_ ;
      }else if (scanningOk && [self testForInputString:@"<-" advance:YES]) {
        mTokenCode = template_scanner_1__3C__2D_ ;
      }else if (scanningOk && [self testForInputString:@":=" advance:YES]) {
        mTokenCode = template_scanner_1__3A__3D_ ;
      }else if (scanningOk && [self testForInputString:@"::" advance:YES]) {
        mTokenCode = template_scanner_1__3A__3A_ ;
      }else if (scanningOk && [self testForInputString:@"->" advance:YES]) {
        mTokenCode = template_scanner_1__2D__3E_ ;
      }else if (scanningOk && [self testForInputString:@"-=" advance:YES]) {
        mTokenCode = template_scanner_1__2D__3D_ ;
      }else if (scanningOk && [self testForInputString:@"--" advance:YES]) {
        mTokenCode = template_scanner_1__2D__2D_ ;
      }else if (scanningOk && [self testForInputString:@"+>" advance:YES]) {
        mTokenCode = template_scanner_1__2B__3E_ ;
      }else if (scanningOk && [self testForInputString:@"+=" advance:YES]) {
        mTokenCode = template_scanner_1__2B__3D_ ;
      }else if (scanningOk && [self testForInputString:@"++" advance:YES]) {
        mTokenCode = template_scanner_1__2B__2B_ ;
      }else if (scanningOk && [self testForInputString:@"!\?" advance:YES]) {
        mTokenCode = template_scanner_1__21__3F_ ;
      }else if (scanningOk && [self testForInputString:@"!=" advance:YES]) {
        mTokenCode = template_scanner_1__21__3D_ ;
      }else if (scanningOk && [self testForInputString:@"~" advance:YES]) {
        mTokenCode = template_scanner_1__7E_ ;
      }else if (scanningOk && [self testForInputString:@"}" advance:YES]) {
        mTokenCode = template_scanner_1__7D_ ;
      }else if (scanningOk && [self testForInputString:@"|" advance:YES]) {
        mTokenCode = template_scanner_1__7C_ ;
      }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
        mTokenCode = template_scanner_1__7B_ ;
      }else if (scanningOk && [self testForInputString:@"^" advance:YES]) {
        mTokenCode = template_scanner_1__5E_ ;
      }else if (scanningOk && [self testForInputString:@"]" advance:YES]) {
        mTokenCode = template_scanner_1__5D_ ;
      }else if (scanningOk && [self testForInputString:@"[" advance:YES]) {
        mTokenCode = template_scanner_1__5B_ ;
      }else if (scanningOk && [self testForInputString:@"@" advance:YES]) {
        mTokenCode = template_scanner_1__40_ ;
      }else if (scanningOk && [self testForInputString:@"\?" advance:YES]) {
        mTokenCode = template_scanner_1__3F_ ;
      }else if (scanningOk && [self testForInputString:@">" advance:YES]) {
        mTokenCode = template_scanner_1__3E_ ;
      }else if (scanningOk && [self testForInputString:@"<" advance:YES]) {
        mTokenCode = template_scanner_1__3C_ ;
      }else if (scanningOk && [self testForInputString:@";" advance:YES]) {
        mTokenCode = template_scanner_1__3B_ ;
      }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
        mTokenCode = template_scanner_1__3A_ ;
      }else if (scanningOk && [self testForInputString:@"/" advance:YES]) {
        mTokenCode = template_scanner_1__2F_ ;
      }else if (scanningOk && [self testForInputString:@"-" advance:YES]) {
        mTokenCode = template_scanner_1__2D_ ;
      }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
        mTokenCode = template_scanner_1__2C_ ;
      }else if (scanningOk && [self testForInputString:@"+" advance:YES]) {
        mTokenCode = template_scanner_1__2B_ ;
      }else if (scanningOk && [self testForInputString:@"*" advance:YES]) {
        mTokenCode = template_scanner_1__2A_ ;
      }else if (scanningOk && [self testForInputString:@")" advance:YES]) {
        mTokenCode = template_scanner_1__29_ ;
      }else if (scanningOk && [self testForInputString:@"(" advance:YES]) {
        mTokenCode = template_scanner_1__28_ ;
      }else if (scanningOk && [self testForInputString:@"&" advance:YES]) {
        mTokenCode = template_scanner_1__26_ ;
      }else if (scanningOk && [self testForInputString:@"!" advance:YES]) {
        mTokenCode = template_scanner_1__21_ ;
      }else if (scanningOk && ([self testForInputChar:34])) {
        do {
          if (scanningOk && ([self testForInputFromChar:32 toChar:33] || [self testForInputFromChar:35 toChar:65533])) {
            scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_a_string, mPreviousChar) ;
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        if (scanningOk && ([self testForInputChar:34])) {
          mTokenCode = template_scanner_1_string ;
        }else{
          scanningOk = NO ;
        }
      }else if (scanningOk && ([self testForInputChar:35])) {
        do {
          if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
          }else{
            mLoop = NO ;
          }
        }while (mLoop && scanningOk) ;
        mLoop = YES ;
        mTokenCode = template_scanner_1_comment ;
      }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
      }else if ([self testForInputChar:'\0']) { // End of source text ? 
        mTokenCode = template_scanner_1_ ; // Empty string code
      }else{ // Unknown input character
        scanningOk = NO ;
      }
    }
    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_template_5F_scanner [mTokenCode - 1]) {
      mMatchedTemplateDelimiterIndex = -1 ;
    }
  //--- Error ?
    if (! scanningOk) {
      mTokenCode = -1 ;
      [self advance] ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   T E R M I N A L    C O U N T                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) terminalVocabularyCount {
  return 99 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S T Y L E   C O U N T                                                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) styleCount {
  return 8 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                I S    T E M P L A T E    L E X I Q U E                                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (BOOL) isTemplateLexique {
  return YES ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {
  static const NSUInteger kTerminalSymbolStyles [100] = {0,
    0 /* template_scanner_1_identifier */,
    0 /* template_scanner_1_functionContent */,
    5 /* template_scanner_1_literal_5F_double */,
    4 /* template_scanner_1_signed_5F_literal_5F_integer_36__34_ */,
    2 /* template_scanner_1__2E_ */,
    2 /* template_scanner_1__2E__3D_ */,
    2 /* template_scanner_1__2E__2E__2E_ */,
    6 /* template_scanner_1_string */,
    7 /* template_scanner_1_comment */,
    1 /* template_scanner_1_after */,
    1 /* template_scanner_1_before */,
    1 /* template_scanner_1_between */,
    1 /* template_scanner_1_block */,
    1 /* template_scanner_1_by */,
    1 /* template_scanner_1_call */,
    1 /* template_scanner_1_default */,
    1 /* template_scanner_1_display */,
    1 /* template_scanner_1_do */,
    1 /* template_scanner_1_else */,
    1 /* template_scanner_1_elsif */,
    1 /* template_scanner_1_emptylist */,
    1 /* template_scanner_1_emptymap */,
    1 /* template_scanner_1_end */,
    1 /* template_scanner_1_error */,
    1 /* template_scanner_1_exists */,
    1 /* template_scanner_1_false */,
    1 /* template_scanner_1_for */,
    1 /* template_scanner_1_foreach */,
    1 /* template_scanner_1_from */,
    1 /* template_scanner_1_function */,
    1 /* template_scanner_1_here */,
    1 /* template_scanner_1_if */,
    1 /* template_scanner_1_in */,
    1 /* template_scanner_1_list */,
    1 /* template_scanner_1_listof */,
    1 /* template_scanner_1_let */,
    1 /* template_scanner_1_loop */,
    1 /* template_scanner_1_mapof */,
    1 /* template_scanner_1_mod */,
    1 /* template_scanner_1_no */,
    1 /* template_scanner_1_not */,
    1 /* template_scanner_1_or */,
    1 /* template_scanner_1_prefixedby */,
    1 /* template_scanner_1_print */,
    1 /* template_scanner_1_println */,
    1 /* template_scanner_1_repeat */,
    1 /* template_scanner_1_return */,
    1 /* template_scanner_1_sort */,
    1 /* template_scanner_1_tab */,
    1 /* template_scanner_1_template */,
    1 /* template_scanner_1_then */,
    1 /* template_scanner_1_to */,
    1 /* template_scanner_1_true */,
    1 /* template_scanner_1_typeof */,
    1 /* template_scanner_1_yes */,
    1 /* template_scanner_1_warning */,
    1 /* template_scanner_1_while */,
    1 /* template_scanner_1_write */,
    1 /* template_scanner_1_executable */,
    2 /* template_scanner_1__2A_ */,
    2 /* template_scanner_1__7C_ */,
    2 /* template_scanner_1__2C_ */,
    2 /* template_scanner_1__2B_ */,
    2 /* template_scanner_1__2D__2D_ */,
    2 /* template_scanner_1__3A__3A_ */,
    2 /* template_scanner_1__3E_ */,
    2 /* template_scanner_1__3B_ */,
    2 /* template_scanner_1__3A_ */,
    2 /* template_scanner_1__2D_ */,
    2 /* template_scanner_1__28_ */,
    2 /* template_scanner_1__29_ */,
    2 /* template_scanner_1__2D__3E_ */,
    2 /* template_scanner_1__3F_ */,
    2 /* template_scanner_1__3D__3D_ */,
    2 /* template_scanner_1__3F__3F_ */,
    2 /* template_scanner_1__21_ */,
    2 /* template_scanner_1__3A__3D_ */,
    2 /* template_scanner_1__2B__2B_ */,
    2 /* template_scanner_1__5B_ */,
    2 /* template_scanner_1__5D_ */,
    2 /* template_scanner_1__2B__3D_ */,
    2 /* template_scanner_1__3F__21_ */,
    2 /* template_scanner_1__21__3F_ */,
    2 /* template_scanner_1__2F_ */,
    2 /* template_scanner_1__21__3D_ */,
    2 /* template_scanner_1__3E__3D_ */,
    2 /* template_scanner_1__26_ */,
    2 /* template_scanner_1__3C__3D_ */,
    2 /* template_scanner_1__7B_ */,
    2 /* template_scanner_1__7D_ */,
    2 /* template_scanner_1__2B__3E_ */,
    2 /* template_scanner_1__2D__3D_ */,
    2 /* template_scanner_1__3C_ */,
    2 /* template_scanner_1__5E_ */,
    2 /* template_scanner_1__3E__3E_ */,
    2 /* template_scanner_1__7E_ */,
    2 /* template_scanner_1__3C__2D_ */,
    2 /* template_scanner_1__3C__3C_ */,
    2 /* template_scanner_1__40_ */
  } ;
  return kTerminalSymbolStyles [inTerminal] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [100] = {NO,
    YES /* template_scanner_1_identifier */,
    YES /* template_scanner_1_functionContent */,
    YES /* template_scanner_1_literal_5F_double */,
    YES /* template_scanner_1_signed_5F_literal_5F_integer_36__34_ */,
    YES /* template_scanner_1__2E_ */,
    YES /* template_scanner_1__2E__3D_ */,
    YES /* template_scanner_1__2E__2E__2E_ */,
    YES /* template_scanner_1_string */,
    YES /* template_scanner_1_comment */,
    YES /* template_scanner_1_after */,
    YES /* template_scanner_1_before */,
    YES /* template_scanner_1_between */,
    YES /* template_scanner_1_block */,
    YES /* template_scanner_1_by */,
    YES /* template_scanner_1_call */,
    YES /* template_scanner_1_default */,
    YES /* template_scanner_1_display */,
    YES /* template_scanner_1_do */,
    YES /* template_scanner_1_else */,
    YES /* template_scanner_1_elsif */,
    YES /* template_scanner_1_emptylist */,
    YES /* template_scanner_1_emptymap */,
    YES /* template_scanner_1_end */,
    YES /* template_scanner_1_error */,
    YES /* template_scanner_1_exists */,
    YES /* template_scanner_1_false */,
    YES /* template_scanner_1_for */,
    YES /* template_scanner_1_foreach */,
    YES /* template_scanner_1_from */,
    YES /* template_scanner_1_function */,
    YES /* template_scanner_1_here */,
    YES /* template_scanner_1_if */,
    YES /* template_scanner_1_in */,
    YES /* template_scanner_1_list */,
    YES /* template_scanner_1_listof */,
    YES /* template_scanner_1_let */,
    YES /* template_scanner_1_loop */,
    YES /* template_scanner_1_mapof */,
    YES /* template_scanner_1_mod */,
    YES /* template_scanner_1_no */,
    YES /* template_scanner_1_not */,
    YES /* template_scanner_1_or */,
    YES /* template_scanner_1_prefixedby */,
    YES /* template_scanner_1_print */,
    YES /* template_scanner_1_println */,
    YES /* template_scanner_1_repeat */,
    YES /* template_scanner_1_return */,
    YES /* template_scanner_1_sort */,
    YES /* template_scanner_1_tab */,
    YES /* template_scanner_1_template */,
    YES /* template_scanner_1_then */,
    YES /* template_scanner_1_to */,
    YES /* template_scanner_1_true */,
    YES /* template_scanner_1_typeof */,
    YES /* template_scanner_1_yes */,
    YES /* template_scanner_1_warning */,
    YES /* template_scanner_1_while */,
    YES /* template_scanner_1_write */,
    YES /* template_scanner_1_executable */,
    YES /* template_scanner_1__2A_ */,
    YES /* template_scanner_1__7C_ */,
    YES /* template_scanner_1__2C_ */,
    YES /* template_scanner_1__2B_ */,
    YES /* template_scanner_1__2D__2D_ */,
    YES /* template_scanner_1__3A__3A_ */,
    YES /* template_scanner_1__3E_ */,
    YES /* template_scanner_1__3B_ */,
    YES /* template_scanner_1__3A_ */,
    YES /* template_scanner_1__2D_ */,
    YES /* template_scanner_1__28_ */,
    YES /* template_scanner_1__29_ */,
    YES /* template_scanner_1__2D__3E_ */,
    YES /* template_scanner_1__3F_ */,
    YES /* template_scanner_1__3D__3D_ */,
    YES /* template_scanner_1__3F__3F_ */,
    YES /* template_scanner_1__21_ */,
    YES /* template_scanner_1__3A__3D_ */,
    YES /* template_scanner_1__2B__2B_ */,
    YES /* template_scanner_1__5B_ */,
    YES /* template_scanner_1__5D_ */,
    YES /* template_scanner_1__2B__3D_ */,
    YES /* template_scanner_1__3F__21_ */,
    YES /* template_scanner_1__21__3F_ */,
    YES /* template_scanner_1__2F_ */,
    YES /* template_scanner_1__21__3D_ */,
    YES /* template_scanner_1__3E__3D_ */,
    YES /* template_scanner_1__26_ */,
    YES /* template_scanner_1__3C__3D_ */,
    YES /* template_scanner_1__7B_ */,
    YES /* template_scanner_1__7D_ */,
    YES /* template_scanner_1__2B__3E_ */,
    YES /* template_scanner_1__2D__3D_ */,
    YES /* template_scanner_1__3C_ */,
    YES /* template_scanner_1__5E_ */,
    YES /* template_scanner_1__3E__3E_ */,
    YES /* template_scanner_1__7E_ */,
    YES /* template_scanner_1__3C__2D_ */,
    YES /* template_scanner_1__3C__3C_ */,
    YES /* template_scanner_1__40_ */
  } ;
  return kTerminalAtomicSelection [inTokenIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             S T Y L E   N A M E    F O R    I N D E X                                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 8)) {
    NSString * kStyleArray [8] = {
      @"Default Style",
      @"Keywords",
      @"Delimiters",
      @"Non Terminal Symbols",
      @"Integer Constants",
      @"Floating Point Constants",
      @"String literals",
      @"Comments"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         S T Y L E   I D E N T I F I E R    F O R    I N D E X                                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 8)) {
    NSString * kStyleArray [8] = {
      @"template_scanner",
      @"template_scanner-keywordsStyle",
      @"template_scanner-delimitersStyle",
      @"template_scanner-nonTerminalStyle",
      @"template_scanner-integerStyle",
      @"template_scanner-floatCsts",
      @"template_scanner-stringStyle",
      @"template_scanner-commentStyle"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         L E X I Q U E   I D E N T I F I E R                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

- (NSString *) lexiqueIdentifier {
  return @"template_scanner" ;
}

//---------------------------------------------------------------------------------------------------------------------*

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


