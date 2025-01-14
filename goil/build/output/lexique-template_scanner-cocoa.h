//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Lexique.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    R O U T I N E S                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    F U N C T I O N S                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

enum {template_scanner_1_,
  template_scanner_1_identifier,
  template_scanner_1_functionContent,
  template_scanner_1_literal_5F_double,
  template_scanner_1_signed_5F_literal_5F_integer_36__34_,
  template_scanner_1__2E_,
  template_scanner_1__2E__3D_,
  template_scanner_1__2E__2E__2E_,
  template_scanner_1_string,
  template_scanner_1_comment,
  template_scanner_1_after,
  template_scanner_1_before,
  template_scanner_1_between,
  template_scanner_1_block,
  template_scanner_1_by,
  template_scanner_1_call,
  template_scanner_1_default,
  template_scanner_1_display,
  template_scanner_1_do,
  template_scanner_1_else,
  template_scanner_1_elsif,
  template_scanner_1_emptylist,
  template_scanner_1_emptymap,
  template_scanner_1_end,
  template_scanner_1_error,
  template_scanner_1_exists,
  template_scanner_1_false,
  template_scanner_1_for,
  template_scanner_1_foreach,
  template_scanner_1_from,
  template_scanner_1_function,
  template_scanner_1_here,
  template_scanner_1_if,
  template_scanner_1_in,
  template_scanner_1_list,
  template_scanner_1_listof,
  template_scanner_1_let,
  template_scanner_1_loop,
  template_scanner_1_mapof,
  template_scanner_1_mod,
  template_scanner_1_no,
  template_scanner_1_not,
  template_scanner_1_or,
  template_scanner_1_prefixedby,
  template_scanner_1_print,
  template_scanner_1_println,
  template_scanner_1_repeat,
  template_scanner_1_return,
  template_scanner_1_sort,
  template_scanner_1_tab,
  template_scanner_1_template,
  template_scanner_1_then,
  template_scanner_1_to,
  template_scanner_1_true,
  template_scanner_1_typeof,
  template_scanner_1_yes,
  template_scanner_1_warning,
  template_scanner_1_while,
  template_scanner_1_write,
  template_scanner_1_executable,
  template_scanner_1__2A_,
  template_scanner_1__7C_,
  template_scanner_1__2C_,
  template_scanner_1__2B_,
  template_scanner_1__2D__2D_,
  template_scanner_1__3A__3A_,
  template_scanner_1__3E_,
  template_scanner_1__3B_,
  template_scanner_1__3A_,
  template_scanner_1__2D_,
  template_scanner_1__28_,
  template_scanner_1__29_,
  template_scanner_1__2D__3E_,
  template_scanner_1__3F_,
  template_scanner_1__3D__3D_,
  template_scanner_1__3F__3F_,
  template_scanner_1__21_,
  template_scanner_1__3A__3D_,
  template_scanner_1__2B__2B_,
  template_scanner_1__5B_,
  template_scanner_1__5D_,
  template_scanner_1__2B__3D_,
  template_scanner_1__3F__21_,
  template_scanner_1__21__3F_,
  template_scanner_1__2F_,
  template_scanner_1__21__3D_,
  template_scanner_1__3E__3D_,
  template_scanner_1__26_,
  template_scanner_1__3C__3D_,
  template_scanner_1__7B_,
  template_scanner_1__7D_,
  template_scanner_1__2B__3E_,
  template_scanner_1__2D__3D_,
  template_scanner_1__3C_,
  template_scanner_1__5E_,
  template_scanner_1__3E__3E_,
  template_scanner_1__7E_,
  template_scanner_1__3C__2D_,
  template_scanner_1__3C__3C_,
  template_scanner_1__40_
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@interface OC_Lexique_template_scanner : OC_Lexique {
//--- Attributes
  @private NSMutableString * mLexicalAttribute_a_string ;
  @private double mLexicalAttribute_floatValue ;
  @private NSMutableString * mLexicalAttribute_functionContent ;
  @private NSMutableString * mLexicalAttribute_identifierString ;
  @private SInt64 mLexicalAttribute_sint64value ;
  @private NSMutableString * mLexicalAttribute_tokenString ;

}

- (NSUInteger) terminalVocabularyCount ;

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;

- (void) parseLexicalTokenForLexicalColoring ;

- (NSUInteger) styleCount ;

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;

- (NSString *) indexingDirectory ;

- (NSArray *) indexingTitles ; // Array of NSString

- (BOOL) isTemplateLexique ;

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;

@end

//---------------------------------------------------------------------------------------------------------------------*
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

