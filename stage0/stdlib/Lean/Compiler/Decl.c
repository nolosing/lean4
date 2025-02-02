// Lean compiler output
// Module: Lean.Compiler.Decl
// Imports: Init Lean.Meta.Transform Lean.Meta.Check Lean.Compiler.LCNF
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* l_Lean_Compiler_toDecl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextPartial___at_Lean_Core_instAddMessageContextCoreM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__31;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__19;
static lean_object* l_Lean_Compiler_toDecl___closed__9;
lean_object* lean_environment_find(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__27;
static lean_object* l_Lean_Compiler_toDecl___closed__4;
lean_object* l_Lean_getConstInfo___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_isValidMacroInline___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__8;
static lean_object* l_Lean_Compiler_toDecl___closed__17;
static lean_object* l_Lean_Compiler_toDecl___closed__1;
extern lean_object* l_Lean_levelZero;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Compiler_toDecl___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__20;
static lean_object* l_Lean_Compiler_toDecl___closed__10;
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__12;
LEAN_EXPORT lean_object* l_Lean_Compiler_macroInline___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
static lean_object* l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_macroInline(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_macroInline___closed__1;
static lean_object* l_Lean_Compiler_toDecl___closed__11;
extern lean_object* l_Lean_Expr_instHashableExpr;
lean_object* l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__26;
lean_object* l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey___boxed(lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__22;
lean_object* l_Lean_Core_instantiateValueLevelParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_macroInline___closed__2;
static lean_object* l_Lean_Compiler_toDecl___closed__18;
static lean_object* l_Lean_Compiler_toDecl___closed__30;
lean_object* l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__15;
static lean_object* l_Lean_Compiler_toDecl___closed__3;
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_ConstantInfo_value_x3f(lean_object*);
lean_object* l_instBEqProd___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__24;
LEAN_EXPORT lean_object* l_Lean_Compiler_Decl_check(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_macroInline___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_macroInline___lambda__1___closed__1;
lean_object* l_Lean_Meta_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_ToLCNF_toLCNF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__7;
uint8_t l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_macroInline___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Compiler_toDecl___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__16;
lean_object* lean_is_unsafe_rec_name(lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_macroInline___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableProd___rarg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_toDecl___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_macroInline___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_instBEqExpr;
static lean_object* l_Lean_Compiler_toDecl___closed__13;
static lean_object* l_Lean_Compiler_toDecl___closed__21;
static lean_object* l_Lean_Compiler_toDecl___closed__23;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__6;
static lean_object* l_Lean_Compiler_toDecl___closed__25;
static lean_object* l_Lean_Compiler_toDecl___closed__5;
static lean_object* l_Lean_Compiler_toDecl___closed__29;
lean_object* l_Lean_Meta_lambdaTelescope___at_Lean_Compiler_updateMotive___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Compiler_toDecl___closed__28;
lean_object* l_Lean_Meta_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Compiler_macroInline___lambda__1___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_levelZero;
x_2 = l_Lean_Expr_sort___override(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_macroInline___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_getConstInfo___at___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_isValidMacroInline___spec__1(x_1, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_Core_instantiateValueLevelParams(x_9, x_2, x_5, x_6, x_10);
lean_dec(x_9);
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = lean_unsigned_to_nat(0u);
x_15 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_3, x_14);
x_16 = l_Lean_Compiler_macroInline___lambda__1___closed__1;
lean_inc(x_15);
x_17 = lean_mk_array(x_15, x_16);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_sub(x_15, x_18);
lean_dec(x_15);
x_20 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_3, x_17, x_19);
x_21 = l_Lean_Expr_beta(x_13, x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_11, 0, x_22);
return x_11;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_25 = lean_unsigned_to_nat(0u);
x_26 = l___private_Lean_Expr_0__Lean_Expr_getAppNumArgsAux(x_3, x_25);
x_27 = l_Lean_Compiler_macroInline___lambda__1___closed__1;
lean_inc(x_26);
x_28 = lean_mk_array(x_26, x_27);
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_sub(x_26, x_29);
lean_dec(x_26);
x_31 = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(x_3, x_28, x_30);
x_32 = l_Lean_Expr_beta(x_23, x_31);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_24);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_35 = !lean_is_exclusive(x_8);
if (x_35 == 0)
{
return x_8;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_8, 0);
x_37 = lean_ctor_get(x_8, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_8);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_macroInline___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Expr_getAppFn(x_1);
if (lean_obj_tag(x_5) == 4)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_st_ref_get(x_3, x_4);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; uint8_t x_14; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 2;
lean_inc(x_6);
x_14 = l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux(x_12, x_13, x_6);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_8, 0, x_15);
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_free_object(x_8);
x_16 = lean_box(0);
x_17 = l_Lean_Compiler_macroInline___lambda__1(x_6, x_7, x_1, x_16, x_2, x_3, x_11);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_8, 0);
x_19 = lean_ctor_get(x_8, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_8);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = 2;
lean_inc(x_6);
x_22 = l___private_Lean_Compiler_InlineAttrs_0__Lean_Compiler_hasInlineAttrAux(x_20, x_21, x_6);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_1);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_box(0);
x_26 = l_Lean_Compiler_macroInline___lambda__1(x_6, x_7, x_1, x_25, x_2, x_3, x_19);
return x_26;
}
}
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_1);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_4);
return x_28;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_macroInline___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_5, 0, x_1);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
return x_6;
}
}
static lean_object* _init_l_Lean_Compiler_macroInline___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_macroInline___lambda__2), 4, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_macroInline___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_macroInline___lambda__3___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_macroInline(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l_Lean_Compiler_macroInline___closed__1;
x_6 = l_Lean_Compiler_macroInline___closed__2;
x_7 = l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(x_1, x_5, x_6, x_2, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_macroInline___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Compiler_macroInline___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
return x_8;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_macroInline___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Compiler_macroInline___lambda__3(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 4)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_is_unsafe_rec_name(x_5);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
lean_dec(x_7);
x_11 = l_Lean_Expr_const___override(x_10, x_6);
x_12 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_12, 0, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_4);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_1);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_4);
return x_15;
}
}
}
static lean_object* _init_l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames___lambda__1___boxed), 4, 0);
return x_1;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames___closed__1;
x_6 = l_Lean_Compiler_macroInline___closed__2;
x_7 = l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(x_1, x_5, x_6, x_2, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames___lambda__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Compiler_toDecl___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 5);
x_6 = l_Lean_addMessageContextPartial___at_Lean_Core_instAddMessageContextCoreM___spec__1(x_1, x_2, x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_6);
lean_inc(x_5);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_toDecl___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l_Lean_Meta_etaExpand(x_2, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; uint8_t x_13; lean_object* x_14; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = 0;
x_12 = 1;
x_13 = 1;
x_14 = l_Lean_Meta_mkLambdaFVars(x_1, x_9, x_11, x_12, x_13, x_3, x_4, x_5, x_6, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_14;
}
else
{
uint8_t x_15; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_8);
if (x_15 == 0)
{
return x_8;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_8, 0);
x_17 = lean_ctor_get(x_8, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_8);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
return x_18;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("declaration `", 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_toDecl___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("` not found", 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_toDecl___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("` does not have a value", 23);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_toDecl___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__7() {
_start:
{
uint8_t x_1; uint8_t x_2; uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_1 = 0;
x_2 = 1;
x_3 = 1;
x_4 = 0;
x_5 = lean_alloc_ctor(0, 0, 14);
lean_ctor_set_uint8(x_5, 0, x_1);
lean_ctor_set_uint8(x_5, 1, x_1);
lean_ctor_set_uint8(x_5, 2, x_1);
lean_ctor_set_uint8(x_5, 3, x_1);
lean_ctor_set_uint8(x_5, 4, x_1);
lean_ctor_set_uint8(x_5, 5, x_2);
lean_ctor_set_uint8(x_5, 6, x_3);
lean_ctor_set_uint8(x_5, 7, x_1);
lean_ctor_set_uint8(x_5, 8, x_3);
lean_ctor_set_uint8(x_5, 9, x_3);
lean_ctor_set_uint8(x_5, 10, x_1);
lean_ctor_set_uint8(x_5, 11, x_3);
lean_ctor_set_uint8(x_5, 12, x_3);
lean_ctor_set_uint8(x_5, 13, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = l_Std_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_toDecl___closed__8;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_toDecl___closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(32u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Compiler_toDecl___closed__11;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__13() {
_start:
{
size_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 5;
x_2 = l_Lean_Compiler_toDecl___closed__12;
x_3 = l_Lean_Compiler_toDecl___closed__11;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_4);
lean_ctor_set(x_5, 3, x_4);
lean_ctor_set_usize(x_5, 4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_toDecl___closed__10;
x_2 = l_Lean_Compiler_toDecl___closed__13;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = lean_box(0);
x_2 = l_Lean_Compiler_toDecl___closed__7;
x_3 = l_Lean_Compiler_toDecl___closed__14;
x_4 = l_Lean_Compiler_toDecl___closed__15;
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_4);
lean_ctor_set(x_6, 3, x_1);
lean_ctor_set(x_6, 4, x_5);
lean_ctor_set(x_6, 5, x_1);
return x_6;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_toDecl___closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_toDecl___closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_toDecl___closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Compiler_toDecl___closed__17;
x_3 = l_Lean_Compiler_toDecl___closed__18;
x_4 = l_Lean_Compiler_toDecl___closed__19;
x_5 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_2);
lean_ctor_set(x_5, 3, x_3);
lean_ctor_set(x_5, 4, x_4);
lean_ctor_set(x_5, 5, x_2);
lean_ctor_set(x_5, 6, x_3);
lean_ctor_set(x_5, 7, x_3);
return x_5;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_toDecl___closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_InfoCacheKey_instHashableInfoCacheKey___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_toDecl___closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_toDecl___closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_instBEqExpr;
x_2 = lean_alloc_closure((void*)(l_instBEqProd___rarg), 4, 2);
lean_closure_set(x_2, 0, x_1);
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Expr_instHashableExpr;
x_2 = lean_alloc_closure((void*)(l_instHashableProd___rarg___boxed), 3, 2);
lean_closure_set(x_2, 0, x_1);
lean_closure_set(x_2, 1, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Compiler_toDecl___closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Lean_Compiler_toDecl___closed__21;
x_2 = l_Lean_Compiler_toDecl___closed__23;
x_3 = l_Lean_Compiler_toDecl___closed__24;
x_4 = l_Lean_Compiler_toDecl___closed__27;
x_5 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_1);
lean_ctor_set(x_5, 4, x_1);
lean_ctor_set(x_5, 5, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = lean_box(0);
x_2 = l_Lean_Compiler_toDecl___closed__20;
x_3 = l_Lean_Compiler_toDecl___closed__28;
x_4 = l_Lean_Compiler_toDecl___closed__13;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
lean_ctor_set(x_5, 2, x_1);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__30() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Compiler_toDecl___lambda__1), 7, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Compiler_toDecl___closed__31() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("_unsafe_rec", 11);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_toDecl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_75 = l_Lean_Compiler_toDecl___closed__31;
lean_inc(x_1);
x_76 = l_Lean_Name_str___override(x_1, x_75);
lean_inc(x_8);
x_77 = lean_environment_find(x_8, x_76);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; 
lean_inc(x_1);
x_78 = lean_environment_find(x_8, x_1);
x_9 = x_78;
goto block_74;
}
else
{
uint8_t x_79; 
lean_dec(x_8);
x_79 = !lean_is_exclusive(x_77);
if (x_79 == 0)
{
x_9 = x_77;
goto block_74;
}
else
{
lean_object* x_80; lean_object* x_81; 
x_80 = lean_ctor_get(x_77, 0);
lean_inc(x_80);
lean_dec(x_77);
x_81 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_81, 0, x_80);
x_9 = x_81;
goto block_74;
}
}
block_74:
{
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_10, 0, x_1);
x_11 = l_Lean_Compiler_toDecl___closed__2;
x_12 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
x_13 = l_Lean_Compiler_toDecl___closed__4;
x_14 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_Lean_throwError___at_Lean_Compiler_toDecl___spec__1(x_14, x_2, x_3, x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_9, 0);
lean_inc(x_16);
lean_dec(x_9);
x_17 = l_Lean_ConstantInfo_value_x3f(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_16);
x_18 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_18, 0, x_1);
x_19 = l_Lean_Compiler_toDecl___closed__2;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_Lean_Compiler_toDecl___closed__6;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwError___at_Lean_Compiler_toDecl___spec__1(x_22, x_2, x_3, x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_24 = lean_ctor_get(x_17, 0);
lean_inc(x_24);
lean_dec(x_17);
x_25 = lean_st_ref_get(x_3, x_7);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_Lean_Compiler_toDecl___closed__29;
x_28 = lean_st_mk_ref(x_27, x_26);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = l_Lean_Compiler_toDecl___closed__30;
x_32 = l_Lean_Compiler_toDecl___closed__16;
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_29);
x_33 = l_Lean_Meta_lambdaTelescope___at_Lean_Compiler_updateMotive___spec__1___rarg(x_24, x_31, x_32, x_29, x_2, x_3, x_30);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames___closed__1;
x_37 = l_Lean_Compiler_macroInline___closed__2;
lean_inc(x_3);
lean_inc(x_2);
x_38 = l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(x_34, x_36, x_37, x_2, x_3, x_35);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = l_Lean_Compiler_macroInline___closed__1;
lean_inc(x_3);
lean_inc(x_2);
x_42 = l_Lean_Core_transform___at_Lean_Core_betaReduce___spec__1(x_39, x_41, x_37, x_2, x_3, x_40);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Lean_Compiler_toDecl___closed__14;
lean_inc(x_3);
x_46 = l_Lean_Compiler_ToLCNF_toLCNF(x_45, x_43, x_2, x_3, x_44);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l_Lean_ConstantInfo_type(x_16);
lean_dec(x_16);
x_50 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_50, 0, x_1);
lean_ctor_set(x_50, 1, x_49);
lean_ctor_set(x_50, 2, x_47);
x_51 = lean_st_ref_get(x_3, x_48);
lean_dec(x_3);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_st_ref_get(x_29, x_52);
lean_dec(x_29);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_53, 0);
lean_dec(x_55);
lean_ctor_set(x_53, 0, x_50);
return x_53;
}
else
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_53, 1);
lean_inc(x_56);
lean_dec(x_53);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_50);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
else
{
uint8_t x_58; 
lean_dec(x_29);
lean_dec(x_16);
lean_dec(x_3);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_46);
if (x_58 == 0)
{
return x_46;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_46, 0);
x_60 = lean_ctor_get(x_46, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_46);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
else
{
uint8_t x_62; 
lean_dec(x_29);
lean_dec(x_16);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_62 = !lean_is_exclusive(x_42);
if (x_62 == 0)
{
return x_42;
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_42, 0);
x_64 = lean_ctor_get(x_42, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_42);
x_65 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
return x_65;
}
}
}
else
{
uint8_t x_66; 
lean_dec(x_29);
lean_dec(x_16);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_66 = !lean_is_exclusive(x_38);
if (x_66 == 0)
{
return x_38;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_67 = lean_ctor_get(x_38, 0);
x_68 = lean_ctor_get(x_38, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_38);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
return x_69;
}
}
}
else
{
uint8_t x_70; 
lean_dec(x_29);
lean_dec(x_16);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_70 = !lean_is_exclusive(x_33);
if (x_70 == 0)
{
return x_33;
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_71 = lean_ctor_get(x_33, 0);
x_72 = lean_ctor_get(x_33, 1);
lean_inc(x_72);
lean_inc(x_71);
lean_dec(x_33);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_71);
lean_ctor_set(x_73, 1, x_72);
return x_73;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Compiler_toDecl___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Compiler_toDecl___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_Decl_check(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_st_ref_get(x_3, x_4);
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = l_Lean_Compiler_toDecl___closed__29;
x_9 = lean_st_mk_ref(x_8, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = l_Lean_Compiler_toDecl___closed__16;
lean_inc(x_3);
lean_inc(x_10);
x_13 = l_Lean_Meta_check(x_5, x_12, x_10, x_2, x_3, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_st_ref_get(x_3, x_15);
lean_dec(x_3);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_st_ref_get(x_10, x_17);
lean_dec(x_10);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_18, 0);
lean_dec(x_20);
lean_ctor_set(x_18, 0, x_14);
return x_18;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_14);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_10);
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_13);
if (x_23 == 0)
{
return x_13;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_13, 0);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_13);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Meta_Check(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_Compiler_LCNF(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_Decl(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Check(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_macroInline___lambda__1___closed__1 = _init_l_Lean_Compiler_macroInline___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Compiler_macroInline___lambda__1___closed__1);
l_Lean_Compiler_macroInline___closed__1 = _init_l_Lean_Compiler_macroInline___closed__1();
lean_mark_persistent(l_Lean_Compiler_macroInline___closed__1);
l_Lean_Compiler_macroInline___closed__2 = _init_l_Lean_Compiler_macroInline___closed__2();
lean_mark_persistent(l_Lean_Compiler_macroInline___closed__2);
l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames___closed__1 = _init_l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames___closed__1();
lean_mark_persistent(l___private_Lean_Compiler_Decl_0__Lean_Compiler_replaceUnsafeRecNames___closed__1);
l_Lean_Compiler_toDecl___closed__1 = _init_l_Lean_Compiler_toDecl___closed__1();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__1);
l_Lean_Compiler_toDecl___closed__2 = _init_l_Lean_Compiler_toDecl___closed__2();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__2);
l_Lean_Compiler_toDecl___closed__3 = _init_l_Lean_Compiler_toDecl___closed__3();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__3);
l_Lean_Compiler_toDecl___closed__4 = _init_l_Lean_Compiler_toDecl___closed__4();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__4);
l_Lean_Compiler_toDecl___closed__5 = _init_l_Lean_Compiler_toDecl___closed__5();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__5);
l_Lean_Compiler_toDecl___closed__6 = _init_l_Lean_Compiler_toDecl___closed__6();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__6);
l_Lean_Compiler_toDecl___closed__7 = _init_l_Lean_Compiler_toDecl___closed__7();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__7);
l_Lean_Compiler_toDecl___closed__8 = _init_l_Lean_Compiler_toDecl___closed__8();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__8);
l_Lean_Compiler_toDecl___closed__9 = _init_l_Lean_Compiler_toDecl___closed__9();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__9);
l_Lean_Compiler_toDecl___closed__10 = _init_l_Lean_Compiler_toDecl___closed__10();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__10);
l_Lean_Compiler_toDecl___closed__11 = _init_l_Lean_Compiler_toDecl___closed__11();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__11);
l_Lean_Compiler_toDecl___closed__12 = _init_l_Lean_Compiler_toDecl___closed__12();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__12);
l_Lean_Compiler_toDecl___closed__13 = _init_l_Lean_Compiler_toDecl___closed__13();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__13);
l_Lean_Compiler_toDecl___closed__14 = _init_l_Lean_Compiler_toDecl___closed__14();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__14);
l_Lean_Compiler_toDecl___closed__15 = _init_l_Lean_Compiler_toDecl___closed__15();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__15);
l_Lean_Compiler_toDecl___closed__16 = _init_l_Lean_Compiler_toDecl___closed__16();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__16);
l_Lean_Compiler_toDecl___closed__17 = _init_l_Lean_Compiler_toDecl___closed__17();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__17);
l_Lean_Compiler_toDecl___closed__18 = _init_l_Lean_Compiler_toDecl___closed__18();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__18);
l_Lean_Compiler_toDecl___closed__19 = _init_l_Lean_Compiler_toDecl___closed__19();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__19);
l_Lean_Compiler_toDecl___closed__20 = _init_l_Lean_Compiler_toDecl___closed__20();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__20);
l_Lean_Compiler_toDecl___closed__21 = _init_l_Lean_Compiler_toDecl___closed__21();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__21);
l_Lean_Compiler_toDecl___closed__22 = _init_l_Lean_Compiler_toDecl___closed__22();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__22);
l_Lean_Compiler_toDecl___closed__23 = _init_l_Lean_Compiler_toDecl___closed__23();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__23);
l_Lean_Compiler_toDecl___closed__24 = _init_l_Lean_Compiler_toDecl___closed__24();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__24);
l_Lean_Compiler_toDecl___closed__25 = _init_l_Lean_Compiler_toDecl___closed__25();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__25);
l_Lean_Compiler_toDecl___closed__26 = _init_l_Lean_Compiler_toDecl___closed__26();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__26);
l_Lean_Compiler_toDecl___closed__27 = _init_l_Lean_Compiler_toDecl___closed__27();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__27);
l_Lean_Compiler_toDecl___closed__28 = _init_l_Lean_Compiler_toDecl___closed__28();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__28);
l_Lean_Compiler_toDecl___closed__29 = _init_l_Lean_Compiler_toDecl___closed__29();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__29);
l_Lean_Compiler_toDecl___closed__30 = _init_l_Lean_Compiler_toDecl___closed__30();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__30);
l_Lean_Compiler_toDecl___closed__31 = _init_l_Lean_Compiler_toDecl___closed__31();
lean_mark_persistent(l_Lean_Compiler_toDecl___closed__31);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
