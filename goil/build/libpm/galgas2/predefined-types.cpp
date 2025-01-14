//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"
#include "galgas2/cCollectionElement.h"
#include "galgas2/cSortedListElement.h"
#include "galgas2/capSortedListElement.h"
#include "galgas2/C_Compiler.h"

//---------------------------------------------------------------------------------------------------------------------*

cMapElement::cMapElement (const GALGAS_lstring & inLKey
                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mAttribute_lkey (inLKey) {
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @timer type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_timer ("timer",
                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_timer::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timer ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_timer::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_timer (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_timer GALGAS_timer::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_timer result ;
  const GALGAS_timer * p = (const GALGAS_timer *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_timer *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("timer", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @application type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_application ("application",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_application::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_application ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_application::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_application (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_application GALGAS_application::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_application result ;
  const GALGAS_application * p = (const GALGAS_application *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_application *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("application", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @bigint type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bigint ("bigint",
                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bigint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigint ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bigint::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bigint (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_bigint::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_bigint result ;
  const GALGAS_bigint * p = (const GALGAS_bigint *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bigint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bigint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @filewrapper type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapper ("filewrapper",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapper::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapper ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapper::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapper (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapper GALGAS_filewrapper::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapper result ;
  const GALGAS_filewrapper * p = (const GALGAS_filewrapper *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapper *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapper", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @object type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_object ("object",
                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_object::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_object ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_object::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_object (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object GALGAS_object::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_object result ;
  const GALGAS_object * p = (const GALGAS_object *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_object *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("object", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @bool type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bool ("bool",
                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bool::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bool ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bool::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bool (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_bool::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  const GALGAS_bool * p = (const GALGAS_bool *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bool *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bool", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @uint type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint ("uint",
                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uint::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_uint result ;
  const GALGAS_uint * p = (const GALGAS_uint *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @uint64 type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_ ("uint64",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34_::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_ (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_uint_36__34_::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_ result ;
  const GALGAS_uint_36__34_ * p = (const GALGAS_uint_36__34_ *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @sint type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint ("sint",
                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint GALGAS_sint::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_sint result ;
  const GALGAS_sint * p = (const GALGAS_sint *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @sint64 type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34_ ("sint64",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_36__34_::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_ (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_sint_36__34_::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_ result ;
  const GALGAS_sint_36__34_ * p = (const GALGAS_sint_36__34_ *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sint_36__34_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @char type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_char ("char",
                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_char::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_char ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_char::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_char (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_char::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_char result ;
  const GALGAS_char * p = (const GALGAS_char *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_char *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("char", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @double type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_double ("double",
                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_double::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_double ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_double::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_double (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double GALGAS_double::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_double result ;
  const GALGAS_double * p = (const GALGAS_double *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_double *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("double", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @string type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_string ("string",
                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_string::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_string ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_string::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_string (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_string::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  const GALGAS_string * p = (const GALGAS_string *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_string *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("string", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @location type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_location ("location",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_location::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_location ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_location::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_location (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_location::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_location result ;
  const GALGAS_location * p = (const GALGAS_location *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_location *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("location", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @stringset type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringset ("stringset",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringset::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringset ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringset::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringset (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_stringset::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_stringset result ;
  const GALGAS_stringset * p = (const GALGAS_stringset *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringset *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringset", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @function type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_function ("function",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_function::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_function ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_function::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_function (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_function GALGAS_function::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_function result ;
  const GALGAS_function * p = (const GALGAS_function *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_function *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("function", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @type type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_type ("type",
                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_type::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_type ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_type::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_type (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_type::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_type result ;
  const GALGAS_type * p = (const GALGAS_type *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_type *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("type", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @binaryset type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binaryset ("binaryset",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_binaryset::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryset ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_binaryset::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binaryset (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryset GALGAS_binaryset::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_binaryset result ;
  const GALGAS_binaryset * p = (const GALGAS_binaryset *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binaryset *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryset", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @data type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_data ("data",
                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_data::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_data ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_data::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_data (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_data GALGAS_data::extractObject (const GALGAS_object & inObject,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GALGAS_data result ;
  const GALGAS_data * p = (const GALGAS_data *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_data *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("data", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @luintlist type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_luintlist ("luintlist",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_luintlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_luintlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_luintlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_luintlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_luintlist result ;
  const GALGAS_luintlist * p = (const GALGAS_luintlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_luintlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("luintlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@luintlist' list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_luintlist : public cCollectionElement {
  public : GALGAS_luintlist_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_luintlist (const GALGAS_luint & in_mValue
                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_luintlist::cCollectionElement_luintlist (const GALGAS_luint & in_mValue
                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_luintlist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_luintlist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_luintlist (mObject.mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_luintlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_luintlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_luintlist * operand = (cCollectionElement_luintlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_luintlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist::GALGAS_luintlist (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist::GALGAS_luintlist (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_luintlist result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::constructor_listWithValue (const GALGAS_luint & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_luintlist result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_luintlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GALGAS_luint & in_mValue
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_luintlist * p = NULL ;
  macroMyNew (p, cCollectionElement_luintlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::addAssign_operation (const GALGAS_luint & inOperand0
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_luintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::modifier_insertAtIndex (const GALGAS_luint inOperand0,
                                               const GALGAS_uint inInsertionIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_luintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::modifier_removeAtIndex (GALGAS_luint & outOperand0,
                                               const GALGAS_uint inRemoveIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_luintlist) ;
      outOperand0 = p->mObject.mAttribute_mValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::modifier_popFirst (GALGAS_luint & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_luintlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::modifier_popLast (GALGAS_luint & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_luintlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::method_first (GALGAS_luint & outOperand0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_luintlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::method_last (GALGAS_luint & outOperand0,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_luintlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::operator_concat (const GALGAS_luintlist & inOperand
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_luintlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::add_operation (const GALGAS_luintlist & inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_luintlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_luintlist result = GALGAS_luintlist::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist GALGAS_luintlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_luintlist result = GALGAS_luintlist::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::dotAssign_operation (const GALGAS_luintlist inOperand
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist::modifier_setMValueAtIndex (GALGAS_luint inOperand,
                                                  GALGAS_uint inIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_luintlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mValue = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_luintlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_luintlist * p = (cCollectionElement_luintlist *) attributes.ptr () ;
  GALGAS_luint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_luintlist) ;
    result = p->mObject.mAttribute_mValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_luintlist::cEnumerator_luintlist (const GALGAS_luintlist & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element cEnumerator_luintlist::current (LOCATION_ARGS) const {
  const cCollectionElement_luintlist * p = (const cCollectionElement_luintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_luintlist) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cEnumerator_luintlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_luintlist * p = (const cCollectionElement_luintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_luintlist) ;
  return p->mObject.mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @uintlist type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uintlist ("uintlist",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uintlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uintlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uintlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_uintlist result ;
  const GALGAS_uintlist * p = (const GALGAS_uintlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uintlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@uintlist' list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_uintlist : public cCollectionElement {
  public : GALGAS_uintlist_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_uintlist (const GALGAS_uint & in_mValue
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_uintlist::cCollectionElement_uintlist (const GALGAS_uint & in_mValue
                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_uintlist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_uintlist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_uintlist (mObject.mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_uintlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_uintlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_uintlist * operand = (cCollectionElement_uintlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_uintlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist::GALGAS_uintlist (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist::GALGAS_uintlist (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_uintlist result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::constructor_listWithValue (const GALGAS_uint & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uintlist result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_uintlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GALGAS_uint & in_mValue
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_uintlist * p = NULL ;
  macroMyNew (p, cCollectionElement_uintlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::addAssign_operation (const GALGAS_uint & inOperand0
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_uintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::modifier_insertAtIndex (const GALGAS_uint inOperand0,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_uintlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::modifier_removeAtIndex (GALGAS_uint & outOperand0,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_uintlist) ;
      outOperand0 = p->mObject.mAttribute_mValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::modifier_popFirst (GALGAS_uint & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uintlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::modifier_popLast (GALGAS_uint & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uintlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::method_first (GALGAS_uint & outOperand0,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uintlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::method_last (GALGAS_uint & outOperand0,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uintlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::operator_concat (const GALGAS_uintlist & inOperand
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uintlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::add_operation (const GALGAS_uintlist & inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uintlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_uintlist result = GALGAS_uintlist::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist GALGAS_uintlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_uintlist result = GALGAS_uintlist::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::dotAssign_operation (const GALGAS_uintlist inOperand
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist::modifier_setMValueAtIndex (GALGAS_uint inOperand,
                                                 GALGAS_uint inIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_uintlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mValue = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uintlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_uintlist * p = (cCollectionElement_uintlist *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_uintlist) ;
    result = p->mObject.mAttribute_mValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_uintlist::cEnumerator_uintlist (const GALGAS_uintlist & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element cEnumerator_uintlist::current (LOCATION_ARGS) const {
  const cCollectionElement_uintlist * p = (const cCollectionElement_uintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uintlist) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_uintlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_uintlist * p = (const cCollectionElement_uintlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uintlist) ;
  return p->mObject.mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @uint64list type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_list ("uint64list",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34_list::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_list ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34_list::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_list (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_list result ;
  const GALGAS_uint_36__34_list * p = (const GALGAS_uint_36__34_list *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_list *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64list", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@uint_36__34_list' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_uint_36__34_list : public cCollectionElement {
  public : GALGAS_uint_36__34_list_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_uint_36__34_list (const GALGAS_uint_36__34_ & in_mValue
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_uint_36__34_list::cCollectionElement_uint_36__34_list (const GALGAS_uint_36__34_ & in_mValue
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_uint_36__34_list::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_uint_36__34_list::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_uint_36__34_list (mObject.mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_uint_36__34_list::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_uint_36__34_list::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_uint_36__34_list * operand = (cCollectionElement_uint_36__34_list *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_uint_36__34_list) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list::GALGAS_uint_36__34_list (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list::GALGAS_uint_36__34_list (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_uint_36__34_list result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::constructor_listWithValue (const GALGAS_uint_36__34_ & inOperand0
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_list result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_uint_36__34_list::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_uint_36__34_ & in_mValue
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_uint_36__34_list * p = NULL ;
  macroMyNew (p, cCollectionElement_uint_36__34_list (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::addAssign_operation (const GALGAS_uint_36__34_ & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_uint_36__34_list (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::modifier_insertAtIndex (const GALGAS_uint_36__34_ inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_uint_36__34_list (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::modifier_removeAtIndex (GALGAS_uint_36__34_ & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
      outOperand0 = p->mObject.mAttribute_mValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::modifier_popFirst (GALGAS_uint_36__34_ & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::modifier_popLast (GALGAS_uint_36__34_ & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::method_first (GALGAS_uint_36__34_ & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::method_last (GALGAS_uint_36__34_ & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::operator_concat (const GALGAS_uint_36__34_list & inOperand
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint_36__34_list result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::add_operation (const GALGAS_uint_36__34_list & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint_36__34_list result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_list result = GALGAS_uint_36__34_list::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list GALGAS_uint_36__34_list::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_list result = GALGAS_uint_36__34_list::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::dotAssign_operation (const GALGAS_uint_36__34_list inOperand
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list::modifier_setMValueAtIndex (GALGAS_uint_36__34_ inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mValue = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_uint_36__34_list::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_uint_36__34_list * p = (cCollectionElement_uint_36__34_list *) attributes.ptr () ;
  GALGAS_uint_36__34_ result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
    result = p->mObject.mAttribute_mValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_uint_36__34_list::cEnumerator_uint_36__34_list (const GALGAS_uint_36__34_list & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element cEnumerator_uint_36__34_list::current (LOCATION_ARGS) const {
  const cCollectionElement_uint_36__34_list * p = (const cCollectionElement_uint_36__34_list *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ cEnumerator_uint_36__34_list::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_uint_36__34_list * p = (const cCollectionElement_uint_36__34_list *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_uint_36__34_list) ;
  return p->mObject.mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @functionlist type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionlist ("functionlist",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_functionlist result ;
  const GALGAS_functionlist * p = (const GALGAS_functionlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@functionlist' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_functionlist : public cCollectionElement {
  public : GALGAS_functionlist_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_functionlist (const GALGAS_function & in_mValue
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_functionlist::cCollectionElement_functionlist (const GALGAS_function & in_mValue
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_functionlist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_functionlist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_functionlist (mObject.mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_functionlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_functionlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_functionlist * operand = (cCollectionElement_functionlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_functionlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist::GALGAS_functionlist (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist::GALGAS_functionlist (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_functionlist result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::constructor_listWithValue (const GALGAS_function & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionlist result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_functionlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_function & in_mValue
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_functionlist * p = NULL ;
  macroMyNew (p, cCollectionElement_functionlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::addAssign_operation (const GALGAS_function & inOperand0
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::modifier_insertAtIndex (const GALGAS_function inOperand0,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_functionlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::modifier_removeAtIndex (GALGAS_function & outOperand0,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_functionlist) ;
      outOperand0 = p->mObject.mAttribute_mValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::modifier_popFirst (GALGAS_function & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::modifier_popLast (GALGAS_function & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::method_first (GALGAS_function & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::method_last (GALGAS_function & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::operator_concat (const GALGAS_functionlist & inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::add_operation (const GALGAS_functionlist & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_functionlist result = GALGAS_functionlist::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist GALGAS_functionlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_functionlist result = GALGAS_functionlist::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::dotAssign_operation (const GALGAS_functionlist inOperand
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist::modifier_setMValueAtIndex (GALGAS_function inOperand,
                                                     GALGAS_uint inIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mValue = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_function GALGAS_functionlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionlist * p = (cCollectionElement_functionlist *) attributes.ptr () ;
  GALGAS_function result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_functionlist) ;
    result = p->mObject.mAttribute_mValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_functionlist::cEnumerator_functionlist (const GALGAS_functionlist & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist_2D_element cEnumerator_functionlist::current (LOCATION_ARGS) const {
  const cCollectionElement_functionlist * p = (const cCollectionElement_functionlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionlist) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_function cEnumerator_functionlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_functionlist * p = (const cCollectionElement_functionlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionlist) ;
  return p->mObject.mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @stringlist type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringlist ("stringlist",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_stringlist result ;
  const GALGAS_stringlist * p = (const GALGAS_stringlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@stringlist' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_stringlist : public cCollectionElement {
  public : GALGAS_stringlist_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_stringlist (const GALGAS_string & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_stringlist::cCollectionElement_stringlist (const GALGAS_string & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_stringlist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_stringlist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_stringlist (mObject.mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_stringlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_stringlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_stringlist * operand = (cCollectionElement_stringlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_stringlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist::GALGAS_stringlist (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist::GALGAS_stringlist (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_stringlist result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::constructor_listWithValue (const GALGAS_string & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_stringlist result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_stringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_string & in_mValue
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_stringlist * p = NULL ;
  macroMyNew (p, cCollectionElement_stringlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::addAssign_operation (const GALGAS_string & inOperand0
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_stringlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_stringlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_stringlist) ;
      outOperand0 = p->mObject.mAttribute_mValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::modifier_popFirst (GALGAS_string & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_stringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::modifier_popLast (GALGAS_string & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_stringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::method_first (GALGAS_string & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_stringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::method_last (GALGAS_string & outOperand0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_stringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::operator_concat (const GALGAS_stringlist & inOperand
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::add_operation (const GALGAS_stringlist & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_stringlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::dotAssign_operation (const GALGAS_stringlist inOperand
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist::modifier_setMValueAtIndex (GALGAS_string inOperand,
                                                   GALGAS_uint inIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_stringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mValue = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_stringlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_stringlist * p = (cCollectionElement_stringlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_stringlist) ;
    result = p->mObject.mAttribute_mValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_stringlist::cEnumerator_stringlist (const GALGAS_stringlist & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element cEnumerator_stringlist::current (LOCATION_ARGS) const {
  const cCollectionElement_stringlist * p = (const cCollectionElement_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_stringlist) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_stringlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_stringlist * p = (const cCollectionElement_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_stringlist) ;
  return p->mObject.mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @lstringlist type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lstringlist ("lstringlist",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lstringlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lstringlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lstringlist result ;
  const GALGAS_lstringlist * p = (const GALGAS_lstringlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@lstringlist' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lstringlist : public cCollectionElement {
  public : GALGAS_lstringlist_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lstringlist (const GALGAS_lstring & in_mValue
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_lstringlist::cCollectionElement_lstringlist (const GALGAS_lstring & in_mValue
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lstringlist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lstringlist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lstringlist (mObject.mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lstringlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lstringlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lstringlist * operand = (cCollectionElement_lstringlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lstringlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist::GALGAS_lstringlist (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist::GALGAS_lstringlist (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lstringlist result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::constructor_listWithValue (const GALGAS_lstring & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lstringlist result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lstringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GALGAS_lstring & in_mValue
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_lstringlist * p = NULL ;
  macroMyNew (p, cCollectionElement_lstringlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::addAssign_operation (const GALGAS_lstring & inOperand0
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lstringlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lstringlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lstringlist) ;
      outOperand0 = p->mObject.mAttribute_mValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::modifier_popFirst (GALGAS_lstring & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lstringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::modifier_popLast (GALGAS_lstring & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lstringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::method_first (GALGAS_lstring & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lstringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::method_last (GALGAS_lstring & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lstringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::operator_concat (const GALGAS_lstringlist & inOperand
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::add_operation (const GALGAS_lstringlist & inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result = GALGAS_lstringlist::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_lstringlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result = GALGAS_lstringlist::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::dotAssign_operation (const GALGAS_lstringlist inOperand
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist::modifier_setMValueAtIndex (GALGAS_lstring inOperand,
                                                    GALGAS_uint inIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mValue = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstringlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lstringlist * p = (cCollectionElement_lstringlist *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lstringlist) ;
    result = p->mObject.mAttribute_mValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lstringlist::cEnumerator_lstringlist (const GALGAS_lstringlist & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element cEnumerator_lstringlist::current (LOCATION_ARGS) const {
  const cCollectionElement_lstringlist * p = (const cCollectionElement_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lstringlist) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lstringlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_lstringlist * p = (const cCollectionElement_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lstringlist) ;
  return p->mObject.mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @typelist type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typelist ("typelist",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typelist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typelist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typelist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typelist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_typelist result ;
  const GALGAS_typelist * p = (const GALGAS_typelist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typelist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typelist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@typelist' list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_typelist : public cCollectionElement {
  public : GALGAS_typelist_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_typelist (const GALGAS_type & in_mValue
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_typelist::cCollectionElement_typelist (const GALGAS_type & in_mValue
                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_typelist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_typelist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_typelist (mObject.mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_typelist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_typelist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typelist * operand = (cCollectionElement_typelist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typelist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist::GALGAS_typelist (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist::GALGAS_typelist (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_typelist result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::constructor_listWithValue (const GALGAS_type & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typelist result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_typelist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GALGAS_type & in_mValue
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_typelist * p = NULL ;
  macroMyNew (p, cCollectionElement_typelist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::addAssign_operation (const GALGAS_type & inOperand0
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typelist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::modifier_insertAtIndex (const GALGAS_type inOperand0,
                                              const GALGAS_uint inInsertionIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typelist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::modifier_removeAtIndex (GALGAS_type & outOperand0,
                                              const GALGAS_uint inRemoveIndex,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_typelist * p = (cCollectionElement_typelist *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_typelist) ;
      outOperand0 = p->mObject.mAttribute_mValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::modifier_popFirst (GALGAS_type & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typelist * p = (cCollectionElement_typelist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typelist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::modifier_popLast (GALGAS_type & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typelist * p = (cCollectionElement_typelist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typelist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::method_first (GALGAS_type & outOperand0,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typelist * p = (cCollectionElement_typelist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typelist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::method_last (GALGAS_type & outOperand0,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typelist * p = (cCollectionElement_typelist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typelist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::operator_concat (const GALGAS_typelist & inOperand
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typelist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::add_operation (const GALGAS_typelist & inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typelist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::getter_subListWithRange (const GALGAS_range & inRange,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_typelist result = GALGAS_typelist::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist GALGAS_typelist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_typelist result = GALGAS_typelist::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::dotAssign_operation (const GALGAS_typelist inOperand
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist::modifier_setMValueAtIndex (GALGAS_type inOperand,
                                                 GALGAS_uint inIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_typelist * p = (cCollectionElement_typelist *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typelist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mValue = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_typelist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typelist * p = (cCollectionElement_typelist *) attributes.ptr () ;
  GALGAS_type result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typelist) ;
    result = p->mObject.mAttribute_mValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_typelist::cEnumerator_typelist (const GALGAS_typelist & inEnumeratedObject,
                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist_2D_element cEnumerator_typelist::current (LOCATION_ARGS) const {
  const cCollectionElement_typelist * p = (const cCollectionElement_typelist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typelist) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type cEnumerator_typelist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_typelist * p = (const cCollectionElement_typelist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typelist) ;
  return p->mObject.mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @objectlist type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectlist ("objectlist",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectlist result ;
  const GALGAS_objectlist * p = (const GALGAS_objectlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Class for element of '@objectlist' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_objectlist : public cCollectionElement {
  public : GALGAS_objectlist_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_objectlist (const GALGAS_object & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_objectlist::cCollectionElement_objectlist (const GALGAS_object & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_objectlist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_objectlist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_objectlist (mObject.mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_objectlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mObject.mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_objectlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_objectlist * operand = (cCollectionElement_objectlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_objectlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist::GALGAS_objectlist (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist::GALGAS_objectlist (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_objectlist result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::constructor_listWithValue (const GALGAS_object & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_objectlist result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_objectlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_object & in_mValue
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_objectlist * p = NULL ;
  macroMyNew (p, cCollectionElement_objectlist (in_mValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::addAssign_operation (const GALGAS_object & inOperand0
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_objectlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::modifier_insertAtIndex (const GALGAS_object inOperand0,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_objectlist (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::modifier_removeAtIndex (GALGAS_object & outOperand0,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_objectlist) ;
      outOperand0 = p->mObject.mAttribute_mValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::modifier_popFirst (GALGAS_object & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_objectlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::modifier_popLast (GALGAS_object & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_objectlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::method_first (GALGAS_object & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_objectlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::method_last (GALGAS_object & outOperand0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_objectlist) ;
    outOperand0 = p->mObject.mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::operator_concat (const GALGAS_objectlist & inOperand
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_objectlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::add_operation (const GALGAS_objectlist & inOperand,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_objectlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_objectlist result = GALGAS_objectlist::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist GALGAS_objectlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_objectlist result = GALGAS_objectlist::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::dotAssign_operation (const GALGAS_objectlist inOperand
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist::modifier_setMValueAtIndex (GALGAS_object inOperand,
                                                   GALGAS_uint inIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_objectlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mValue = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object GALGAS_objectlist::getter_mValueAtIndex (const GALGAS_uint & inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_objectlist * p = (cCollectionElement_objectlist *) attributes.ptr () ;
  GALGAS_object result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_objectlist) ;
    result = p->mObject.mAttribute_mValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_objectlist::cEnumerator_objectlist (const GALGAS_objectlist & inEnumeratedObject,
                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist_2D_element cEnumerator_objectlist::current (LOCATION_ARGS) const {
  const cCollectionElement_objectlist * p = (const cCollectionElement_objectlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_objectlist) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object cEnumerator_objectlist::current_mValue (LOCATION_ARGS) const {
  const cCollectionElement_objectlist * p = (const cCollectionElement_objectlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_objectlist) ;
  return p->mObject.mAttribute_mValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @2stringlist type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS__32_stringlist ("2stringlist",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS__32_stringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_stringlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS__32_stringlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_stringlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS__32_stringlist result ;
  const GALGAS__32_stringlist * p = (const GALGAS__32_stringlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS__32_stringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2stringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@_32_stringlist' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement__32_stringlist : public cCollectionElement {
  public : GALGAS__32_stringlist_2D_element mObject ;

//--- Constructor
  public : cCollectionElement__32_stringlist (const GALGAS_string & in_mValue_30_,
                                              const GALGAS_string & in_mValue_31_
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement__32_stringlist::cCollectionElement__32_stringlist (const GALGAS_string & in_mValue_30_,
                                                                      const GALGAS_string & in_mValue_31_
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement__32_stringlist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement__32_stringlist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement__32_stringlist (mObject.mAttribute_mValue_30_, mObject.mAttribute_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement__32_stringlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue0" ":" ;
  mObject.mAttribute_mValue_30_.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue1" ":" ;
  mObject.mAttribute_mValue_31_.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement__32_stringlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement__32_stringlist * operand = (cCollectionElement__32_stringlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement__32_stringlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist::GALGAS__32_stringlist (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist::GALGAS__32_stringlist (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::constructor_emptyList (LOCATION_ARGS) {
  GALGAS__32_stringlist result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                        const GALGAS_string & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS__32_stringlist result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS__32_stringlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_string & in_mValue_30_,
                                                       const GALGAS_string & in_mValue_31_
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement__32_stringlist * p = NULL ;
  macroMyNew (p, cCollectionElement__32_stringlist (in_mValue_30_,
                                                    in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::addAssign_operation (const GALGAS_string & inOperand0,
                                                 const GALGAS_string & inOperand1
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement__32_stringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                    const GALGAS_string inOperand1,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement__32_stringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
      outOperand0 = p->mObject.mAttribute_mValue_30_ ;
      outOperand1 = p->mObject.mAttribute_mValue_31_ ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::modifier_popFirst (GALGAS_string & outOperand0,
                                               GALGAS_string & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue_30_ ;
    outOperand1 = p->mObject.mAttribute_mValue_31_ ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::modifier_popLast (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue_30_ ;
    outOperand1 = p->mObject.mAttribute_mValue_31_ ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::method_first (GALGAS_string & outOperand0,
                                          GALGAS_string & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue_30_ ;
    outOperand1 = p->mObject.mAttribute_mValue_31_ ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::method_last (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue_30_ ;
    outOperand1 = p->mObject.mAttribute_mValue_31_ ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::operator_concat (const GALGAS__32_stringlist & inOperand
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS__32_stringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::add_operation (const GALGAS__32_stringlist & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS__32_stringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS__32_stringlist result = GALGAS__32_stringlist::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS__32_stringlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS__32_stringlist result = GALGAS__32_stringlist::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::dotAssign_operation (const GALGAS__32_stringlist inOperand
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::modifier_setMValue_30_AtIndex (GALGAS_string inOperand,
                                                           GALGAS_uint inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mValue_30_ = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS__32_stringlist::getter_mValue_30_AtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    result = p->mObject.mAttribute_mValue_30_ ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist::modifier_setMValue_31_AtIndex (GALGAS_string inOperand,
                                                           GALGAS_uint inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mValue_31_ = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS__32_stringlist::getter_mValue_31_AtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_stringlist * p = (cCollectionElement__32_stringlist *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
    result = p->mObject.mAttribute_mValue_31_ ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator__32_stringlist::cEnumerator__32_stringlist (const GALGAS__32_stringlist & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element cEnumerator__32_stringlist::current (LOCATION_ARGS) const {
  const cCollectionElement__32_stringlist * p = (const cCollectionElement__32_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator__32_stringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const cCollectionElement__32_stringlist * p = (const cCollectionElement__32_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
  return p->mObject.mAttribute_mValue_30_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator__32_stringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const cCollectionElement__32_stringlist * p = (const cCollectionElement__32_stringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_stringlist) ;
  return p->mObject.mAttribute_mValue_31_ ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @2lstringlist type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_lstringlist (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist result ;
  const GALGAS__32_lstringlist * p = (const GALGAS__32_lstringlist *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS__32_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@_32_lstringlist' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement__32_lstringlist : public cCollectionElement {
  public : GALGAS__32_lstringlist_2D_element mObject ;

//--- Constructor
  public : cCollectionElement__32_lstringlist (const GALGAS_lstring & in_mValue_30_,
                                               const GALGAS_lstring & in_mValue_31_
                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GALGAS_lstring & in_mValue_30_,
                                                                        const GALGAS_lstring & in_mValue_31_
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement__32_lstringlist::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement__32_lstringlist::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement__32_lstringlist (mObject.mAttribute_mValue_30_, mObject.mAttribute_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement__32_lstringlist::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue0" ":" ;
  mObject.mAttribute_mValue_30_.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue1" ":" ;
  mObject.mAttribute_mValue_31_.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement__32_lstringlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement__32_lstringlist * operand = (cCollectionElement__32_lstringlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement__32_lstringlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist::GALGAS__32_lstringlist (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist::GALGAS__32_lstringlist (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::constructor_emptyList (LOCATION_ARGS) {
  GALGAS__32_lstringlist result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS__32_lstringlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lstring & in_mValue_30_,
                                                        const GALGAS_lstring & in_mValue_31_
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = NULL ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_,
                                                     in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_lstring & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
      outOperand0 = p->mObject.mAttribute_mValue_30_ ;
      outOperand1 = p->mObject.mAttribute_mValue_31_ ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue_30_ ;
    outOperand1 = p->mObject.mAttribute_mValue_31_ ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::modifier_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue_30_ ;
    outOperand1 = p->mObject.mAttribute_mValue_31_ ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::method_first (GALGAS_lstring & outOperand0,
                                           GALGAS_lstring & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue_30_ ;
    outOperand1 = p->mObject.mAttribute_mValue_31_ ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::method_last (GALGAS_lstring & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mAttribute_mValue_30_ ;
    outOperand1 = p->mObject.mAttribute_mValue_31_ ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::operator_concat (const GALGAS__32_lstringlist & inOperand
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::add_operation (const GALGAS__32_lstringlist & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result = GALGAS__32_lstringlist::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result = GALGAS__32_lstringlist::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::dotAssign_operation (const GALGAS__32_lstringlist inOperand
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::modifier_setMValue_30_AtIndex (GALGAS_lstring inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mValue_30_ = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS__32_lstringlist::getter_mValue_30_AtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mAttribute_mValue_30_ ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist::modifier_setMValue_31_AtIndex (GALGAS_lstring inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) objectPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mAttribute_mValue_31_ = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS__32_lstringlist::getter_mValue_31_AtIndex (const GALGAS_uint & inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mAttribute_mValue_31_ ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator__32_lstringlist::cEnumerator__32_lstringlist (const GALGAS__32_lstringlist & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element cEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mAttribute_mValue_30_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mAttribute_mValue_31_ ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @lbool type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lbool ("lbool",
                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lbool::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lbool ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lbool::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lbool (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_lbool::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_lbool result ;
  const GALGAS_lbool * p = (const GALGAS_lbool *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lbool *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lbool", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool::GALGAS_lbool (void) :
mAttribute_bool (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool::~ GALGAS_lbool (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool::GALGAS_lbool (const GALGAS_bool & inOperand0,
                            const GALGAS_location & inOperand1) :
mAttribute_bool (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_lbool::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lbool (GALGAS_bool::constructor_default (HERE),
                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_lbool::constructor_new (const GALGAS_bool & inOperand0,
                                            const GALGAS_location & inOperand1 
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lbool result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lbool (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lbool::objectCompare (const GALGAS_lbool & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_bool.objectCompare (inOperand.mAttribute_bool) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lbool::isValid (void) const {
  return mAttribute_bool.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbool::drop (void) {
  mAttribute_bool.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbool::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "<struct @lbool:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_bool.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lbool::getter_bool (UNUSED_LOCATION_ARGS) const {
  return mAttribute_bool ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_lbool::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @luint type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_luint ("luint",
                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_luint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_luint ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_luint::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_luint (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_luint::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_luint result ;
  const GALGAS_luint * p = (const GALGAS_luint *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_luint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("luint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint::GALGAS_luint (void) :
mAttribute_uint (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint::~ GALGAS_luint (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint::GALGAS_luint (const GALGAS_uint & inOperand0,
                            const GALGAS_location & inOperand1) :
mAttribute_uint (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_luint::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_luint (GALGAS_uint::constructor_default (HERE),
                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_luint::constructor_new (const GALGAS_uint & inOperand0,
                                            const GALGAS_location & inOperand1 
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_luint result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_luint (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_luint::objectCompare (const GALGAS_luint & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_uint.objectCompare (inOperand.mAttribute_uint) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_luint::isValid (void) const {
  return mAttribute_uint.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luint::drop (void) {
  mAttribute_uint.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luint::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "<struct @luint:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_uint.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_luint::getter_uint (UNUSED_LOCATION_ARGS) const {
  return mAttribute_uint ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_luint::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @luint64 type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_luint_36__34_ ("luint64",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_luint_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_luint_36__34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_luint_36__34_::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_luint_36__34_ (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_ GALGAS_luint_36__34_::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_luint_36__34_ result ;
  const GALGAS_luint_36__34_ * p = (const GALGAS_luint_36__34_ *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_luint_36__34_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("luint64", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_::GALGAS_luint_36__34_ (void) :
mAttribute_uint_36__34_ (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_::~ GALGAS_luint_36__34_ (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_::GALGAS_luint_36__34_ (const GALGAS_uint_36__34_ & inOperand0,
                                            const GALGAS_location & inOperand1) :
mAttribute_uint_36__34_ (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_ GALGAS_luint_36__34_::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_luint_36__34_ (GALGAS_uint_36__34_::constructor_default (HERE),
                               GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint_36__34_ GALGAS_luint_36__34_::constructor_new (const GALGAS_uint_36__34_ & inOperand0,
                                                            const GALGAS_location & inOperand1 
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_luint_36__34_ result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_luint_36__34_ (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_luint_36__34_::objectCompare (const GALGAS_luint_36__34_ & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_uint_36__34_.objectCompare (inOperand.mAttribute_uint_36__34_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_luint_36__34_::isValid (void) const {
  return mAttribute_uint_36__34_.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luint_36__34_::drop (void) {
  mAttribute_uint_36__34_.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luint_36__34_::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "<struct @luint64:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_uint_36__34_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_luint_36__34_::getter_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_uint_36__34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_luint_36__34_::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @lsint type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lsint ("lsint",
                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lsint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lsint ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lsint::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lsint (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint GALGAS_lsint::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_lsint result ;
  const GALGAS_lsint * p = (const GALGAS_lsint *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lsint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lsint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint::GALGAS_lsint (void) :
mAttribute_sint (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint::~ GALGAS_lsint (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint::GALGAS_lsint (const GALGAS_sint & inOperand0,
                            const GALGAS_location & inOperand1) :
mAttribute_sint (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint GALGAS_lsint::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lsint (GALGAS_sint::constructor_default (HERE),
                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint GALGAS_lsint::constructor_new (const GALGAS_sint & inOperand0,
                                            const GALGAS_location & inOperand1 
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lsint result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lsint (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lsint::objectCompare (const GALGAS_lsint & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_sint.objectCompare (inOperand.mAttribute_sint) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lsint::isValid (void) const {
  return mAttribute_sint.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lsint::drop (void) {
  mAttribute_sint.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lsint::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "<struct @lsint:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_sint.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint GALGAS_lsint::getter_sint (UNUSED_LOCATION_ARGS) const {
  return mAttribute_sint ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_lsint::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @lsint64 type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lsint_36__34_ ("lsint64",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lsint_36__34_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lsint_36__34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lsint_36__34_::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lsint_36__34_ (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_ GALGAS_lsint_36__34_::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lsint_36__34_ result ;
  const GALGAS_lsint_36__34_ * p = (const GALGAS_lsint_36__34_ *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lsint_36__34_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lsint64", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_::GALGAS_lsint_36__34_ (void) :
mAttribute_sint_36__34_ (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_::~ GALGAS_lsint_36__34_ (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_::GALGAS_lsint_36__34_ (const GALGAS_sint_36__34_ & inOperand0,
                                            const GALGAS_location & inOperand1) :
mAttribute_sint_36__34_ (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_ GALGAS_lsint_36__34_::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lsint_36__34_ (GALGAS_sint_36__34_::constructor_default (HERE),
                               GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lsint_36__34_ GALGAS_lsint_36__34_::constructor_new (const GALGAS_sint_36__34_ & inOperand0,
                                                            const GALGAS_location & inOperand1 
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lsint_36__34_ result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lsint_36__34_ (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lsint_36__34_::objectCompare (const GALGAS_lsint_36__34_ & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_sint_36__34_.objectCompare (inOperand.mAttribute_sint_36__34_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lsint_36__34_::isValid (void) const {
  return mAttribute_sint_36__34_.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lsint_36__34_::drop (void) {
  mAttribute_sint_36__34_.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lsint_36__34_::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "<struct @lsint64:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_sint_36__34_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_ GALGAS_lsint_36__34_::getter_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_sint_36__34_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_lsint_36__34_::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @lchar type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lchar ("lchar",
                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lchar::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lchar ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lchar::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lchar (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_lchar::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_lchar result ;
  const GALGAS_lchar * p = (const GALGAS_lchar *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lchar *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lchar", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar::GALGAS_lchar (void) :
mAttribute_char (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar::~ GALGAS_lchar (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar::GALGAS_lchar (const GALGAS_char & inOperand0,
                            const GALGAS_location & inOperand1) :
mAttribute_char (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_lchar::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lchar (GALGAS_char::constructor_default (HERE),
                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lchar GALGAS_lchar::constructor_new (const GALGAS_char & inOperand0,
                                            const GALGAS_location & inOperand1 
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lchar result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lchar (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lchar::objectCompare (const GALGAS_lchar & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_char.objectCompare (inOperand.mAttribute_char) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lchar::isValid (void) const {
  return mAttribute_char.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lchar::drop (void) {
  mAttribute_char.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lchar::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "<struct @lchar:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_char.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_lchar::getter_char (UNUSED_LOCATION_ARGS) const {
  return mAttribute_char ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_lchar::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @ldouble type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ldouble ("ldouble",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ldouble::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ldouble ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ldouble::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ldouble (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble GALGAS_ldouble::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_ldouble result ;
  const GALGAS_ldouble * p = (const GALGAS_ldouble *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ldouble *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ldouble", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble::GALGAS_ldouble (void) :
mAttribute_double (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble::~ GALGAS_ldouble (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble::GALGAS_ldouble (const GALGAS_double & inOperand0,
                                const GALGAS_location & inOperand1) :
mAttribute_double (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble GALGAS_ldouble::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ldouble (GALGAS_double::constructor_default (HERE),
                         GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble GALGAS_ldouble::constructor_new (const GALGAS_double & inOperand0,
                                                const GALGAS_location & inOperand1 
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ldouble result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ldouble (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ldouble::objectCompare (const GALGAS_ldouble & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_double.objectCompare (inOperand.mAttribute_double) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ldouble::isValid (void) const {
  return mAttribute_double.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ldouble::drop (void) {
  mAttribute_double.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ldouble::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "<struct @ldouble:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_double.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_double GALGAS_ldouble::getter_double (UNUSED_LOCATION_ARGS) const {
  return mAttribute_double ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_ldouble::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @lstring type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lstring ("lstring",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lstring::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lstring ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lstring::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lstring (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstring::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
  const GALGAS_lstring * p = (const GALGAS_lstring *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lstring *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lstring", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring::GALGAS_lstring (void) :
mAttribute_string (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring::~ GALGAS_lstring (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring::GALGAS_lstring (const GALGAS_string & inOperand0,
                                const GALGAS_location & inOperand1) :
mAttribute_string (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstring::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lstring (GALGAS_string::constructor_default (HERE),
                         GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstring::constructor_new (const GALGAS_string & inOperand0,
                                                const GALGAS_location & inOperand1 
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lstring (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lstring::objectCompare (const GALGAS_lstring & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_string.objectCompare (inOperand.mAttribute_string) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lstring::isValid (void) const {
  return mAttribute_string.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstring::drop (void) {
  mAttribute_string.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstring::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "<struct @lstring:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_string.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lstring::getter_string (UNUSED_LOCATION_ARGS) const {
  return mAttribute_string ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_lstring::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @lbigint type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lbigint ("lbigint",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lbigint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lbigint ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lbigint::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lbigint (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_lbigint::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_lbigint result ;
  const GALGAS_lbigint * p = (const GALGAS_lbigint *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lbigint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lbigint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint::GALGAS_lbigint (void) :
mAttribute_bigint (),
mAttribute_location () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint::~ GALGAS_lbigint (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint::GALGAS_lbigint (const GALGAS_bigint & inOperand0,
                                const GALGAS_location & inOperand1) :
mAttribute_bigint (inOperand0),
mAttribute_location (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_lbigint::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lbigint (GALGAS_bigint::constructor_zero (HERE),
                         GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbigint GALGAS_lbigint::constructor_new (const GALGAS_bigint & inOperand0,
                                                const GALGAS_location & inOperand1 
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lbigint result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lbigint (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lbigint::objectCompare (const GALGAS_lbigint & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_bigint.objectCompare (inOperand.mAttribute_bigint) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_location.objectCompare (inOperand.mAttribute_location) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lbigint::isValid (void) const {
  return mAttribute_bigint.isValid () && mAttribute_location.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigint::drop (void) {
  mAttribute_bigint.drop () ;
  mAttribute_location.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lbigint::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "<struct @lbigint:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_bigint.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_location.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigint GALGAS_lbigint::getter_bigint (UNUSED_LOCATION_ARGS) const {
  return mAttribute_bigint ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_lbigint::getter_location (UNUSED_LOCATION_ARGS) const {
  return mAttribute_location ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @range type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_range ("range",
                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_range::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_range ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_range::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_range (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_range::extractObject (const GALGAS_object & inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_range result ;
  const GALGAS_range * p = (const GALGAS_range *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_range *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("range", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range::GALGAS_range (void) :
mAttribute_start (),
mAttribute_length () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range::~ GALGAS_range (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range::GALGAS_range (const GALGAS_uint & inOperand0,
                            const GALGAS_uint & inOperand1) :
mAttribute_start (inOperand0),
mAttribute_length (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_range::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_range (GALGAS_uint::constructor_default (HERE),
                       GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_range GALGAS_range::constructor_new (const GALGAS_uint & inOperand0,
                                            const GALGAS_uint & inOperand1 
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_range result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_range (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_range::objectCompare (const GALGAS_range & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_start.objectCompare (inOperand.mAttribute_start) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_length.objectCompare (inOperand.mAttribute_length) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_range::isValid (void) const {
  return mAttribute_start.isValid () && mAttribute_length.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_range::drop (void) {
  mAttribute_start.drop () ;
  mAttribute_length.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_range::description (C_String & ioString,
                                const int32_t inIndentation) const {
  ioString << "<struct @range:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_start.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_length.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_range::getter_start (UNUSED_LOCATION_ARGS) const {
  return mAttribute_start ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_range::getter_length (UNUSED_LOCATION_ARGS) const {
  return mAttribute_length ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @luintlist-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_luintlist_2D_element ("luintlist-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_luintlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_luintlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_luintlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_luintlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element GALGAS_luintlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_luintlist_2D_element result ;
  const GALGAS_luintlist_2D_element * p = (const GALGAS_luintlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_luintlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("luintlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element::GALGAS_luintlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element::~ GALGAS_luintlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element::GALGAS_luintlist_2D_element (const GALGAS_luint & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element GALGAS_luintlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_luintlist_2D_element (GALGAS_luint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luintlist_2D_element GALGAS_luintlist_2D_element::constructor_new (const GALGAS_luint & inOperand0 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_luintlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_luintlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_luintlist_2D_element::objectCompare (const GALGAS_luintlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_luintlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_luintlist_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @luintlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_luintlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @uintlist-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uintlist_2D_element ("uintlist-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uintlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uintlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uintlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element GALGAS_uintlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_uintlist_2D_element result ;
  const GALGAS_uintlist_2D_element * p = (const GALGAS_uintlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uintlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element::GALGAS_uintlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element::~ GALGAS_uintlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element::GALGAS_uintlist_2D_element (const GALGAS_uint & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element GALGAS_uintlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_uintlist_2D_element (GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintlist_2D_element GALGAS_uintlist_2D_element::constructor_new (const GALGAS_uint & inOperand0 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_uintlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_uintlist_2D_element::objectCompare (const GALGAS_uintlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_uintlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uintlist_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @uintlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_uintlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @uint64list-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_list_2D_element ("uint64list-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34_list_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_list_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34_list_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_list_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element GALGAS_uint_36__34_list_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_list_2D_element result ;
  const GALGAS_uint_36__34_list_2D_element * p = (const GALGAS_uint_36__34_list_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_uint_36__34_list_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64list-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element::GALGAS_uint_36__34_list_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element::~ GALGAS_uint_36__34_list_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element::GALGAS_uint_36__34_list_2D_element (const GALGAS_uint_36__34_ & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element GALGAS_uint_36__34_list_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_uint_36__34_list_2D_element (GALGAS_uint_36__34_::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_list_2D_element GALGAS_uint_36__34_list_2D_element::constructor_new (const GALGAS_uint_36__34_ & inOperand0 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint_36__34_list_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_uint_36__34_list_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_uint_36__34_list_2D_element::objectCompare (const GALGAS_uint_36__34_list_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_uint_36__34_list_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_uint_36__34_list_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @uint64list-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_ GALGAS_uint_36__34_list_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @functionlist-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionlist_2D_element ("functionlist-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist_2D_element GALGAS_functionlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_functionlist_2D_element result ;
  const GALGAS_functionlist_2D_element * p = (const GALGAS_functionlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist_2D_element::GALGAS_functionlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist_2D_element::~ GALGAS_functionlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist_2D_element::GALGAS_functionlist_2D_element (const GALGAS_function & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionlist_2D_element GALGAS_functionlist_2D_element::constructor_new (const GALGAS_function & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_functionlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_functionlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_functionlist_2D_element::objectCompare (const GALGAS_functionlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_functionlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_functionlist_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @functionlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_function GALGAS_functionlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @stringlist-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringlist_2D_element ("stringlist-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element GALGAS_stringlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_stringlist_2D_element result ;
  const GALGAS_stringlist_2D_element * p = (const GALGAS_stringlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element::GALGAS_stringlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element::~ GALGAS_stringlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element::GALGAS_stringlist_2D_element (const GALGAS_string & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element GALGAS_stringlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_stringlist_2D_element (GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist_2D_element GALGAS_stringlist_2D_element::constructor_new (const GALGAS_string & inOperand0 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_stringlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_stringlist_2D_element::objectCompare (const GALGAS_stringlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_stringlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_stringlist_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @stringlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_stringlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lstringlist-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lstringlist_2D_element ("lstringlist-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lstringlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lstringlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lstringlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lstringlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element GALGAS_lstringlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lstringlist_2D_element result ;
  const GALGAS_lstringlist_2D_element * p = (const GALGAS_lstringlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lstringlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lstringlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element::GALGAS_lstringlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element::~ GALGAS_lstringlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element::GALGAS_lstringlist_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element GALGAS_lstringlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lstringlist_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist_2D_element GALGAS_lstringlist_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lstringlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lstringlist_2D_element::objectCompare (const GALGAS_lstringlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lstringlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lstringlist_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @lstringlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lstringlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @typelist-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typelist_2D_element ("typelist-element",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typelist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typelist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typelist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typelist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist_2D_element GALGAS_typelist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_typelist_2D_element result ;
  const GALGAS_typelist_2D_element * p = (const GALGAS_typelist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typelist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typelist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist_2D_element::GALGAS_typelist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist_2D_element::~ GALGAS_typelist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist_2D_element::GALGAS_typelist_2D_element (const GALGAS_type & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typelist_2D_element GALGAS_typelist_2D_element::constructor_new (const GALGAS_type & inOperand0 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typelist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typelist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typelist_2D_element::objectCompare (const GALGAS_typelist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typelist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typelist_2D_element::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @typelist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_type GALGAS_typelist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @objectlist-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectlist_2D_element ("objectlist-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist_2D_element GALGAS_objectlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_objectlist_2D_element result ;
  const GALGAS_objectlist_2D_element * p = (const GALGAS_objectlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist_2D_element::GALGAS_objectlist_2D_element (void) :
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist_2D_element::~ GALGAS_objectlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist_2D_element::GALGAS_objectlist_2D_element (const GALGAS_object & inOperand0) :
mAttribute_mValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectlist_2D_element GALGAS_objectlist_2D_element::constructor_new (const GALGAS_object & inOperand0 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_objectlist_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_objectlist_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_objectlist_2D_element::objectCompare (const GALGAS_objectlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_objectlist_2D_element::isValid (void) const {
  return mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist_2D_element::drop (void) {
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_objectlist_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @objectlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_object GALGAS_objectlist_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @2stringlist-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS__32_stringlist_2D_element ("2stringlist-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS__32_stringlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_stringlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS__32_stringlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_stringlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element GALGAS__32_stringlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS__32_stringlist_2D_element result ;
  const GALGAS__32_stringlist_2D_element * p = (const GALGAS__32_stringlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS__32_stringlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2stringlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element::GALGAS__32_stringlist_2D_element (void) :
mAttribute_mValue_30_ (),
mAttribute_mValue_31_ () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element::~ GALGAS__32_stringlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element::GALGAS__32_stringlist_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1) :
mAttribute_mValue_30_ (inOperand0),
mAttribute_mValue_31_ (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element GALGAS__32_stringlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS__32_stringlist_2D_element (GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist_2D_element GALGAS__32_stringlist_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_string & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_stringlist_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS__32_stringlist_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS__32_stringlist_2D_element::objectCompare (const GALGAS__32_stringlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue_30_.objectCompare (inOperand.mAttribute_mValue_30_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue_31_.objectCompare (inOperand.mAttribute_mValue_31_) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS__32_stringlist_2D_element::isValid (void) const {
  return mAttribute_mValue_30_.isValid () && mAttribute_mValue_31_.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist_2D_element::drop (void) {
  mAttribute_mValue_30_.drop () ;
  mAttribute_mValue_31_.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_stringlist_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @2stringlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue_30_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS__32_stringlist_2D_element::getter_mValue_30_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue_30_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS__32_stringlist_2D_element::getter_mValue_31_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue_31_ ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @2lstringlist-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS__32_lstringlist_2D_element ("2lstringlist-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS__32_lstringlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS__32_lstringlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_lstringlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  const GALGAS__32_lstringlist_2D_element * p = (const GALGAS__32_lstringlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS__32_lstringlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (void) :
mAttribute_mValue_30_ (),
mAttribute_mValue_31_ () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element::~ GALGAS__32_lstringlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1) :
mAttribute_mValue_30_ (inOperand0),
mAttribute_mValue_31_ (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS__32_lstringlist_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS__32_lstringlist_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS__32_lstringlist_2D_element::objectCompare (const GALGAS__32_lstringlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mValue_30_.objectCompare (inOperand.mAttribute_mValue_30_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue_31_.objectCompare (inOperand.mAttribute_mValue_31_) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS__32_lstringlist_2D_element::isValid (void) const {
  return mAttribute_mValue_30_.isValid () && mAttribute_mValue_31_.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist_2D_element::drop (void) {
  mAttribute_mValue_30_.drop () ;
  mAttribute_mValue_31_.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS__32_lstringlist_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @2lstringlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mValue_30_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS__32_lstringlist_2D_element::getter_mValue_30_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue_30_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS__32_lstringlist_2D_element::getter_mValue_31_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue_31_ ;
}



//--- START OF USER ZONE 2


//--- END OF USER ZONE 2
