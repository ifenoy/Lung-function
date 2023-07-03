/* Generated code for Python module 'pyparsing.unicode'
 * created by Nuitka version 1.6.6
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pyparsing$unicode" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyparsing$unicode;
PyDictObject *moduledict_pyparsing$unicode;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[174];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[174];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pyparsing.unicode"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 174; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyparsing$unicode(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 174; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_2efa0735f91c8f407bd36c5aca6bd3dc;
static PyCodeObject *codeobj_b41f489555e666f5d3758cd177f49f36;
static PyCodeObject *codeobj_b160231d4410f8d1199026e3dd3df7b8;
static PyCodeObject *codeobj_8b4a836a4632cc61b40b2b4efada07fc;
static PyCodeObject *codeobj_fce864104e58b2c64d87f4580cd75c6d;
static PyCodeObject *codeobj_6245180cd2706e0e111e0ab90fb093fb;
static PyCodeObject *codeobj_5d73bcbf42bef9a666da0db418aff2af;
static PyCodeObject *codeobj_4ecc67404d53765ac5ef970eec1ecf6e;
static PyCodeObject *codeobj_7bb448197b4cbab1cbd6c06e76842cfc;
static PyCodeObject *codeobj_c19df7352f6c609e626430f5369eee60;
static PyCodeObject *codeobj_bee2aba53c55f8befa14c49c33bf6992;
static PyCodeObject *codeobj_f33ff6911748fc9e359e7ccf7ac81111;
static PyCodeObject *codeobj_f88053c434f9825bacfa5dcbc69581ec;
static PyCodeObject *codeobj_638e7e4295b9659e25e39d564bc3335f;
static PyCodeObject *codeobj_d2e7f470a82f56e325e2d63da4737b02;
static PyCodeObject *codeobj_c72f396182b460783b26761b0630006b;
static PyCodeObject *codeobj_2f9ba249db475bc308beea929cffeca5;
static PyCodeObject *codeobj_ee5b235d6e2883c41152ed1e1d6cb590;
static PyCodeObject *codeobj_1ba75d80883ca08e51f42abe6230d154;
static PyCodeObject *codeobj_6df108e1719799f16009432e34fe3ff7;
static PyCodeObject *codeobj_071bb3827f17785902482a4fe4038d25;
static PyCodeObject *codeobj_183ea42c7d92122305e3892fb630f3fa;
static PyCodeObject *codeobj_5c0aa30fb97933b5b127eaf26e294726;
static PyCodeObject *codeobj_4d74cec4b1cf4232b0f5e5eac6264651;
static PyCodeObject *codeobj_98f98467316ad56eb985bb6c6fe0080c;
static PyCodeObject *codeobj_d6b619a2539ba6911c85872e1dc3b008;
static PyCodeObject *codeobj_ef3c259c39efdd6b2766738519c3a6b5;
static PyCodeObject *codeobj_7d9d7fe4ea9aa20170daaca89f996d56;
static PyCodeObject *codeobj_29b85877417b6ac44a48f28511edcd54;
static PyCodeObject *codeobj_6b2c45c508582da92af4336e6fdc0b3c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[163]); CHECK_OBJECT(module_filename_obj);
    codeobj_2efa0735f91c8f407bd36c5aca6bd3dc = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[164], NULL, 1, 0, 0);
    codeobj_b41f489555e666f5d3758cd177f49f36 = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[165], NULL, 1, 0, 0);
    codeobj_b160231d4410f8d1199026e3dd3df7b8 = MAKE_CODE_OBJECT(module_filename_obj, 63, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[166], mod_consts[166], mod_consts[167], NULL, 1, 0, 0);
    codeobj_8b4a836a4632cc61b40b2b4efada07fc = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[168], mod_consts[168], NULL, NULL, 0, 0, 0);
    codeobj_fce864104e58b2c64d87f4580cd75c6d = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_NOFREE, mod_consts[136], mod_consts[136], mod_consts[169], NULL, 0, 0, 0);
    codeobj_6245180cd2706e0e111e0ab90fb093fb = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[169], NULL, 0, 0, 0);
    codeobj_5d73bcbf42bef9a666da0db418aff2af = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[169], NULL, 0, 0, 0);
    codeobj_4ecc67404d53765ac5ef970eec1ecf6e = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_NOFREE, mod_consts[146], mod_consts[146], mod_consts[169], NULL, 0, 0, 0);
    codeobj_7bb448197b4cbab1cbd6c06e76842cfc = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[169], NULL, 0, 0, 0);
    codeobj_c19df7352f6c609e626430f5369eee60 = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[169], NULL, 0, 0, 0);
    codeobj_bee2aba53c55f8befa14c49c33bf6992 = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[169], NULL, 0, 0, 0);
    codeobj_f33ff6911748fc9e359e7ccf7ac81111 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[169], NULL, 0, 0, 0);
    codeobj_f88053c434f9825bacfa5dcbc69581ec = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[169], NULL, 0, 0, 0);
    codeobj_638e7e4295b9659e25e39d564bc3335f = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_NOFREE, mod_consts[110], mod_consts[110], mod_consts[169], NULL, 0, 0, 0);
    codeobj_d2e7f470a82f56e325e2d63da4737b02 = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_NOFREE, mod_consts[119], mod_consts[119], mod_consts[169], NULL, 0, 0, 0);
    codeobj_c72f396182b460783b26761b0630006b = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[169], NULL, 0, 0, 0);
    codeobj_2f9ba249db475bc308beea929cffeca5 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[169], NULL, 0, 0, 0);
    codeobj_ee5b235d6e2883c41152ed1e1d6cb590 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[169], NULL, 0, 0, 0);
    codeobj_1ba75d80883ca08e51f42abe6230d154 = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[169], NULL, 0, 0, 0);
    codeobj_6df108e1719799f16009432e34fe3ff7 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[170], NULL, 3, 0, 0);
    codeobj_071bb3827f17785902482a4fe4038d25 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[171], NULL, 2, 0, 0);
    codeobj_183ea42c7d92122305e3892fb630f3fa = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[172], NULL, 1, 0, 0);
    codeobj_5c0aa30fb97933b5b127eaf26e294726 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[173], NULL, 1, 0, 0);
    codeobj_4d74cec4b1cf4232b0f5e5eac6264651 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[173], NULL, 1, 0, 0);
    codeobj_98f98467316ad56eb985bb6c6fe0080c = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[173], NULL, 1, 0, 0);
    codeobj_d6b619a2539ba6911c85872e1dc3b008 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[173], NULL, 1, 0, 0);
    codeobj_ef3c259c39efdd6b2766738519c3a6b5 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[173], NULL, 1, 0, 0);
    codeobj_7d9d7fe4ea9aa20170daaca89f996d56 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[173], NULL, 1, 0, 0);
    codeobj_29b85877417b6ac44a48f28511edcd54 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[169], NULL, 0, 0, 0);
    codeobj_6b2c45c508582da92af4336e6fdc0b3c = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[169], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_pyparsing$unicode$$$function__9_identbodychars$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__1___init__();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__2___get__();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__3__chars_for_ranges();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__4_printables();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__5_alphas();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__6_nums();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__7_alphanums();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__8_identchars();


static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__9_identbodychars();


// The module function definitions.
static PyObject *impl_pyparsing$unicode$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_fn = python_pars[1];
    struct Nuitka_FrameObject *frame_071bb3827f17785902482a4fe4038d25;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_071bb3827f17785902482a4fe4038d25 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_071bb3827f17785902482a4fe4038d25)) {
        Py_XDECREF(cache_frame_071bb3827f17785902482a4fe4038d25);

#if _DEBUG_REFCOUNTS
        if (cache_frame_071bb3827f17785902482a4fe4038d25 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_071bb3827f17785902482a4fe4038d25 = MAKE_FUNCTION_FRAME(codeobj_071bb3827f17785902482a4fe4038d25, module_pyparsing$unicode, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_071bb3827f17785902482a4fe4038d25->m_type_description == NULL);
    frame_071bb3827f17785902482a4fe4038d25 = cache_frame_071bb3827f17785902482a4fe4038d25;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_071bb3827f17785902482a4fe4038d25);
    assert(Py_REFCNT(frame_071bb3827f17785902482a4fe4038d25) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_fn);
        tmp_assattr_value_1 = par_fn;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_fn);
        tmp_expression_value_1 = par_fn;
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_fn);
        tmp_expression_value_2 = par_fn;
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_071bb3827f17785902482a4fe4038d25, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_071bb3827f17785902482a4fe4038d25->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_071bb3827f17785902482a4fe4038d25, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_071bb3827f17785902482a4fe4038d25,
        type_description_1,
        par_self,
        par_fn
    );


    // Release cached frame if used for exception.
    if (frame_071bb3827f17785902482a4fe4038d25 == cache_frame_071bb3827f17785902482a4fe4038d25) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_071bb3827f17785902482a4fe4038d25);
        cache_frame_071bb3827f17785902482a4fe4038d25 = NULL;
    }

    assertFrameObject(frame_071bb3827f17785902482a4fe4038d25);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_fn);
    Py_DECREF(par_fn);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$unicode$$$function__2___get__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[2]);
    PyObject *var_attrname = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_6df108e1719799f16009432e34fe3ff7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6df108e1719799f16009432e34fe3ff7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_cls);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_obj);
        tmp_type_arg_1 = par_obj;
        tmp_assign_source_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        {
            PyObject *old = Nuitka_Cell_GET(par_cls);
            PyCell_SET(par_cls, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_6df108e1719799f16009432e34fe3ff7)) {
        Py_XDECREF(cache_frame_6df108e1719799f16009432e34fe3ff7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6df108e1719799f16009432e34fe3ff7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6df108e1719799f16009432e34fe3ff7 = MAKE_FUNCTION_FRAME(codeobj_6df108e1719799f16009432e34fe3ff7, module_pyparsing$unicode, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6df108e1719799f16009432e34fe3ff7->m_type_description == NULL);
    frame_6df108e1719799f16009432e34fe3ff7 = cache_frame_6df108e1719799f16009432e34fe3ff7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6df108e1719799f16009432e34fe3ff7);
    assert(Py_REFCNT(frame_6df108e1719799f16009432e34fe3ff7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_cls);
        tmp_attribute_value_1 = mod_consts[3];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_1;
            CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
            tmp_expression_value_3 = Nuitka_Cell_GET(par_cls);
            tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_1 = "ooco";
                goto frame_exception_exit_1;
            }
            tmp_subscript_value_1 = mod_consts[5];
            tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 19;
                type_description_1 = "ooco";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_1 = "ooco";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = par_cls;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_capi_result_1 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_assattr_target_1 = Nuitka_Cell_GET(par_cls);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[0]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[2]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        assert(var_attrname == NULL);
        var_attrname = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_attrname);
        tmp_cmp_expr_left_2 = var_attrname;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_expression_value_6 = Nuitka_Cell_GET(par_cls);
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[3]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_cls);
        frame_6df108e1719799f16009432e34fe3ff7->m_frame.f_lineno = 24;
        tmp_ass_subvalue_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[0], tmp_args_element_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_expression_value_7 = Nuitka_Cell_GET(par_cls);
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[3]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 24;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_attrname);
        tmp_ass_subscript_1 = var_attrname;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_cls));
        tmp_expression_value_9 = Nuitka_Cell_GET(par_cls);
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[3]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        if (var_attrname == NULL) {
            Py_DECREF(tmp_expression_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 25;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_2 = var_attrname;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6df108e1719799f16009432e34fe3ff7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6df108e1719799f16009432e34fe3ff7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6df108e1719799f16009432e34fe3ff7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6df108e1719799f16009432e34fe3ff7,
        type_description_1,
        par_self,
        par_obj,
        par_cls,
        var_attrname
    );


    // Release cached frame if used for exception.
    if (frame_6df108e1719799f16009432e34fe3ff7 == cache_frame_6df108e1719799f16009432e34fe3ff7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6df108e1719799f16009432e34fe3ff7);
        cache_frame_6df108e1719799f16009432e34fe3ff7 = NULL;
    }

    assertFrameObject(frame_6df108e1719799f16009432e34fe3ff7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    par_cls = NULL;
    Py_XDECREF(var_attrname);
    var_attrname = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    par_cls = NULL;
    Py_XDECREF(var_attrname);
    var_attrname = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr_locals {
    PyObject *var_superclass;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr_locals *generator_heap = (struct pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_superclass = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_b41f489555e666f5d3758cd177f49f36, module_pyparsing$unicode, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 17;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_superclass;
            generator_heap->var_superclass = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_superclass);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[7]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_superclass);
        tmp_getattr_target_1 = generator_heap->var_superclass;
        tmp_getattr_attr_1 = mod_consts[3];
        tmp_getattr_default_1 = MAKE_LIST_EMPTY(0);
        tmp_cmp_expr_right_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_default_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        Py_INCREF(tmp_expression_value_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_getattr_target_1, sizeof(PyObject *), &tmp_getattr_attr_1, sizeof(PyObject *), &tmp_getattr_default_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_getattr_target_1, sizeof(PyObject *), &tmp_getattr_attr_1, sizeof(PyObject *), &tmp_getattr_default_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 17;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_superclass,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_superclass);
    generator_heap->var_superclass = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_superclass);
    generator_heap->var_superclass = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr_context,
        module_pyparsing$unicode,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        mod_consts[9],
#endif
        codeobj_b41f489555e666f5d3758cd177f49f36,
        closure,
        2,
#if 1
        sizeof(struct pyparsing$unicode$$$function__2___get__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_pyparsing$unicode$$$function__3__chars_for_ranges(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *var_ret = NULL;
    PyObject *var_cc = NULL;
    PyObject *var_rr = NULL;
    PyObject *outline_0_var_c = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_183ea42c7d92122305e3892fb630f3fa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_b160231d4410f8d1199026e3dd3df7b8_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_b160231d4410f8d1199026e3dd3df7b8_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_183ea42c7d92122305e3892fb630f3fa = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_183ea42c7d92122305e3892fb630f3fa)) {
        Py_XDECREF(cache_frame_183ea42c7d92122305e3892fb630f3fa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_183ea42c7d92122305e3892fb630f3fa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_183ea42c7d92122305e3892fb630f3fa = MAKE_FUNCTION_FRAME(codeobj_183ea42c7d92122305e3892fb630f3fa, module_pyparsing$unicode, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_183ea42c7d92122305e3892fb630f3fa->m_type_description == NULL);
    frame_183ea42c7d92122305e3892fb630f3fa = cache_frame_183ea42c7d92122305e3892fb630f3fa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_183ea42c7d92122305e3892fb630f3fa);
    assert(Py_REFCNT(frame_183ea42c7d92122305e3892fb630f3fa) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 58;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cc;
            var_cc = tmp_assign_source_4;
            Py_INCREF(var_cc);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_cc);
        tmp_cmp_expr_left_1 = var_cc;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(var_cc);
        tmp_getattr_target_1 = var_cc;
        tmp_getattr_attr_1 = mod_consts[11];
        tmp_getattr_default_1 = mod_consts[12];
        tmp_iter_arg_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 61;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_7 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_rr;
            var_rr = tmp_assign_source_7;
            Py_INCREF(var_rr);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        if (var_ret == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_2 = var_ret;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_rr);
        tmp_expression_value_3 = var_rr;
        tmp_subscript_value_1 = mod_consts[15];
        tmp_xrange_low_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_rr);
        tmp_expression_value_4 = var_rr;
        tmp_subscript_value_2 = mod_consts[16];
        tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, -1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_xrange_low_1);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_add_expr_right_1 = mod_consts[17];
        tmp_xrange_high_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_xrange_high_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_xrange_low_1);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_1 = BUILTIN_XRANGE2(tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        frame_183ea42c7d92122305e3892fb630f3fa->m_frame.f_lineno = 62;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 61;
        type_description_1 = "oooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 58;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_set_arg_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_2 != NULL);
        if (var_ret == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }

        tmp_set_arg_1 = var_ret;
        tmp_args_element_value_2 = PySet_New(tmp_set_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        frame_183ea42c7d92122305e3892fb630f3fa->m_frame.f_lineno = 63;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_9;
    }
    if (isFrameUnusable(cache_frame_b160231d4410f8d1199026e3dd3df7b8_2)) {
        Py_XDECREF(cache_frame_b160231d4410f8d1199026e3dd3df7b8_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b160231d4410f8d1199026e3dd3df7b8_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b160231d4410f8d1199026e3dd3df7b8_2 = MAKE_FUNCTION_FRAME(codeobj_b160231d4410f8d1199026e3dd3df7b8, module_pyparsing$unicode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b160231d4410f8d1199026e3dd3df7b8_2->m_type_description == NULL);
    frame_b160231d4410f8d1199026e3dd3df7b8_2 = cache_frame_b160231d4410f8d1199026e3dd3df7b8_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b160231d4410f8d1199026e3dd3df7b8_2);
    assert(Py_REFCNT(frame_b160231d4410f8d1199026e3dd3df7b8_2) == 2);

    // Framed code:
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_3 = tmp_listcomp_1__$0;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 63;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_11 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_c;
            outline_0_var_c = tmp_assign_source_11;
            Py_INCREF(outline_0_var_c);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_chr_arg_1;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_c);
        tmp_chr_arg_1 = outline_0_var_c;
        tmp_append_value_1 = BUILTIN_CHR(tmp_chr_arg_1);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 63;
        type_description_2 = "o";
        goto try_except_handler_5;
    }
    goto loop_start_3;
    loop_end_3:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_5;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_2;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_2:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_4;
    frame_exception_exit_2:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b160231d4410f8d1199026e3dd3df7b8_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b160231d4410f8d1199026e3dd3df7b8_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b160231d4410f8d1199026e3dd3df7b8_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b160231d4410f8d1199026e3dd3df7b8_2,
        type_description_2,
        outline_0_var_c
    );


    // Release cached frame if used for exception.
    if (frame_b160231d4410f8d1199026e3dd3df7b8_2 == cache_frame_b160231d4410f8d1199026e3dd3df7b8_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b160231d4410f8d1199026e3dd3df7b8_2);
        cache_frame_b160231d4410f8d1199026e3dd3df7b8_2 = NULL;
    }

    assertFrameObject(frame_b160231d4410f8d1199026e3dd3df7b8_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;
    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oooo";
    goto try_except_handler_4;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    Py_XDECREF(outline_0_var_c);
    outline_0_var_c = NULL;
    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_0_var_c);
    outline_0_var_c = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_1:;
    exception_lineno = 63;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_183ea42c7d92122305e3892fb630f3fa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_183ea42c7d92122305e3892fb630f3fa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_183ea42c7d92122305e3892fb630f3fa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_183ea42c7d92122305e3892fb630f3fa,
        type_description_1,
        par_cls,
        var_ret,
        var_cc,
        var_rr
    );


    // Release cached frame if used for exception.
    if (frame_183ea42c7d92122305e3892fb630f3fa == cache_frame_183ea42c7d92122305e3892fb630f3fa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_183ea42c7d92122305e3892fb630f3fa);
        cache_frame_183ea42c7d92122305e3892fb630f3fa = NULL;
    }

    assertFrameObject(frame_183ea42c7d92122305e3892fb630f3fa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_cc);
    var_cc = NULL;
    Py_XDECREF(var_rr);
    var_rr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_cc);
    var_cc = NULL;
    Py_XDECREF(var_rr);
    var_rr = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$unicode$$$function__4_printables(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_7d9d7fe4ea9aa20170daaca89f996d56;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d9d7fe4ea9aa20170daaca89f996d56 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d9d7fe4ea9aa20170daaca89f996d56)) {
        Py_XDECREF(cache_frame_7d9d7fe4ea9aa20170daaca89f996d56);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d9d7fe4ea9aa20170daaca89f996d56 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d9d7fe4ea9aa20170daaca89f996d56 = MAKE_FUNCTION_FRAME(codeobj_7d9d7fe4ea9aa20170daaca89f996d56, module_pyparsing$unicode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d9d7fe4ea9aa20170daaca89f996d56->m_type_description == NULL);
    frame_7d9d7fe4ea9aa20170daaca89f996d56 = cache_frame_7d9d7fe4ea9aa20170daaca89f996d56;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7d9d7fe4ea9aa20170daaca89f996d56);
    assert(Py_REFCNT(frame_7d9d7fe4ea9aa20170daaca89f996d56) == 2);

    // Framed code:
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_str_arg_value_1 = mod_consts[19];
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        assert(!(tmp_args_element_value_1 == NULL));
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7d9d7fe4ea9aa20170daaca89f996d56->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7d9d7fe4ea9aa20170daaca89f996d56, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d9d7fe4ea9aa20170daaca89f996d56->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d9d7fe4ea9aa20170daaca89f996d56, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d9d7fe4ea9aa20170daaca89f996d56,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_7d9d7fe4ea9aa20170daaca89f996d56 == cache_frame_7d9d7fe4ea9aa20170daaca89f996d56) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d9d7fe4ea9aa20170daaca89f996d56);
        cache_frame_7d9d7fe4ea9aa20170daaca89f996d56 = NULL;
    }

    assertFrameObject(frame_7d9d7fe4ea9aa20170daaca89f996d56);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$unicode$$$function__5_alphas(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_4d74cec4b1cf4232b0f5e5eac6264651;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4d74cec4b1cf4232b0f5e5eac6264651 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4d74cec4b1cf4232b0f5e5eac6264651)) {
        Py_XDECREF(cache_frame_4d74cec4b1cf4232b0f5e5eac6264651);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d74cec4b1cf4232b0f5e5eac6264651 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d74cec4b1cf4232b0f5e5eac6264651 = MAKE_FUNCTION_FRAME(codeobj_4d74cec4b1cf4232b0f5e5eac6264651, module_pyparsing$unicode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d74cec4b1cf4232b0f5e5eac6264651->m_type_description == NULL);
    frame_4d74cec4b1cf4232b0f5e5eac6264651 = cache_frame_4d74cec4b1cf4232b0f5e5eac6264651;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4d74cec4b1cf4232b0f5e5eac6264651);
    assert(Py_REFCNT(frame_4d74cec4b1cf4232b0f5e5eac6264651) == 2);

    // Framed code:
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_str_arg_value_1 = mod_consts[19];
        tmp_called_value_1 = (PyObject *)&PyFilter_Type;
        tmp_expression_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        assert(!(tmp_args_element_value_1 == NULL));
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4d74cec4b1cf4232b0f5e5eac6264651->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d74cec4b1cf4232b0f5e5eac6264651, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d74cec4b1cf4232b0f5e5eac6264651->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d74cec4b1cf4232b0f5e5eac6264651, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d74cec4b1cf4232b0f5e5eac6264651,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_4d74cec4b1cf4232b0f5e5eac6264651 == cache_frame_4d74cec4b1cf4232b0f5e5eac6264651) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d74cec4b1cf4232b0f5e5eac6264651);
        cache_frame_4d74cec4b1cf4232b0f5e5eac6264651 = NULL;
    }

    assertFrameObject(frame_4d74cec4b1cf4232b0f5e5eac6264651);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$unicode$$$function__6_nums(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_ef3c259c39efdd6b2766738519c3a6b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ef3c259c39efdd6b2766738519c3a6b5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ef3c259c39efdd6b2766738519c3a6b5)) {
        Py_XDECREF(cache_frame_ef3c259c39efdd6b2766738519c3a6b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef3c259c39efdd6b2766738519c3a6b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef3c259c39efdd6b2766738519c3a6b5 = MAKE_FUNCTION_FRAME(codeobj_ef3c259c39efdd6b2766738519c3a6b5, module_pyparsing$unicode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef3c259c39efdd6b2766738519c3a6b5->m_type_description == NULL);
    frame_ef3c259c39efdd6b2766738519c3a6b5 = cache_frame_ef3c259c39efdd6b2766738519c3a6b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ef3c259c39efdd6b2766738519c3a6b5);
    assert(Py_REFCNT(frame_ef3c259c39efdd6b2766738519c3a6b5) == 2);

    // Framed code:
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_str_arg_value_1 = mod_consts[19];
        tmp_called_value_1 = (PyObject *)&PyFilter_Type;
        tmp_expression_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        assert(!(tmp_args_element_value_1 == NULL));
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ef3c259c39efdd6b2766738519c3a6b5->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iterable_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef3c259c39efdd6b2766738519c3a6b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef3c259c39efdd6b2766738519c3a6b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef3c259c39efdd6b2766738519c3a6b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef3c259c39efdd6b2766738519c3a6b5,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_ef3c259c39efdd6b2766738519c3a6b5 == cache_frame_ef3c259c39efdd6b2766738519c3a6b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef3c259c39efdd6b2766738519c3a6b5);
        cache_frame_ef3c259c39efdd6b2766738519c3a6b5 = NULL;
    }

    assertFrameObject(frame_ef3c259c39efdd6b2766738519c3a6b5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$unicode$$$function__7_alphanums(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_5c0aa30fb97933b5b127eaf26e294726;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5c0aa30fb97933b5b127eaf26e294726 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5c0aa30fb97933b5b127eaf26e294726)) {
        Py_XDECREF(cache_frame_5c0aa30fb97933b5b127eaf26e294726);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c0aa30fb97933b5b127eaf26e294726 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c0aa30fb97933b5b127eaf26e294726 = MAKE_FUNCTION_FRAME(codeobj_5c0aa30fb97933b5b127eaf26e294726, module_pyparsing$unicode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c0aa30fb97933b5b127eaf26e294726->m_type_description == NULL);
    frame_5c0aa30fb97933b5b127eaf26e294726 = cache_frame_5c0aa30fb97933b5b127eaf26e294726;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5c0aa30fb97933b5b127eaf26e294726);
    assert(Py_REFCNT(frame_5c0aa30fb97933b5b127eaf26e294726) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[29]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c0aa30fb97933b5b127eaf26e294726, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c0aa30fb97933b5b127eaf26e294726->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c0aa30fb97933b5b127eaf26e294726, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c0aa30fb97933b5b127eaf26e294726,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_5c0aa30fb97933b5b127eaf26e294726 == cache_frame_5c0aa30fb97933b5b127eaf26e294726) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c0aa30fb97933b5b127eaf26e294726);
        cache_frame_5c0aa30fb97933b5b127eaf26e294726 = NULL;
    }

    assertFrameObject(frame_5c0aa30fb97933b5b127eaf26e294726);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$unicode$$$function__8_identchars(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_d6b619a2539ba6911c85872e1dc3b008;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d6b619a2539ba6911c85872e1dc3b008 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d6b619a2539ba6911c85872e1dc3b008)) {
        Py_XDECREF(cache_frame_d6b619a2539ba6911c85872e1dc3b008);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6b619a2539ba6911c85872e1dc3b008 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6b619a2539ba6911c85872e1dc3b008 = MAKE_FUNCTION_FRAME(codeobj_d6b619a2539ba6911c85872e1dc3b008, module_pyparsing$unicode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d6b619a2539ba6911c85872e1dc3b008->m_type_description == NULL);
    frame_d6b619a2539ba6911c85872e1dc3b008 = cache_frame_d6b619a2539ba6911c85872e1dc3b008;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d6b619a2539ba6911c85872e1dc3b008);
    assert(Py_REFCNT(frame_d6b619a2539ba6911c85872e1dc3b008) == 2);

    // Framed code:
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_iterable_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        tmp_str_arg_value_1 = mod_consts[19];
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_1 != NULL);
        tmp_str_arg_value_2 = mod_consts[19];
        tmp_called_value_2 = (PyObject *)&PyFilter_Type;
        tmp_expression_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        assert(!(tmp_args_element_value_2 == NULL));
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d6b619a2539ba6911c85872e1dc3b008->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_iterable_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_iterable_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_2);
        Py_DECREF(tmp_iterable_value_2);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = mod_consts[32];
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        assert(!(tmp_add_expr_left_2 == NULL));
        tmp_add_expr_right_2 = mod_consts[33];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_add_expr_right_1 = mod_consts[34];
        tmp_set_arg_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        assert(!(tmp_set_arg_1 == NULL));
        tmp_args_element_value_1 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d6b619a2539ba6911c85872e1dc3b008->m_frame.f_lineno = 89;
        tmp_iterable_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d6b619a2539ba6911c85872e1dc3b008, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6b619a2539ba6911c85872e1dc3b008->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6b619a2539ba6911c85872e1dc3b008, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6b619a2539ba6911c85872e1dc3b008,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_d6b619a2539ba6911c85872e1dc3b008 == cache_frame_d6b619a2539ba6911c85872e1dc3b008) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d6b619a2539ba6911c85872e1dc3b008);
        cache_frame_d6b619a2539ba6911c85872e1dc3b008 = NULL;
    }

    assertFrameObject(frame_d6b619a2539ba6911c85872e1dc3b008);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$unicode$$$function__9_identbodychars(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_98f98467316ad56eb985bb6c6fe0080c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_98f98467316ad56eb985bb6c6fe0080c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_98f98467316ad56eb985bb6c6fe0080c)) {
        Py_XDECREF(cache_frame_98f98467316ad56eb985bb6c6fe0080c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_98f98467316ad56eb985bb6c6fe0080c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_98f98467316ad56eb985bb6c6fe0080c = MAKE_FUNCTION_FRAME(codeobj_98f98467316ad56eb985bb6c6fe0080c, module_pyparsing$unicode, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_98f98467316ad56eb985bb6c6fe0080c->m_type_description == NULL);
    frame_98f98467316ad56eb985bb6c6fe0080c = cache_frame_98f98467316ad56eb985bb6c6fe0080c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_98f98467316ad56eb985bb6c6fe0080c);
    assert(Py_REFCNT(frame_98f98467316ad56eb985bb6c6fe0080c) == 2);

    // Framed code:
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_iterable_value_2;
        tmp_str_arg_value_1 = mod_consts[19];
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[18]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_cls);
        tmp_expression_value_1 = par_cls;
        tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[36]);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[37];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_str_arg_value_2 = mod_consts[19];
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_cls);
            tmp_expression_value_2 = par_cls;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_iterable_value_2 = MAKE_GENERATOR_pyparsing$unicode$$$function__9_identbodychars$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_add_expr_right_1 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_2);
        Py_DECREF(tmp_iterable_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_set_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_set_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_98f98467316ad56eb985bb6c6fe0080c->m_frame.f_lineno = 106;
        tmp_iterable_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_98f98467316ad56eb985bb6c6fe0080c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_98f98467316ad56eb985bb6c6fe0080c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_98f98467316ad56eb985bb6c6fe0080c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_98f98467316ad56eb985bb6c6fe0080c,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_98f98467316ad56eb985bb6c6fe0080c == cache_frame_98f98467316ad56eb985bb6c6fe0080c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_98f98467316ad56eb985bb6c6fe0080c);
        cache_frame_98f98467316ad56eb985bb6c6fe0080c = NULL;
    }

    assertFrameObject(frame_98f98467316ad56eb985bb6c6fe0080c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct pyparsing$unicode$$$function__9_identbodychars$$$genexpr__1_genexpr_locals {
    PyObject *var_c;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *pyparsing$unicode$$$function__9_identbodychars$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct pyparsing$unicode$$$function__9_identbodychars$$$genexpr__1_genexpr_locals *generator_heap = (struct pyparsing$unicode$$$function__9_identbodychars$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_c = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_2efa0735f91c8f407bd36c5aca6bd3dc, module_pyparsing$unicode, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 110;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_c;
            generator_heap->var_c = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_c);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_add_expr_left_1 = mod_consts[34];
        CHECK_OBJECT(generator_heap->var_c);
        tmp_add_expr_right_1 = generator_heap->var_c;
        tmp_expression_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 111;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_1);

            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_c);
        tmp_expression_value_2 = generator_heap->var_c;
        Py_INCREF(tmp_expression_value_2);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_2;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 110;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_c
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pyparsing$unicode$$$function__9_identbodychars$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pyparsing$unicode$$$function__9_identbodychars$$$genexpr__1_genexpr_context,
        module_pyparsing$unicode,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        mod_consts[39],
#endif
        codeobj_2efa0735f91c8f407bd36c5aca6bd3dc,
        closure,
        1,
#if 1
        sizeof(struct pyparsing$unicode$$$function__9_identbodychars$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__1___init__,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        mod_consts[56],
#endif
        codeobj_071bb3827f17785902482a4fe4038d25,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__2___get__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__2___get__,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_6df108e1719799f16009432e34fe3ff7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__3__chars_for_ranges() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__3__chars_for_ranges,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[63],
#endif
        codeobj_183ea42c7d92122305e3892fb630f3fa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__4_printables() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__4_printables,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[65],
#endif
        codeobj_7d9d7fe4ea9aa20170daaca89f996d56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__5_alphas() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__5_alphas,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[66],
#endif
        codeobj_4d74cec4b1cf4232b0f5e5eac6264651,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__6_nums() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__6_nums,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_ef3c259c39efdd6b2766738519c3a6b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__7_alphanums() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__7_alphanums,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        mod_consts[69],
#endif
        codeobj_5c0aa30fb97933b5b127eaf26e294726,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__8_identchars() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__8_identchars,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_d6b619a2539ba6911c85872e1dc3b008,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$unicode$$$function__9_identbodychars() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$unicode$$$function__9_identbodychars,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_98f98467316ad56eb985bb6c6fe0080c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$unicode,
        mod_consts[38],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_pyparsing$unicode[] = {
    impl_pyparsing$unicode$$$function__1___init__,
    impl_pyparsing$unicode$$$function__2___get__,
    impl_pyparsing$unicode$$$function__3__chars_for_ranges,
    impl_pyparsing$unicode$$$function__4_printables,
    impl_pyparsing$unicode$$$function__5_alphas,
    impl_pyparsing$unicode$$$function__6_nums,
    impl_pyparsing$unicode$$$function__7_alphanums,
    impl_pyparsing$unicode$$$function__8_identchars,
    impl_pyparsing$unicode$$$function__9_identbodychars,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pyparsing$unicode;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_pyparsing$unicode) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pyparsing$unicode[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pyparsing$unicode,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pyparsing$unicode(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyparsing.unicode");

    // Store the module for future use.
    module_pyparsing$unicode = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyparsing.unicode: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyparsing.unicode: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyparsing.unicode: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyparsing$unicode\n");

    moduledict_pyparsing$unicode = MODULE_DICT(module_pyparsing$unicode);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyparsing$unicode,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyparsing$unicode,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[19]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyparsing$unicode,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyparsing$unicode,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyparsing$unicode,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyparsing$unicode);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pyparsing$unicode);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *outline_14_var___class__ = NULL;
    PyObject *outline_15_var___class__ = NULL;
    PyObject *outline_16_var___class__ = NULL;
    PyObject *outline_17_var___class__ = NULL;
    PyObject *outline_18_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_1__bases = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_1__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_2__bases = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_2__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_3__bases = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$Japanese$class_creation_3__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_10__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_10__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_10__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_10__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_11__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_11__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_11__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_11__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_12__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_12__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_12__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_12__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_13__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_13__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_13__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_13__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_1__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_1__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_1__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_1__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_2__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_2__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_2__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_2__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_3__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_3__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_3__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_3__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_4__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_4__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_4__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_4__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_5__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_5__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_5__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_5__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_6__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_6__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_6__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_6__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_7__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_7__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_7__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_7__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_8__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_8__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_8__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_8__prepared = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_9__bases = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_9__bases_orig = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_9__metaclass = NULL;
    PyObject *tmp_pyparsing_unicode$class_creation_9__prepared = NULL;
    struct Nuitka_FrameObject *frame_8b4a836a4632cc61b40b2b4efada07fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_pyparsing$unicode$$$class__1__lazyclassproperty_8 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_pyparsing$unicode$$$class__2_unicode_set_31 = NULL;
    struct Nuitka_FrameObject *frame_6b2c45c508582da92af4336e6fdc0b3c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118 = NULL;
    struct Nuitka_FrameObject *frame_29b85877417b6ac44a48f28511edcd54_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *locals_pyparsing$unicode$$$class__4_Latin1_125 = NULL;
    struct Nuitka_FrameObject *frame_c72f396182b460783b26761b0630006b_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_pyparsing$unicode$$$class__5_LatinA_132 = NULL;
    struct Nuitka_FrameObject *frame_2f9ba249db475bc308beea929cffeca5_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *locals_pyparsing$unicode$$$class__6_LatinB_138 = NULL;
    struct Nuitka_FrameObject *frame_ee5b235d6e2883c41152ed1e1d6cb590_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *locals_pyparsing$unicode$$$class__7_Greek_144 = NULL;
    struct Nuitka_FrameObject *frame_7bb448197b4cbab1cbd6c06e76842cfc_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *locals_pyparsing$unicode$$$class__8_Cyrillic_184 = NULL;
    struct Nuitka_FrameObject *frame_5d73bcbf42bef9a666da0db418aff2af_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *locals_pyparsing$unicode$$$class__9_Chinese_197 = NULL;
    struct Nuitka_FrameObject *frame_6245180cd2706e0e111e0ab90fb093fb_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_pyparsing$unicode$$$class__10_Japanese_220 = NULL;
    struct Nuitka_FrameObject *frame_f88053c434f9825bacfa5dcbc69581ec_10;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    PyObject *locals_pyparsing$unicode$$$class__11_Kanji_224 = NULL;
    struct Nuitka_FrameObject *frame_638e7e4295b9659e25e39d564bc3335f_11;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *locals_pyparsing$unicode$$$class__12_Hiragana_231 = NULL;
    struct Nuitka_FrameObject *frame_f33ff6911748fc9e359e7ccf7ac81111_12;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *locals_pyparsing$unicode$$$class__13_Katakana_243 = NULL;
    struct Nuitka_FrameObject *frame_d2e7f470a82f56e325e2d63da4737b02_13;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *locals_pyparsing$unicode$$$class__14_Hangul_257 = NULL;
    struct Nuitka_FrameObject *frame_c19df7352f6c609e626430f5369eee60_14;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *locals_pyparsing$unicode$$$class__15_CJK_279 = NULL;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *locals_pyparsing$unicode$$$class__16_Thai_283 = NULL;
    struct Nuitka_FrameObject *frame_1ba75d80883ca08e51f42abe6230d154_15;
    NUITKA_MAY_BE_UNUSED char const *type_description_15 = NULL;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *locals_pyparsing$unicode$$$class__17_Arabic_287 = NULL;
    struct Nuitka_FrameObject *frame_fce864104e58b2c64d87f4580cd75c6d_16;
    NUITKA_MAY_BE_UNUSED char const *type_description_16 = NULL;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *locals_pyparsing$unicode$$$class__18_Hebrew_295 = NULL;
    struct Nuitka_FrameObject *frame_bee2aba53c55f8befa14c49c33bf6992_17;
    NUITKA_MAY_BE_UNUSED char const *type_description_17 = NULL;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *locals_pyparsing$unicode$$$class__19_Devanagari_309 = NULL;
    struct Nuitka_FrameObject *frame_4ecc67404d53765ac5ef970eec1ecf6e_18;
    NUITKA_MAY_BE_UNUSED char const *type_description_18 = NULL;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_2);
    }
    frame_8b4a836a4632cc61b40b2b4efada07fc = MAKE_MODULE_FRAME(codeobj_8b4a836a4632cc61b40b2b4efada07fc, module_pyparsing$unicode);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8b4a836a4632cc61b40b2b4efada07fc);
    assert(Py_REFCNT(frame_8b4a836a4632cc61b40b2b4efada07fc) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[42], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[43], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[46];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyparsing$unicode;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[47];
        tmp_level_value_1 = mod_consts[15];
        frame_8b4a836a4632cc61b40b2b4efada07fc->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyparsing$unicode,
                mod_consts[20],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_1);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyparsing$unicode,
                mod_consts[48],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[48]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyparsing$unicode,
                mod_consts[49],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[49]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyparsing$unicode,
                mod_consts[50],
                mod_consts[15]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[50]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_9);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyparsing$unicode$$$class__1__lazyclassproperty_8 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__1__lazyclassproperty_8, mod_consts[52], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__1__lazyclassproperty_8, mod_consts[54], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyparsing$unicode$$$function__1___init__();

        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__1__lazyclassproperty_8, mod_consts[55], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_pyparsing$unicode$$$function__2___get__();

        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__1__lazyclassproperty_8, mod_consts[57], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[53];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_pyparsing$unicode$$$class__1__lazyclassproperty_8;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_8b4a836a4632cc61b40b2b4efada07fc->m_frame.f_lineno = 8;
            tmp_assign_source_13 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_13;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_12 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_12);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_pyparsing$unicode$$$class__1__lazyclassproperty_8);
        locals_pyparsing$unicode$$$class__1__lazyclassproperty_8 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__1__lazyclassproperty_8);
        locals_pyparsing$unicode$$$class__1__lazyclassproperty_8 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 8;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_12);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[59];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_2);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_4 = (PyObject *)&PyLong_Type;
            tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pyparsing$unicode$$$class__2_unicode_set_31 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[52], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[61];
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[1], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[10];
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[54], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_6b2c45c508582da92af4336e6fdc0b3c_2 = MAKE_CLASS_FRAME(codeobj_6b2c45c508582da92af4336e6fdc0b3c, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_6b2c45c508582da92af4336e6fdc0b3c_2);
        assert(Py_REFCNT(frame_6b2c45c508582da92af4336e6fdc0b3c_2) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_ass_subvalue_1 == NULL)) {
                tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            assert(!(tmp_ass_subvalue_1 == NULL));
            tmp_ass_subscribed_1 = DICT_GET_ITEM0(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_1 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_pyparsing$unicode$$$function__3__chars_for_ranges();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 55;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_2 = MAKE_FUNCTION_pyparsing$unicode$$$function__4_printables();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 65;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[64], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_pyparsing$unicode$$$function__5_alphas();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 70;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_called_value_5 == NULL)) {
                tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_pyparsing$unicode$$$function__6_nums();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 75;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_5 = MAKE_FUNCTION_pyparsing$unicode$$$function__7_alphanums();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 80;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_6;
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_pyparsing$unicode$$$function__8_identchars();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 85;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_pyparsing$unicode$$$function__9_identbodychars();

            frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$unicode$$$class__2_unicode_set_31, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6b2c45c508582da92af4336e6fdc0b3c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6b2c45c508582da92af4336e6fdc0b3c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6b2c45c508582da92af4336e6fdc0b3c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6b2c45c508582da92af4336e6fdc0b3c_2,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_6b2c45c508582da92af4336e6fdc0b3c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_7;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_9 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[10];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_pyparsing$unicode$$$class__2_unicode_set_31;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_8b4a836a4632cc61b40b2b4efada07fc->m_frame.f_lineno = 31;
            tmp_assign_source_18 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_17 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_pyparsing$unicode$$$class__2_unicode_set_31);
        locals_pyparsing$unicode$$$class__2_unicode_set_31 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__2_unicode_set_31);
        locals_pyparsing$unicode$$$class__2_unicode_set_31 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 31;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_17);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_tuple_element_4 == NULL));
        tmp_assign_source_19 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_19, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_20 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_8;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_5 = tmp_class_creation_3__bases;
        tmp_subscript_value_5 = mod_consts[15];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_5, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_8;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_1 = tmp_class_creation_3__bases;
        tmp_assign_source_22 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_6 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[73]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_7 = tmp_class_creation_3__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[73]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_8;
        }
        tmp_tuple_element_5 = mod_consts[74];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_5 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
        frame_8b4a836a4632cc61b40b2b4efada07fc->m_frame.f_lineno = 118;
        tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_8 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[75]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_8;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[76];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_1 = mod_consts[2];
        tmp_getattr_default_1 = mod_consts[77];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_2 = tmp_class_creation_3__prepared;
            tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_9 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[2]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 118;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_24;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[78];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_10;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_10;
        }
        frame_29b85877417b6ac44a48f28511edcd54_3 = MAKE_CLASS_FRAME(codeobj_29b85877417b6ac44a48f28511edcd54, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_29b85877417b6ac44a48f28511edcd54_3);
        assert(Py_REFCNT(frame_29b85877417b6ac44a48f28511edcd54_3) == 2);

        // Framed code:
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_7;
            tmp_tuple_element_7 = mod_consts[79];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_10;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
                tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_expression_value_10 == NULL)) {
                    tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                }

                assert(!(tmp_expression_value_10 == NULL));
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[80]);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 123;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dictset_value = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dictset_value, 0, tmp_list_element_1);
            tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[60]);

            if (tmp_ass_subvalue_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_2 == NULL)) {
                        tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 123;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_ass_subvalue_2);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subscribed_2 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_2 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_tuple_element_8;
            tmp_tuple_element_8 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[10]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 125;
                        type_description_2 = "o";
                        goto try_except_handler_11;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto try_except_handler_11;
                }
            }

            tmp_assign_source_26 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_26, 0, tmp_tuple_element_8);
            assert(tmp_pyparsing_unicode$class_creation_1__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_1__bases_orig = tmp_assign_source_26;
        }
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_dircall_arg1_2;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases_orig);
            tmp_dircall_arg1_2 = tmp_pyparsing_unicode$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_2);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
                tmp_assign_source_27 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            assert(tmp_pyparsing_unicode$class_creation_1__bases == NULL);
            tmp_pyparsing_unicode$class_creation_1__bases = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            tmp_assign_source_28 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_1__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_1__class_decl_dict = tmp_assign_source_28;
        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_metaclass_value_2;
            nuitka_bool tmp_condition_result_4;
            int tmp_truth_name_2;
            PyObject *tmp_type_arg_3;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_bases_value_2;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_1__bases);
            if (tmp_truth_name_2 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
            tmp_expression_value_11 = tmp_pyparsing_unicode$class_creation_1__bases;
            tmp_subscript_value_6 = mod_consts[15];
            tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_6, 0);
            if (tmp_type_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
            Py_DECREF(tmp_type_arg_3);
            if (tmp_metaclass_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_2);
            condexpr_end_2:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
            tmp_bases_value_2 = tmp_pyparsing_unicode$class_creation_1__bases;
            tmp_assign_source_29 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
            Py_DECREF(tmp_metaclass_value_2);
            if (tmp_assign_source_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            assert(tmp_pyparsing_unicode$class_creation_1__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_1__metaclass = tmp_assign_source_29;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_expression_value_12;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__metaclass);
            tmp_expression_value_12 = tmp_pyparsing_unicode$class_creation_1__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[73]);
            tmp_condition_result_5 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__metaclass);
            tmp_expression_value_13 = tmp_pyparsing_unicode$class_creation_1__metaclass;
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[73]);
            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_tuple_element_9 = mod_consts[81];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
            tmp_tuple_element_9 = tmp_pyparsing_unicode$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__class_decl_dict);
            tmp_kwargs_value_4 = tmp_pyparsing_unicode$class_creation_1__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 125;
            tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            assert(tmp_pyparsing_unicode$class_creation_1__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_1__prepared = tmp_assign_source_30;
        }
        {
            bool tmp_condition_result_6;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_expression_value_14;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__prepared);
            tmp_expression_value_14 = tmp_pyparsing_unicode$class_creation_1__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[75]);
            tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_condition_result_6 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_6 != false) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_raise_value_2;
            PyObject *tmp_mod_expr_left_2;
            PyObject *tmp_mod_expr_right_2;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_getattr_target_2;
            PyObject *tmp_getattr_attr_2;
            PyObject *tmp_getattr_default_2;
            tmp_raise_type_2 = PyExc_TypeError;
            tmp_mod_expr_left_2 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__metaclass);
            tmp_getattr_target_2 = tmp_pyparsing_unicode$class_creation_1__metaclass;
            tmp_getattr_attr_2 = mod_consts[2];
            tmp_getattr_default_2 = mod_consts[77];
            tmp_tuple_element_10 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_15;
                PyObject *tmp_type_arg_4;
                PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_10);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__prepared);
                tmp_type_arg_4 = tmp_pyparsing_unicode$class_creation_1__prepared;
                tmp_expression_value_15 = BUILTIN_TYPE1(tmp_type_arg_4);
                assert(!(tmp_expression_value_15 == NULL));
                tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[2]);
                Py_DECREF(tmp_expression_value_15);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 125;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_mod_expr_right_2);
            goto try_except_handler_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
            Py_DECREF(tmp_mod_expr_right_2);
            if (tmp_raise_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto try_except_handler_11;
            }
            exception_type = tmp_raise_type_2;
            Py_INCREF(tmp_raise_type_2);
            exception_value = tmp_raise_value_2;
            exception_lineno = 125;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_11;
        }
        branch_no_4:;
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_1__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_1__prepared = tmp_assign_source_31;
        }
        branch_end_3:;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__prepared);
            tmp_set_locals_4 = tmp_pyparsing_unicode$class_creation_1__prepared;
            locals_pyparsing$unicode$$$class__4_Latin1_125 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__4_Latin1_125, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__4_Latin1_125, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__4_Latin1_125, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__4_Latin1_125, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        frame_c72f396182b460783b26761b0630006b_4 = MAKE_CLASS_FRAME(codeobj_c72f396182b460783b26761b0630006b, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c72f396182b460783b26761b0630006b_4);
        assert(Py_REFCNT(frame_c72f396182b460783b26761b0630006b_4) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST2(mod_consts[84],mod_consts[85]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__4_Latin1_125, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_3 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_ass_subvalue_3 = PyObject_GetItem(locals_pyparsing$unicode$$$class__4_Latin1_125, mod_consts[60]);

            if (tmp_ass_subvalue_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_3 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_3 == NULL)) {
                        tmp_ass_subvalue_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 127;
                        type_description_3 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_ass_subvalue_3);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_ass_subscribed_3 = PyObject_GetItem(locals_pyparsing$unicode$$$class__4_Latin1_125, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 127;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_3);

                exception_lineno = 127;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_3 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_3 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c72f396182b460783b26761b0630006b_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c72f396182b460783b26761b0630006b_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c72f396182b460783b26761b0630006b_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c72f396182b460783b26761b0630006b_4,
            type_description_3,
            outline_3_var___class__
        );



        assertFrameObject(frame_c72f396182b460783b26761b0630006b_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_3:;
        type_description_2 = "o";
        goto try_except_handler_13;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_pyparsing_unicode$class_creation_1__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_pyparsing_unicode$class_creation_1__bases_orig;
            tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__4_Latin1_125, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        branch_no_5:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__metaclass);
            tmp_called_value_12 = tmp_pyparsing_unicode$class_creation_1__metaclass;
            tmp_tuple_element_11 = mod_consts[81];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
            tmp_tuple_element_11 = tmp_pyparsing_unicode$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_pyparsing$unicode$$$class__4_Latin1_125;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__class_decl_dict);
            tmp_kwargs_value_5 = tmp_pyparsing_unicode$class_creation_1__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 125;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_dictset_value = outline_3_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_pyparsing$unicode$$$class__4_Latin1_125);
        locals_pyparsing$unicode$$$class__4_Latin1_125 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__4_Latin1_125);
        locals_pyparsing$unicode$$$class__4_Latin1_125 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 125;
        goto try_except_handler_11;
        outline_result_4:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[81], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_2 = "o";
            goto try_except_handler_11;
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_1__bases_orig);
        tmp_pyparsing_unicode$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_1__bases);
        tmp_pyparsing_unicode$class_creation_1__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_1__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_1__metaclass);
        tmp_pyparsing_unicode$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_1__prepared);
        tmp_pyparsing_unicode$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_3;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_1__bases_orig);
        tmp_pyparsing_unicode$class_creation_1__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_1__bases);
        tmp_pyparsing_unicode$class_creation_1__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_1__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_1__metaclass);
        tmp_pyparsing_unicode$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_1__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_1__prepared);
        tmp_pyparsing_unicode$class_creation_1__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_tuple_element_12;
            tmp_tuple_element_12 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[10]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_12 == NULL)) {
                        tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 132;
                        type_description_2 = "o";
                        goto try_except_handler_14;
                    }
                    Py_INCREF(tmp_tuple_element_12);
                } else {
                    goto try_except_handler_14;
                }
            }

            tmp_assign_source_33 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_33, 0, tmp_tuple_element_12);
            assert(tmp_pyparsing_unicode$class_creation_2__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_2__bases_orig = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_dircall_arg1_3;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases_orig);
            tmp_dircall_arg1_3 = tmp_pyparsing_unicode$class_creation_2__bases_orig;
            Py_INCREF(tmp_dircall_arg1_3);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
                tmp_assign_source_34 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            assert(tmp_pyparsing_unicode$class_creation_2__bases == NULL);
            tmp_pyparsing_unicode$class_creation_2__bases = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            tmp_assign_source_35 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_2__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_2__class_decl_dict = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_metaclass_value_3;
            nuitka_bool tmp_condition_result_8;
            int tmp_truth_name_3;
            PyObject *tmp_type_arg_5;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_bases_value_3;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
            tmp_truth_name_3 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_2__bases);
            if (tmp_truth_name_3 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
            tmp_expression_value_16 = tmp_pyparsing_unicode$class_creation_2__bases;
            tmp_subscript_value_7 = mod_consts[15];
            tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_7, 0);
            if (tmp_type_arg_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
            Py_DECREF(tmp_type_arg_5);
            if (tmp_metaclass_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_3);
            condexpr_end_3:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
            tmp_bases_value_3 = tmp_pyparsing_unicode$class_creation_2__bases;
            tmp_assign_source_36 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
            Py_DECREF(tmp_metaclass_value_3);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            assert(tmp_pyparsing_unicode$class_creation_2__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_2__metaclass = tmp_assign_source_36;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_expression_value_17;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__metaclass);
            tmp_expression_value_17 = tmp_pyparsing_unicode$class_creation_2__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[73]);
            tmp_condition_result_9 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__metaclass);
            tmp_expression_value_18 = tmp_pyparsing_unicode$class_creation_2__metaclass;
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[73]);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_tuple_element_13 = mod_consts[87];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
            tmp_tuple_element_13 = tmp_pyparsing_unicode$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__class_decl_dict);
            tmp_kwargs_value_6 = tmp_pyparsing_unicode$class_creation_2__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 132;
            tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            assert(tmp_pyparsing_unicode$class_creation_2__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_2__prepared = tmp_assign_source_37;
        }
        {
            bool tmp_condition_result_10;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_expression_value_19;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__prepared);
            tmp_expression_value_19 = tmp_pyparsing_unicode$class_creation_2__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[75]);
            tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_condition_result_10 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_10 != false) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_raise_value_3;
            PyObject *tmp_mod_expr_left_3;
            PyObject *tmp_mod_expr_right_3;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_getattr_target_3;
            PyObject *tmp_getattr_attr_3;
            PyObject *tmp_getattr_default_3;
            tmp_raise_type_3 = PyExc_TypeError;
            tmp_mod_expr_left_3 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__metaclass);
            tmp_getattr_target_3 = tmp_pyparsing_unicode$class_creation_2__metaclass;
            tmp_getattr_attr_3 = mod_consts[2];
            tmp_getattr_default_3 = mod_consts[77];
            tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_20;
                PyObject *tmp_type_arg_6;
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_14);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__prepared);
                tmp_type_arg_6 = tmp_pyparsing_unicode$class_creation_2__prepared;
                tmp_expression_value_20 = BUILTIN_TYPE1(tmp_type_arg_6);
                assert(!(tmp_expression_value_20 == NULL));
                tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[2]);
                Py_DECREF(tmp_expression_value_20);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 132;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_mod_expr_right_3);
            goto try_except_handler_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
            Py_DECREF(tmp_mod_expr_right_3);
            if (tmp_raise_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            exception_type = tmp_raise_type_3;
            Py_INCREF(tmp_raise_type_3);
            exception_value = tmp_raise_value_3;
            exception_lineno = 132;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        branch_no_7:;
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_38;
            tmp_assign_source_38 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_2__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_2__prepared = tmp_assign_source_38;
        }
        branch_end_6:;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__prepared);
            tmp_set_locals_5 = tmp_pyparsing_unicode$class_creation_2__prepared;
            locals_pyparsing$unicode$$$class__5_LatinA_132 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__5_LatinA_132, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[88];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__5_LatinA_132, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        tmp_dictset_value = mod_consts[89];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__5_LatinA_132, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__5_LatinA_132, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        frame_2f9ba249db475bc308beea929cffeca5_5 = MAKE_CLASS_FRAME(codeobj_2f9ba249db475bc308beea929cffeca5, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_2f9ba249db475bc308beea929cffeca5_5);
        assert(Py_REFCNT(frame_2f9ba249db475bc308beea929cffeca5_5) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST1(mod_consts[90]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__5_LatinA_132, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_3 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_ass_subvalue_4 = PyObject_GetItem(locals_pyparsing$unicode$$$class__5_LatinA_132, mod_consts[60]);

            if (tmp_ass_subvalue_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_4 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_4 == NULL)) {
                        tmp_ass_subvalue_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 134;
                        type_description_3 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_ass_subvalue_4);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_ass_subscribed_4 = PyObject_GetItem(locals_pyparsing$unicode$$$class__5_LatinA_132, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 134;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_4);

                exception_lineno = 134;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
            tmp_ass_subscript_4 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subscribed_4);
            Py_DECREF(tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_3 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2f9ba249db475bc308beea929cffeca5_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2f9ba249db475bc308beea929cffeca5_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2f9ba249db475bc308beea929cffeca5_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2f9ba249db475bc308beea929cffeca5_5,
            type_description_3,
            outline_4_var___class__
        );



        assertFrameObject(frame_2f9ba249db475bc308beea929cffeca5_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_4:;
        type_description_2 = "o";
        goto try_except_handler_16;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_pyparsing_unicode$class_creation_2__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_pyparsing_unicode$class_creation_2__bases_orig;
            tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__5_LatinA_132, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_7;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__metaclass);
            tmp_called_value_14 = tmp_pyparsing_unicode$class_creation_2__metaclass;
            tmp_tuple_element_15 = mod_consts[87];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
            tmp_tuple_element_15 = tmp_pyparsing_unicode$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_pyparsing$unicode$$$class__5_LatinA_132;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__class_decl_dict);
            tmp_kwargs_value_7 = tmp_pyparsing_unicode$class_creation_2__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 132;
            tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_39;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_dictset_value = outline_4_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_pyparsing$unicode$$$class__5_LatinA_132);
        locals_pyparsing$unicode$$$class__5_LatinA_132 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__5_LatinA_132);
        locals_pyparsing$unicode$$$class__5_LatinA_132 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 132;
        goto try_except_handler_14;
        outline_result_5:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[87], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_2__bases_orig);
        tmp_pyparsing_unicode$class_creation_2__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_2__bases);
        tmp_pyparsing_unicode$class_creation_2__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_2__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_2__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_2__metaclass);
        tmp_pyparsing_unicode$class_creation_2__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_2__prepared);
        tmp_pyparsing_unicode$class_creation_2__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto frame_exception_exit_3;
        // End of try:
        try_end_5:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_2__bases_orig);
        tmp_pyparsing_unicode$class_creation_2__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_2__bases);
        tmp_pyparsing_unicode$class_creation_2__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_2__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_2__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_2__metaclass);
        tmp_pyparsing_unicode$class_creation_2__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_2__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_2__prepared);
        tmp_pyparsing_unicode$class_creation_2__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_tuple_element_16;
            tmp_tuple_element_16 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[10]);

            if (tmp_tuple_element_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_16 == NULL)) {
                        tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 138;
                        type_description_2 = "o";
                        goto try_except_handler_17;
                    }
                    Py_INCREF(tmp_tuple_element_16);
                } else {
                    goto try_except_handler_17;
                }
            }

            tmp_assign_source_40 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_40, 0, tmp_tuple_element_16);
            assert(tmp_pyparsing_unicode$class_creation_3__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_3__bases_orig = tmp_assign_source_40;
        }
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_dircall_arg1_4;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases_orig);
            tmp_dircall_arg1_4 = tmp_pyparsing_unicode$class_creation_3__bases_orig;
            Py_INCREF(tmp_dircall_arg1_4);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
                tmp_assign_source_41 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(tmp_pyparsing_unicode$class_creation_3__bases == NULL);
            tmp_pyparsing_unicode$class_creation_3__bases = tmp_assign_source_41;
        }
        {
            PyObject *tmp_assign_source_42;
            tmp_assign_source_42 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_3__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_3__class_decl_dict = tmp_assign_source_42;
        }
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_metaclass_value_4;
            nuitka_bool tmp_condition_result_12;
            int tmp_truth_name_4;
            PyObject *tmp_type_arg_7;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_bases_value_4;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
            tmp_truth_name_4 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_3__bases);
            if (tmp_truth_name_4 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
            tmp_expression_value_21 = tmp_pyparsing_unicode$class_creation_3__bases;
            tmp_subscript_value_8 = mod_consts[15];
            tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_21, tmp_subscript_value_8, 0);
            if (tmp_type_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
            Py_DECREF(tmp_type_arg_7);
            if (tmp_metaclass_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_4);
            condexpr_end_4:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
            tmp_bases_value_4 = tmp_pyparsing_unicode$class_creation_3__bases;
            tmp_assign_source_43 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
            Py_DECREF(tmp_metaclass_value_4);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(tmp_pyparsing_unicode$class_creation_3__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_3__metaclass = tmp_assign_source_43;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_expression_value_22;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__metaclass);
            tmp_expression_value_22 = tmp_pyparsing_unicode$class_creation_3__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_22, mod_consts[73]);
            tmp_condition_result_13 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_44;
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__metaclass);
            tmp_expression_value_23 = tmp_pyparsing_unicode$class_creation_3__metaclass;
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[73]);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_tuple_element_17 = mod_consts[91];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
            tmp_tuple_element_17 = tmp_pyparsing_unicode$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__class_decl_dict);
            tmp_kwargs_value_8 = tmp_pyparsing_unicode$class_creation_3__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 138;
            tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            assert(tmp_pyparsing_unicode$class_creation_3__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_3__prepared = tmp_assign_source_44;
        }
        {
            bool tmp_condition_result_14;
            PyObject *tmp_operand_value_4;
            PyObject *tmp_expression_value_24;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__prepared);
            tmp_expression_value_24 = tmp_pyparsing_unicode$class_creation_3__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_24, mod_consts[75]);
            tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_condition_result_14 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_14 != false) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        {
            PyObject *tmp_raise_type_4;
            PyObject *tmp_raise_value_4;
            PyObject *tmp_mod_expr_left_4;
            PyObject *tmp_mod_expr_right_4;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_getattr_target_4;
            PyObject *tmp_getattr_attr_4;
            PyObject *tmp_getattr_default_4;
            tmp_raise_type_4 = PyExc_TypeError;
            tmp_mod_expr_left_4 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__metaclass);
            tmp_getattr_target_4 = tmp_pyparsing_unicode$class_creation_3__metaclass;
            tmp_getattr_attr_4 = mod_consts[2];
            tmp_getattr_default_4 = mod_consts[77];
            tmp_tuple_element_18 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_25;
                PyObject *tmp_type_arg_8;
                PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_18);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__prepared);
                tmp_type_arg_8 = tmp_pyparsing_unicode$class_creation_3__prepared;
                tmp_expression_value_25 = BUILTIN_TYPE1(tmp_type_arg_8);
                assert(!(tmp_expression_value_25 == NULL));
                tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[2]);
                Py_DECREF(tmp_expression_value_25);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_mod_expr_right_4);
            goto try_except_handler_17;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
            Py_DECREF(tmp_mod_expr_right_4);
            if (tmp_raise_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            exception_type = tmp_raise_type_4;
            Py_INCREF(tmp_raise_type_4);
            exception_value = tmp_raise_value_4;
            exception_lineno = 138;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_17;
        }
        branch_no_10:;
        goto branch_end_9;
        branch_no_9:;
        {
            PyObject *tmp_assign_source_45;
            tmp_assign_source_45 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_3__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_3__prepared = tmp_assign_source_45;
        }
        branch_end_9:;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__prepared);
            tmp_set_locals_6 = tmp_pyparsing_unicode$class_creation_3__prepared;
            locals_pyparsing$unicode$$$class__6_LatinB_138 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__6_LatinB_138, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__6_LatinB_138, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__6_LatinB_138, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__6_LatinB_138, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        frame_ee5b235d6e2883c41152ed1e1d6cb590_6 = MAKE_CLASS_FRAME(codeobj_ee5b235d6e2883c41152ed1e1d6cb590, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ee5b235d6e2883c41152ed1e1d6cb590_6);
        assert(Py_REFCNT(frame_ee5b235d6e2883c41152ed1e1d6cb590_6) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST1(mod_consts[94]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__6_LatinB_138, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_3 = "o";
            goto frame_exception_exit_6;
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_ass_subvalue_5 = PyObject_GetItem(locals_pyparsing$unicode$$$class__6_LatinB_138, mod_consts[60]);

            if (tmp_ass_subvalue_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_5 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_5 == NULL)) {
                        tmp_ass_subvalue_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 140;
                        type_description_3 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_ass_subvalue_5);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_ass_subscribed_5 = PyObject_GetItem(locals_pyparsing$unicode$$$class__6_LatinB_138, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_5);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 140;
                type_description_3 = "o";
                goto frame_exception_exit_6;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_5);

                exception_lineno = 140;
                type_description_3 = "o";
                goto frame_exception_exit_6;
            }
            tmp_ass_subscript_5 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            Py_DECREF(tmp_ass_subscribed_5);
            Py_DECREF(tmp_ass_subvalue_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_3 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ee5b235d6e2883c41152ed1e1d6cb590_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ee5b235d6e2883c41152ed1e1d6cb590_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ee5b235d6e2883c41152ed1e1d6cb590_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ee5b235d6e2883c41152ed1e1d6cb590_6,
            type_description_3,
            outline_5_var___class__
        );



        assertFrameObject(frame_ee5b235d6e2883c41152ed1e1d6cb590_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_5:;
        type_description_2 = "o";
        goto try_except_handler_19;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_pyparsing_unicode$class_creation_3__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_pyparsing_unicode$class_creation_3__bases_orig;
            tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__6_LatinB_138, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_2 = "o";
            goto try_except_handler_19;
        }
        branch_no_11:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__metaclass);
            tmp_called_value_16 = tmp_pyparsing_unicode$class_creation_3__metaclass;
            tmp_tuple_element_19 = mod_consts[91];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
            tmp_tuple_element_19 = tmp_pyparsing_unicode$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = locals_pyparsing$unicode$$$class__6_LatinB_138;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__class_decl_dict);
            tmp_kwargs_value_9 = tmp_pyparsing_unicode$class_creation_3__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 138;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto try_except_handler_19;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_dictset_value = outline_5_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_19;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_19:;
        Py_DECREF(locals_pyparsing$unicode$$$class__6_LatinB_138);
        locals_pyparsing$unicode$$$class__6_LatinB_138 = NULL;
        goto try_return_handler_18;
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__6_LatinB_138);
        locals_pyparsing$unicode$$$class__6_LatinB_138 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 138;
        goto try_except_handler_17;
        outline_result_6:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[91], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_2 = "o";
            goto try_except_handler_17;
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_3__bases_orig);
        tmp_pyparsing_unicode$class_creation_3__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_3__bases);
        tmp_pyparsing_unicode$class_creation_3__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_3__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_3__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_3__metaclass);
        tmp_pyparsing_unicode$class_creation_3__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_3__prepared);
        tmp_pyparsing_unicode$class_creation_3__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto frame_exception_exit_3;
        // End of try:
        try_end_6:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_3__bases_orig);
        tmp_pyparsing_unicode$class_creation_3__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_3__bases);
        tmp_pyparsing_unicode$class_creation_3__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_3__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_3__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_3__metaclass);
        tmp_pyparsing_unicode$class_creation_3__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_3__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_3__prepared);
        tmp_pyparsing_unicode$class_creation_3__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_tuple_element_20;
            tmp_tuple_element_20 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[10]);

            if (tmp_tuple_element_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_20 == NULL)) {
                        tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 144;
                        type_description_2 = "o";
                        goto try_except_handler_20;
                    }
                    Py_INCREF(tmp_tuple_element_20);
                } else {
                    goto try_except_handler_20;
                }
            }

            tmp_assign_source_47 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_47, 0, tmp_tuple_element_20);
            assert(tmp_pyparsing_unicode$class_creation_4__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_4__bases_orig = tmp_assign_source_47;
        }
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_dircall_arg1_5;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases_orig);
            tmp_dircall_arg1_5 = tmp_pyparsing_unicode$class_creation_4__bases_orig;
            Py_INCREF(tmp_dircall_arg1_5);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
                tmp_assign_source_48 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp_pyparsing_unicode$class_creation_4__bases == NULL);
            tmp_pyparsing_unicode$class_creation_4__bases = tmp_assign_source_48;
        }
        {
            PyObject *tmp_assign_source_49;
            tmp_assign_source_49 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_4__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_4__class_decl_dict = tmp_assign_source_49;
        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_metaclass_value_5;
            nuitka_bool tmp_condition_result_16;
            int tmp_truth_name_5;
            PyObject *tmp_type_arg_9;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_bases_value_5;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
            tmp_truth_name_5 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_4__bases);
            if (tmp_truth_name_5 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
            tmp_expression_value_26 = tmp_pyparsing_unicode$class_creation_4__bases;
            tmp_subscript_value_9 = mod_consts[15];
            tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_26, tmp_subscript_value_9, 0);
            if (tmp_type_arg_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
            Py_DECREF(tmp_type_arg_9);
            if (tmp_metaclass_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_5);
            condexpr_end_5:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
            tmp_bases_value_5 = tmp_pyparsing_unicode$class_creation_4__bases;
            tmp_assign_source_50 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
            Py_DECREF(tmp_metaclass_value_5);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp_pyparsing_unicode$class_creation_4__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_4__metaclass = tmp_assign_source_50;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_expression_value_27;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__metaclass);
            tmp_expression_value_27 = tmp_pyparsing_unicode$class_creation_4__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_27, mod_consts[73]);
            tmp_condition_result_17 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__metaclass);
            tmp_expression_value_28 = tmp_pyparsing_unicode$class_creation_4__metaclass;
            tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[73]);
            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_tuple_element_21 = mod_consts[95];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
            tmp_tuple_element_21 = tmp_pyparsing_unicode$class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__class_decl_dict);
            tmp_kwargs_value_10 = tmp_pyparsing_unicode$class_creation_4__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 144;
            tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            assert(tmp_pyparsing_unicode$class_creation_4__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_4__prepared = tmp_assign_source_51;
        }
        {
            bool tmp_condition_result_18;
            PyObject *tmp_operand_value_5;
            PyObject *tmp_expression_value_29;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__prepared);
            tmp_expression_value_29 = tmp_pyparsing_unicode$class_creation_4__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_29, mod_consts[75]);
            tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_condition_result_18 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_18 != false) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
        }
        branch_yes_13:;
        {
            PyObject *tmp_raise_type_5;
            PyObject *tmp_raise_value_5;
            PyObject *tmp_mod_expr_left_5;
            PyObject *tmp_mod_expr_right_5;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_getattr_target_5;
            PyObject *tmp_getattr_attr_5;
            PyObject *tmp_getattr_default_5;
            tmp_raise_type_5 = PyExc_TypeError;
            tmp_mod_expr_left_5 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__metaclass);
            tmp_getattr_target_5 = tmp_pyparsing_unicode$class_creation_4__metaclass;
            tmp_getattr_attr_5 = mod_consts[2];
            tmp_getattr_default_5 = mod_consts[77];
            tmp_tuple_element_22 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_30;
                PyObject *tmp_type_arg_10;
                PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_22);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__prepared);
                tmp_type_arg_10 = tmp_pyparsing_unicode$class_creation_4__prepared;
                tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
                assert(!(tmp_expression_value_30 == NULL));
                tmp_tuple_element_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[2]);
                Py_DECREF(tmp_expression_value_30);
                if (tmp_tuple_element_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;
                    type_description_2 = "o";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_22);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_mod_expr_right_5);
            goto try_except_handler_20;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
            Py_DECREF(tmp_mod_expr_right_5);
            if (tmp_raise_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto try_except_handler_20;
            }
            exception_type = tmp_raise_type_5;
            Py_INCREF(tmp_raise_type_5);
            exception_value = tmp_raise_value_5;
            exception_lineno = 144;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_20;
        }
        branch_no_13:;
        goto branch_end_12;
        branch_no_12:;
        {
            PyObject *tmp_assign_source_52;
            tmp_assign_source_52 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_4__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_4__prepared = tmp_assign_source_52;
        }
        branch_end_12:;
        {
            PyObject *tmp_set_locals_7;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__prepared);
            tmp_set_locals_7 = tmp_pyparsing_unicode$class_creation_4__prepared;
            locals_pyparsing$unicode$$$class__7_Greek_144 = tmp_set_locals_7;
            Py_INCREF(tmp_set_locals_7);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__7_Greek_144, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[96];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__7_Greek_144, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__7_Greek_144, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__7_Greek_144, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        frame_7bb448197b4cbab1cbd6c06e76842cfc_7 = MAKE_CLASS_FRAME(codeobj_7bb448197b4cbab1cbd6c06e76842cfc, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7bb448197b4cbab1cbd6c06e76842cfc_7);
        assert(Py_REFCNT(frame_7bb448197b4cbab1cbd6c06e76842cfc_7) == 2);

        // Framed code:
        tmp_dictset_value = LIST_COPY(mod_consts[98]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__7_Greek_144, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_3 = "o";
            goto frame_exception_exit_7;
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = PyObject_GetItem(locals_pyparsing$unicode$$$class__7_Greek_144, mod_consts[60]);

            if (tmp_ass_subvalue_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_6 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_6 == NULL)) {
                        tmp_ass_subvalue_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 146;
                        type_description_3 = "o";
                        goto frame_exception_exit_7;
                    }
                    Py_INCREF(tmp_ass_subvalue_6);
                } else {
                    goto frame_exception_exit_7;
                }
            }

            tmp_ass_subscribed_6 = PyObject_GetItem(locals_pyparsing$unicode$$$class__7_Greek_144, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_6);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 146;
                type_description_3 = "o";
                goto frame_exception_exit_7;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_6);

                exception_lineno = 146;
                type_description_3 = "o";
                goto frame_exception_exit_7;
            }
            tmp_ass_subscript_6 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            Py_DECREF(tmp_ass_subscribed_6);
            Py_DECREF(tmp_ass_subvalue_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_3 = "o";
                goto frame_exception_exit_7;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7bb448197b4cbab1cbd6c06e76842cfc_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7bb448197b4cbab1cbd6c06e76842cfc_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7bb448197b4cbab1cbd6c06e76842cfc_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7bb448197b4cbab1cbd6c06e76842cfc_7,
            type_description_3,
            outline_6_var___class__
        );



        assertFrameObject(frame_7bb448197b4cbab1cbd6c06e76842cfc_7);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_6:;
        type_description_2 = "o";
        goto try_except_handler_22;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_pyparsing_unicode$class_creation_4__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_pyparsing_unicode$class_creation_4__bases_orig;
            tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto branch_yes_14;
            } else {
                goto branch_no_14;
            }
        }
        branch_yes_14:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__7_Greek_144, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_2 = "o";
            goto try_except_handler_22;
        }
        branch_no_14:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__metaclass);
            tmp_called_value_18 = tmp_pyparsing_unicode$class_creation_4__metaclass;
            tmp_tuple_element_23 = mod_consts[95];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
            tmp_tuple_element_23 = tmp_pyparsing_unicode$class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_pyparsing$unicode$$$class__7_Greek_144;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__class_decl_dict);
            tmp_kwargs_value_11 = tmp_pyparsing_unicode$class_creation_4__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 144;
            tmp_assign_source_53 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto try_except_handler_22;
            }
            assert(outline_6_var___class__ == NULL);
            outline_6_var___class__ = tmp_assign_source_53;
        }
        CHECK_OBJECT(outline_6_var___class__);
        tmp_dictset_value = outline_6_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_22;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_22:;
        Py_DECREF(locals_pyparsing$unicode$$$class__7_Greek_144);
        locals_pyparsing$unicode$$$class__7_Greek_144 = NULL;
        goto try_return_handler_21;
        // Exception handler code:
        try_except_handler_22:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__7_Greek_144);
        locals_pyparsing$unicode$$$class__7_Greek_144 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto try_except_handler_21;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(outline_6_var___class__);
        Py_DECREF(outline_6_var___class__);
        outline_6_var___class__ = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_18 = exception_type;
        exception_keeper_value_18 = exception_value;
        exception_keeper_tb_18 = exception_tb;
        exception_keeper_lineno_18 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_18;
        exception_value = exception_keeper_value_18;
        exception_tb = exception_keeper_tb_18;
        exception_lineno = exception_keeper_lineno_18;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 144;
        goto try_except_handler_20;
        outline_result_7:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[95], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_2 = "o";
            goto try_except_handler_20;
        }
        goto try_end_7;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_4__bases_orig);
        tmp_pyparsing_unicode$class_creation_4__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_4__bases);
        tmp_pyparsing_unicode$class_creation_4__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_4__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_4__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_4__metaclass);
        tmp_pyparsing_unicode$class_creation_4__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_4__prepared);
        tmp_pyparsing_unicode$class_creation_4__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto frame_exception_exit_3;
        // End of try:
        try_end_7:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_4__bases_orig);
        tmp_pyparsing_unicode$class_creation_4__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_4__bases);
        tmp_pyparsing_unicode$class_creation_4__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_4__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_4__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_4__metaclass);
        tmp_pyparsing_unicode$class_creation_4__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_4__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_4__prepared);
        tmp_pyparsing_unicode$class_creation_4__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_tuple_element_24;
            tmp_tuple_element_24 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[10]);

            if (tmp_tuple_element_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_24 == NULL)) {
                        tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 184;
                        type_description_2 = "o";
                        goto try_except_handler_23;
                    }
                    Py_INCREF(tmp_tuple_element_24);
                } else {
                    goto try_except_handler_23;
                }
            }

            tmp_assign_source_54 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_54, 0, tmp_tuple_element_24);
            assert(tmp_pyparsing_unicode$class_creation_5__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_5__bases_orig = tmp_assign_source_54;
        }
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_dircall_arg1_6;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases_orig);
            tmp_dircall_arg1_6 = tmp_pyparsing_unicode$class_creation_5__bases_orig;
            Py_INCREF(tmp_dircall_arg1_6);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
                tmp_assign_source_55 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            assert(tmp_pyparsing_unicode$class_creation_5__bases == NULL);
            tmp_pyparsing_unicode$class_creation_5__bases = tmp_assign_source_55;
        }
        {
            PyObject *tmp_assign_source_56;
            tmp_assign_source_56 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_5__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_5__class_decl_dict = tmp_assign_source_56;
        }
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_metaclass_value_6;
            nuitka_bool tmp_condition_result_20;
            int tmp_truth_name_6;
            PyObject *tmp_type_arg_11;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_bases_value_6;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
            tmp_truth_name_6 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_5__bases);
            if (tmp_truth_name_6 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            tmp_condition_result_20 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
            tmp_expression_value_31 = tmp_pyparsing_unicode$class_creation_5__bases;
            tmp_subscript_value_10 = mod_consts[15];
            tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_31, tmp_subscript_value_10, 0);
            if (tmp_type_arg_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
            Py_DECREF(tmp_type_arg_11);
            if (tmp_metaclass_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_6);
            condexpr_end_6:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
            tmp_bases_value_6 = tmp_pyparsing_unicode$class_creation_5__bases;
            tmp_assign_source_57 = SELECT_METACLASS(tmp_metaclass_value_6, tmp_bases_value_6);
            Py_DECREF(tmp_metaclass_value_6);
            if (tmp_assign_source_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            assert(tmp_pyparsing_unicode$class_creation_5__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_5__metaclass = tmp_assign_source_57;
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_expression_value_32;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__metaclass);
            tmp_expression_value_32 = tmp_pyparsing_unicode$class_creation_5__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_32, mod_consts[73]);
            tmp_condition_result_21 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__metaclass);
            tmp_expression_value_33 = tmp_pyparsing_unicode$class_creation_5__metaclass;
            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[73]);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            tmp_tuple_element_25 = mod_consts[99];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
            tmp_tuple_element_25 = tmp_pyparsing_unicode$class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_25);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__class_decl_dict);
            tmp_kwargs_value_12 = tmp_pyparsing_unicode$class_creation_5__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 184;
            tmp_assign_source_58 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            assert(tmp_pyparsing_unicode$class_creation_5__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_5__prepared = tmp_assign_source_58;
        }
        {
            bool tmp_condition_result_22;
            PyObject *tmp_operand_value_6;
            PyObject *tmp_expression_value_34;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__prepared);
            tmp_expression_value_34 = tmp_pyparsing_unicode$class_creation_5__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_34, mod_consts[75]);
            tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            tmp_condition_result_22 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_22 != false) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        {
            PyObject *tmp_raise_type_6;
            PyObject *tmp_raise_value_6;
            PyObject *tmp_mod_expr_left_6;
            PyObject *tmp_mod_expr_right_6;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_getattr_target_6;
            PyObject *tmp_getattr_attr_6;
            PyObject *tmp_getattr_default_6;
            tmp_raise_type_6 = PyExc_TypeError;
            tmp_mod_expr_left_6 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__metaclass);
            tmp_getattr_target_6 = tmp_pyparsing_unicode$class_creation_5__metaclass;
            tmp_getattr_attr_6 = mod_consts[2];
            tmp_getattr_default_6 = mod_consts[77];
            tmp_tuple_element_26 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6);
            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_35;
                PyObject *tmp_type_arg_12;
                PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_26);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__prepared);
                tmp_type_arg_12 = tmp_pyparsing_unicode$class_creation_5__prepared;
                tmp_expression_value_35 = BUILTIN_TYPE1(tmp_type_arg_12);
                assert(!(tmp_expression_value_35 == NULL));
                tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[2]);
                Py_DECREF(tmp_expression_value_35);
                if (tmp_tuple_element_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 184;
                    type_description_2 = "o";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_26);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_mod_expr_right_6);
            goto try_except_handler_23;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
            Py_DECREF(tmp_mod_expr_right_6);
            if (tmp_raise_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_23;
            }
            exception_type = tmp_raise_type_6;
            Py_INCREF(tmp_raise_type_6);
            exception_value = tmp_raise_value_6;
            exception_lineno = 184;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_23;
        }
        branch_no_16:;
        goto branch_end_15;
        branch_no_15:;
        {
            PyObject *tmp_assign_source_59;
            tmp_assign_source_59 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_5__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_5__prepared = tmp_assign_source_59;
        }
        branch_end_15:;
        {
            PyObject *tmp_set_locals_8;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__prepared);
            tmp_set_locals_8 = tmp_pyparsing_unicode$class_creation_5__prepared;
            locals_pyparsing$unicode$$$class__8_Cyrillic_184 = tmp_set_locals_8;
            Py_INCREF(tmp_set_locals_8);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__8_Cyrillic_184, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_2 = "o";
            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[100];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__8_Cyrillic_184, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_2 = "o";
            goto try_except_handler_25;
        }
        tmp_dictset_value = mod_consts[101];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__8_Cyrillic_184, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_2 = "o";
            goto try_except_handler_25;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__8_Cyrillic_184, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_2 = "o";
            goto try_except_handler_25;
        }
        frame_5d73bcbf42bef9a666da0db418aff2af_8 = MAKE_CLASS_FRAME(codeobj_5d73bcbf42bef9a666da0db418aff2af, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_5d73bcbf42bef9a666da0db418aff2af_8);
        assert(Py_REFCNT(frame_5d73bcbf42bef9a666da0db418aff2af_8) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST8(mod_consts[102]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__8_Cyrillic_184, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_3 = "o";
            goto frame_exception_exit_8;
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_ass_subvalue_7 = PyObject_GetItem(locals_pyparsing$unicode$$$class__8_Cyrillic_184, mod_consts[60]);

            if (tmp_ass_subvalue_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_7 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_7 == NULL)) {
                        tmp_ass_subvalue_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 186;
                        type_description_3 = "o";
                        goto frame_exception_exit_8;
                    }
                    Py_INCREF(tmp_ass_subvalue_7);
                } else {
                    goto frame_exception_exit_8;
                }
            }

            tmp_ass_subscribed_7 = PyObject_GetItem(locals_pyparsing$unicode$$$class__8_Cyrillic_184, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 186;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }

            if (tmp_ass_subscribed_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_7);

                exception_lineno = 186;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
            tmp_ass_subscript_7 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            Py_DECREF(tmp_ass_subscribed_7);
            Py_DECREF(tmp_ass_subvalue_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_3 = "o";
                goto frame_exception_exit_8;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_6;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5d73bcbf42bef9a666da0db418aff2af_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5d73bcbf42bef9a666da0db418aff2af_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5d73bcbf42bef9a666da0db418aff2af_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5d73bcbf42bef9a666da0db418aff2af_8,
            type_description_3,
            outline_7_var___class__
        );



        assertFrameObject(frame_5d73bcbf42bef9a666da0db418aff2af_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_7:;
        type_description_2 = "o";
        goto try_except_handler_25;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_pyparsing_unicode$class_creation_5__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_pyparsing_unicode$class_creation_5__bases_orig;
            tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_25;
            }
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
        }
        branch_yes_17:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__8_Cyrillic_184, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_2 = "o";
            goto try_except_handler_25;
        }
        branch_no_17:;
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_kwargs_value_13;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__metaclass);
            tmp_called_value_20 = tmp_pyparsing_unicode$class_creation_5__metaclass;
            tmp_tuple_element_27 = mod_consts[99];
            tmp_args_value_13 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
            tmp_tuple_element_27 = tmp_pyparsing_unicode$class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = locals_pyparsing$unicode$$$class__8_Cyrillic_184;
            PyTuple_SET_ITEM0(tmp_args_value_13, 2, tmp_tuple_element_27);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__class_decl_dict);
            tmp_kwargs_value_13 = tmp_pyparsing_unicode$class_creation_5__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 184;
            tmp_assign_source_60 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_args_value_13);
            if (tmp_assign_source_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto try_except_handler_25;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_dictset_value = outline_7_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_DECREF(locals_pyparsing$unicode$$$class__8_Cyrillic_184);
        locals_pyparsing$unicode$$$class__8_Cyrillic_184 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__8_Cyrillic_184);
        locals_pyparsing$unicode$$$class__8_Cyrillic_184 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto try_except_handler_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_21 = exception_type;
        exception_keeper_value_21 = exception_value;
        exception_keeper_tb_21 = exception_tb;
        exception_keeper_lineno_21 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_21;
        exception_value = exception_keeper_value_21;
        exception_tb = exception_keeper_tb_21;
        exception_lineno = exception_keeper_lineno_21;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 184;
        goto try_except_handler_23;
        outline_result_8:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[99], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_2 = "o";
            goto try_except_handler_23;
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_5__bases_orig);
        tmp_pyparsing_unicode$class_creation_5__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_5__bases);
        tmp_pyparsing_unicode$class_creation_5__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_5__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_5__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_5__metaclass);
        tmp_pyparsing_unicode$class_creation_5__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_5__prepared);
        tmp_pyparsing_unicode$class_creation_5__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto frame_exception_exit_3;
        // End of try:
        try_end_8:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_5__bases_orig);
        tmp_pyparsing_unicode$class_creation_5__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_5__bases);
        tmp_pyparsing_unicode$class_creation_5__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_5__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_5__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_5__metaclass);
        tmp_pyparsing_unicode$class_creation_5__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_5__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_5__prepared);
        tmp_pyparsing_unicode$class_creation_5__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_tuple_element_28;
            tmp_tuple_element_28 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[10]);

            if (tmp_tuple_element_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_28 == NULL)) {
                        tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 197;
                        type_description_2 = "o";
                        goto try_except_handler_26;
                    }
                    Py_INCREF(tmp_tuple_element_28);
                } else {
                    goto try_except_handler_26;
                }
            }

            tmp_assign_source_61 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_61, 0, tmp_tuple_element_28);
            assert(tmp_pyparsing_unicode$class_creation_6__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_6__bases_orig = tmp_assign_source_61;
        }
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_dircall_arg1_7;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases_orig);
            tmp_dircall_arg1_7 = tmp_pyparsing_unicode$class_creation_6__bases_orig;
            Py_INCREF(tmp_dircall_arg1_7);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
                tmp_assign_source_62 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            assert(tmp_pyparsing_unicode$class_creation_6__bases == NULL);
            tmp_pyparsing_unicode$class_creation_6__bases = tmp_assign_source_62;
        }
        {
            PyObject *tmp_assign_source_63;
            tmp_assign_source_63 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_6__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_6__class_decl_dict = tmp_assign_source_63;
        }
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_metaclass_value_7;
            nuitka_bool tmp_condition_result_24;
            int tmp_truth_name_7;
            PyObject *tmp_type_arg_13;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_bases_value_7;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
            tmp_truth_name_7 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_6__bases);
            if (tmp_truth_name_7 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_condition_result_24 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
            tmp_expression_value_36 = tmp_pyparsing_unicode$class_creation_6__bases;
            tmp_subscript_value_11 = mod_consts[15];
            tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_36, tmp_subscript_value_11, 0);
            if (tmp_type_arg_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
            Py_DECREF(tmp_type_arg_13);
            if (tmp_metaclass_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_7);
            condexpr_end_7:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
            tmp_bases_value_7 = tmp_pyparsing_unicode$class_creation_6__bases;
            tmp_assign_source_64 = SELECT_METACLASS(tmp_metaclass_value_7, tmp_bases_value_7);
            Py_DECREF(tmp_metaclass_value_7);
            if (tmp_assign_source_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            assert(tmp_pyparsing_unicode$class_creation_6__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_6__metaclass = tmp_assign_source_64;
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_expression_value_37;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__metaclass);
            tmp_expression_value_37 = tmp_pyparsing_unicode$class_creation_6__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_37, mod_consts[73]);
            tmp_condition_result_25 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kwargs_value_14;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__metaclass);
            tmp_expression_value_38 = tmp_pyparsing_unicode$class_creation_6__metaclass;
            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[73]);
            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_tuple_element_29 = mod_consts[103];
            tmp_args_value_14 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
            tmp_tuple_element_29 = tmp_pyparsing_unicode$class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__class_decl_dict);
            tmp_kwargs_value_14 = tmp_pyparsing_unicode$class_creation_6__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 197;
            tmp_assign_source_65 = CALL_FUNCTION(tmp_called_value_21, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_value_14);
            if (tmp_assign_source_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            assert(tmp_pyparsing_unicode$class_creation_6__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_6__prepared = tmp_assign_source_65;
        }
        {
            bool tmp_condition_result_26;
            PyObject *tmp_operand_value_7;
            PyObject *tmp_expression_value_39;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__prepared);
            tmp_expression_value_39 = tmp_pyparsing_unicode$class_creation_6__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_39, mod_consts[75]);
            tmp_operand_value_7 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_condition_result_26 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_26 != false) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
        }
        branch_yes_19:;
        {
            PyObject *tmp_raise_type_7;
            PyObject *tmp_raise_value_7;
            PyObject *tmp_mod_expr_left_7;
            PyObject *tmp_mod_expr_right_7;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_getattr_target_7;
            PyObject *tmp_getattr_attr_7;
            PyObject *tmp_getattr_default_7;
            tmp_raise_type_7 = PyExc_TypeError;
            tmp_mod_expr_left_7 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__metaclass);
            tmp_getattr_target_7 = tmp_pyparsing_unicode$class_creation_6__metaclass;
            tmp_getattr_attr_7 = mod_consts[2];
            tmp_getattr_default_7 = mod_consts[77];
            tmp_tuple_element_30 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, tmp_getattr_default_7);
            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_40;
                PyObject *tmp_type_arg_14;
                PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_30);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__prepared);
                tmp_type_arg_14 = tmp_pyparsing_unicode$class_creation_6__prepared;
                tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_14);
                assert(!(tmp_expression_value_40 == NULL));
                tmp_tuple_element_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[2]);
                Py_DECREF(tmp_expression_value_40);
                if (tmp_tuple_element_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 197;
                    type_description_2 = "o";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_30);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_mod_expr_right_7);
            goto try_except_handler_26;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
            Py_DECREF(tmp_mod_expr_right_7);
            if (tmp_raise_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto try_except_handler_26;
            }
            exception_type = tmp_raise_type_7;
            Py_INCREF(tmp_raise_type_7);
            exception_value = tmp_raise_value_7;
            exception_lineno = 197;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_26;
        }
        branch_no_19:;
        goto branch_end_18;
        branch_no_18:;
        {
            PyObject *tmp_assign_source_66;
            tmp_assign_source_66 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_6__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_6__prepared = tmp_assign_source_66;
        }
        branch_end_18:;
        {
            PyObject *tmp_set_locals_9;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__prepared);
            tmp_set_locals_9 = tmp_pyparsing_unicode$class_creation_6__prepared;
            locals_pyparsing$unicode$$$class__9_Chinese_197 = tmp_set_locals_9;
            Py_INCREF(tmp_set_locals_9);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__9_Chinese_197, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_2 = "o";
            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__9_Chinese_197, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_2 = "o";
            goto try_except_handler_28;
        }
        tmp_dictset_value = mod_consts[105];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__9_Chinese_197, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_2 = "o";
            goto try_except_handler_28;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__9_Chinese_197, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_2 = "o";
            goto try_except_handler_28;
        }
        frame_6245180cd2706e0e111e0ab90fb093fb_9 = MAKE_CLASS_FRAME(codeobj_6245180cd2706e0e111e0ab90fb093fb, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_6245180cd2706e0e111e0ab90fb093fb_9);
        assert(Py_REFCNT(frame_6245180cd2706e0e111e0ab90fb093fb_9) == 2);

        // Framed code:
        tmp_dictset_value = LIST_COPY(mod_consts[106]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__9_Chinese_197, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_3 = "o";
            goto frame_exception_exit_9;
        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            tmp_ass_subvalue_8 = PyObject_GetItem(locals_pyparsing$unicode$$$class__9_Chinese_197, mod_consts[60]);

            if (tmp_ass_subvalue_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_8 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_8 == NULL)) {
                        tmp_ass_subvalue_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 199;
                        type_description_3 = "o";
                        goto frame_exception_exit_9;
                    }
                    Py_INCREF(tmp_ass_subvalue_8);
                } else {
                    goto frame_exception_exit_9;
                }
            }

            tmp_ass_subscribed_8 = PyObject_GetItem(locals_pyparsing$unicode$$$class__9_Chinese_197, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_8);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 199;
                type_description_3 = "o";
                goto frame_exception_exit_9;
            }

            if (tmp_ass_subscribed_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_8);

                exception_lineno = 199;
                type_description_3 = "o";
                goto frame_exception_exit_9;
            }
            tmp_ass_subscript_8 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
            Py_DECREF(tmp_ass_subscribed_8);
            Py_DECREF(tmp_ass_subvalue_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 199;
                type_description_3 = "o";
                goto frame_exception_exit_9;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_exception_exit_9:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6245180cd2706e0e111e0ab90fb093fb_9, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6245180cd2706e0e111e0ab90fb093fb_9->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6245180cd2706e0e111e0ab90fb093fb_9, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6245180cd2706e0e111e0ab90fb093fb_9,
            type_description_3,
            outline_8_var___class__
        );



        assertFrameObject(frame_6245180cd2706e0e111e0ab90fb093fb_9);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_8;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_8:;
        type_description_2 = "o";
        goto try_except_handler_28;
        skip_nested_handling_7:;
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
            tmp_cmp_expr_left_6 = tmp_pyparsing_unicode$class_creation_6__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases_orig);
            tmp_cmp_expr_right_6 = tmp_pyparsing_unicode$class_creation_6__bases_orig;
            tmp_condition_result_27 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto try_except_handler_28;
            }
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto branch_yes_20;
            } else {
                goto branch_no_20;
            }
        }
        branch_yes_20:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_6__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__9_Chinese_197, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_2 = "o";
            goto try_except_handler_28;
        }
        branch_no_20:;
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kwargs_value_15;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__metaclass);
            tmp_called_value_22 = tmp_pyparsing_unicode$class_creation_6__metaclass;
            tmp_tuple_element_31 = mod_consts[103];
            tmp_args_value_15 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
            tmp_tuple_element_31 = tmp_pyparsing_unicode$class_creation_6__bases;
            PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = locals_pyparsing$unicode$$$class__9_Chinese_197;
            PyTuple_SET_ITEM0(tmp_args_value_15, 2, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__class_decl_dict);
            tmp_kwargs_value_15 = tmp_pyparsing_unicode$class_creation_6__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 197;
            tmp_assign_source_67 = CALL_FUNCTION(tmp_called_value_22, tmp_args_value_15, tmp_kwargs_value_15);
            Py_DECREF(tmp_args_value_15);
            if (tmp_assign_source_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto try_except_handler_28;
            }
            assert(outline_8_var___class__ == NULL);
            outline_8_var___class__ = tmp_assign_source_67;
        }
        CHECK_OBJECT(outline_8_var___class__);
        tmp_dictset_value = outline_8_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_pyparsing$unicode$$$class__9_Chinese_197);
        locals_pyparsing$unicode$$$class__9_Chinese_197 = NULL;
        goto try_return_handler_27;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__9_Chinese_197);
        locals_pyparsing$unicode$$$class__9_Chinese_197 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(outline_8_var___class__);
        Py_DECREF(outline_8_var___class__);
        outline_8_var___class__ = NULL;
        goto outline_result_9;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_9:;
        exception_lineno = 197;
        goto try_except_handler_26;
        outline_result_9:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[103], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_2 = "o";
            goto try_except_handler_26;
        }
        goto try_end_9;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_6__bases_orig);
        tmp_pyparsing_unicode$class_creation_6__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_6__bases);
        tmp_pyparsing_unicode$class_creation_6__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_6__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_6__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_6__metaclass);
        tmp_pyparsing_unicode$class_creation_6__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_6__prepared);
        tmp_pyparsing_unicode$class_creation_6__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto frame_exception_exit_3;
        // End of try:
        try_end_9:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_6__bases_orig);
        tmp_pyparsing_unicode$class_creation_6__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_6__bases);
        tmp_pyparsing_unicode$class_creation_6__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_6__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_6__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_6__metaclass);
        tmp_pyparsing_unicode$class_creation_6__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_6__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_6__prepared);
        tmp_pyparsing_unicode$class_creation_6__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_tuple_element_32;
            tmp_tuple_element_32 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[10]);

            if (tmp_tuple_element_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_32 == NULL)) {
                        tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 220;
                        type_description_2 = "o";
                        goto try_except_handler_29;
                    }
                    Py_INCREF(tmp_tuple_element_32);
                } else {
                    goto try_except_handler_29;
                }
            }

            tmp_assign_source_68 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_68, 0, tmp_tuple_element_32);
            assert(tmp_pyparsing_unicode$class_creation_7__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_7__bases_orig = tmp_assign_source_68;
        }
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_dircall_arg1_8;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases_orig);
            tmp_dircall_arg1_8 = tmp_pyparsing_unicode$class_creation_7__bases_orig;
            Py_INCREF(tmp_dircall_arg1_8);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
                tmp_assign_source_69 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            assert(tmp_pyparsing_unicode$class_creation_7__bases == NULL);
            tmp_pyparsing_unicode$class_creation_7__bases = tmp_assign_source_69;
        }
        {
            PyObject *tmp_assign_source_70;
            tmp_assign_source_70 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_7__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_7__class_decl_dict = tmp_assign_source_70;
        }
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_metaclass_value_8;
            nuitka_bool tmp_condition_result_28;
            int tmp_truth_name_8;
            PyObject *tmp_type_arg_15;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_bases_value_8;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
            tmp_truth_name_8 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_7__bases);
            if (tmp_truth_name_8 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            tmp_condition_result_28 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
            tmp_expression_value_41 = tmp_pyparsing_unicode$class_creation_7__bases;
            tmp_subscript_value_12 = mod_consts[15];
            tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_41, tmp_subscript_value_12, 0);
            if (tmp_type_arg_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
            Py_DECREF(tmp_type_arg_15);
            if (tmp_metaclass_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_8);
            condexpr_end_8:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
            tmp_bases_value_8 = tmp_pyparsing_unicode$class_creation_7__bases;
            tmp_assign_source_71 = SELECT_METACLASS(tmp_metaclass_value_8, tmp_bases_value_8);
            Py_DECREF(tmp_metaclass_value_8);
            if (tmp_assign_source_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            assert(tmp_pyparsing_unicode$class_creation_7__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_7__metaclass = tmp_assign_source_71;
        }
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_expression_value_42;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__metaclass);
            tmp_expression_value_42 = tmp_pyparsing_unicode$class_creation_7__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_42, mod_consts[73]);
            tmp_condition_result_29 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
                goto branch_yes_21;
            } else {
                goto branch_no_21;
            }
        }
        branch_yes_21:;
        {
            PyObject *tmp_assign_source_72;
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_kwargs_value_16;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__metaclass);
            tmp_expression_value_43 = tmp_pyparsing_unicode$class_creation_7__metaclass;
            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[73]);
            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            tmp_tuple_element_33 = mod_consts[107];
            tmp_args_value_16 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
            tmp_tuple_element_33 = tmp_pyparsing_unicode$class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_33);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__class_decl_dict);
            tmp_kwargs_value_16 = tmp_pyparsing_unicode$class_creation_7__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 220;
            tmp_assign_source_72 = CALL_FUNCTION(tmp_called_value_23, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_value_16);
            if (tmp_assign_source_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            assert(tmp_pyparsing_unicode$class_creation_7__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_7__prepared = tmp_assign_source_72;
        }
        {
            bool tmp_condition_result_30;
            PyObject *tmp_operand_value_8;
            PyObject *tmp_expression_value_44;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__prepared);
            tmp_expression_value_44 = tmp_pyparsing_unicode$class_creation_7__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_44, mod_consts[75]);
            tmp_operand_value_8 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            tmp_condition_result_30 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_30 != false) {
                goto branch_yes_22;
            } else {
                goto branch_no_22;
            }
        }
        branch_yes_22:;
        {
            PyObject *tmp_raise_type_8;
            PyObject *tmp_raise_value_8;
            PyObject *tmp_mod_expr_left_8;
            PyObject *tmp_mod_expr_right_8;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_getattr_target_8;
            PyObject *tmp_getattr_attr_8;
            PyObject *tmp_getattr_default_8;
            tmp_raise_type_8 = PyExc_TypeError;
            tmp_mod_expr_left_8 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__metaclass);
            tmp_getattr_target_8 = tmp_pyparsing_unicode$class_creation_7__metaclass;
            tmp_getattr_attr_8 = mod_consts[2];
            tmp_getattr_default_8 = mod_consts[77];
            tmp_tuple_element_34 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_8);
            if (tmp_tuple_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_45;
                PyObject *tmp_type_arg_16;
                PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_34);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__prepared);
                tmp_type_arg_16 = tmp_pyparsing_unicode$class_creation_7__prepared;
                tmp_expression_value_45 = BUILTIN_TYPE1(tmp_type_arg_16);
                assert(!(tmp_expression_value_45 == NULL));
                tmp_tuple_element_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[2]);
                Py_DECREF(tmp_expression_value_45);
                if (tmp_tuple_element_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_34);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_mod_expr_right_8);
            goto try_except_handler_29;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
            Py_DECREF(tmp_mod_expr_right_8);
            if (tmp_raise_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_29;
            }
            exception_type = tmp_raise_type_8;
            Py_INCREF(tmp_raise_type_8);
            exception_value = tmp_raise_value_8;
            exception_lineno = 220;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_29;
        }
        branch_no_22:;
        goto branch_end_21;
        branch_no_21:;
        {
            PyObject *tmp_assign_source_73;
            tmp_assign_source_73 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_7__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_7__prepared = tmp_assign_source_73;
        }
        branch_end_21:;
        {
            PyObject *tmp_set_locals_10;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__prepared);
            tmp_set_locals_10 = tmp_pyparsing_unicode$class_creation_7__prepared;
            locals_pyparsing$unicode$$$class__10_Japanese_220 = tmp_set_locals_10;
            Py_INCREF(tmp_set_locals_10);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_2 = "o";
            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[108];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_2 = "o";
            goto try_except_handler_31;
        }
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_2 = "o";
            goto try_except_handler_31;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_2 = "o";
            goto try_except_handler_31;
        }
        frame_f88053c434f9825bacfa5dcbc69581ec_10 = MAKE_CLASS_FRAME(codeobj_f88053c434f9825bacfa5dcbc69581ec, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f88053c434f9825bacfa5dcbc69581ec_10);
        assert(Py_REFCNT(frame_f88053c434f9825bacfa5dcbc69581ec_10) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST_EMPTY(0);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_3 = "o";
            goto frame_exception_exit_10;
        }
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_ass_subscript_9;
            tmp_ass_subvalue_9 = PyObject_GetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[60]);

            if (tmp_ass_subvalue_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_9 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_9 == NULL)) {
                        tmp_ass_subvalue_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 222;
                        type_description_3 = "o";
                        goto frame_exception_exit_10;
                    }
                    Py_INCREF(tmp_ass_subvalue_9);
                } else {
                    goto frame_exception_exit_10;
                }
            }

            tmp_ass_subscribed_9 = PyObject_GetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_9);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 222;
                type_description_3 = "o";
                goto frame_exception_exit_10;
            }

            if (tmp_ass_subscribed_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_9);

                exception_lineno = 222;
                type_description_3 = "o";
                goto frame_exception_exit_10;
            }
            tmp_ass_subscript_9 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
            Py_DECREF(tmp_ass_subscribed_9);
            Py_DECREF(tmp_ass_subvalue_9);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_3 = "o";
                goto frame_exception_exit_10;
            }
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_tuple_element_35;
            tmp_tuple_element_35 = PyObject_GetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[10]);

            if (tmp_tuple_element_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_35 == NULL)) {
                        tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 224;
                        type_description_3 = "o";
                        goto try_except_handler_32;
                    }
                    Py_INCREF(tmp_tuple_element_35);
                } else {
                    goto try_except_handler_32;
                }
            }

            tmp_assign_source_74 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_74, 0, tmp_tuple_element_35);
            assert(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig = tmp_assign_source_74;
        }
        {
            PyObject *tmp_assign_source_75;
            PyObject *tmp_dircall_arg1_9;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig);
            tmp_dircall_arg1_9 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_9);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
                tmp_assign_source_75 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_3 = "o";
                goto try_except_handler_32;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_1__bases == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_1__bases = tmp_assign_source_75;
        }
        {
            PyObject *tmp_assign_source_76;
            tmp_assign_source_76 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict = tmp_assign_source_76;
        }
        {
            PyObject *tmp_assign_source_77;
            PyObject *tmp_metaclass_value_9;
            nuitka_bool tmp_condition_result_31;
            int tmp_truth_name_9;
            PyObject *tmp_type_arg_17;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_bases_value_9;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            tmp_truth_name_9 = CHECK_IF_TRUE(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            if (tmp_truth_name_9 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_3 = "o";
                goto try_except_handler_32;
            }
            tmp_condition_result_31 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            tmp_expression_value_46 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases;
            tmp_subscript_value_13 = mod_consts[15];
            tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_46, tmp_subscript_value_13, 0);
            if (tmp_type_arg_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_3 = "o";
                goto try_except_handler_32;
            }
            tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
            Py_DECREF(tmp_type_arg_17);
            if (tmp_metaclass_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_3 = "o";
                goto try_except_handler_32;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_9);
            condexpr_end_9:;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            tmp_bases_value_9 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases;
            tmp_assign_source_77 = SELECT_METACLASS(tmp_metaclass_value_9, tmp_bases_value_9);
            Py_DECREF(tmp_metaclass_value_9);
            if (tmp_assign_source_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_3 = "o";
                goto try_except_handler_32;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass = tmp_assign_source_77;
        }
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_expression_value_47;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
            tmp_expression_value_47 = tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_47, mod_consts[73]);
            tmp_condition_result_32 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto branch_yes_23;
            } else {
                goto branch_no_23;
            }
        }
        branch_yes_23:;
        {
            PyObject *tmp_assign_source_78;
            PyObject *tmp_called_value_24;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_args_value_17;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_kwargs_value_17;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
            tmp_expression_value_48 = tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass;
            tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[73]);
            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_3 = "o";
                goto try_except_handler_32;
            }
            tmp_tuple_element_36 = mod_consts[110];
            tmp_args_value_17 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            tmp_tuple_element_36 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_36);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict);
            tmp_kwargs_value_17 = tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict;
            frame_f88053c434f9825bacfa5dcbc69581ec_10->m_frame.f_lineno = 224;
            tmp_assign_source_78 = CALL_FUNCTION(tmp_called_value_24, tmp_args_value_17, tmp_kwargs_value_17);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_value_17);
            if (tmp_assign_source_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_3 = "o";
                goto try_except_handler_32;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_1__prepared = tmp_assign_source_78;
        }
        {
            bool tmp_condition_result_33;
            PyObject *tmp_operand_value_9;
            PyObject *tmp_expression_value_49;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared);
            tmp_expression_value_49 = tmp_pyparsing_unicode$Japanese$class_creation_1__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_49, mod_consts[75]);
            tmp_operand_value_9 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_3 = "o";
                goto try_except_handler_32;
            }
            tmp_condition_result_33 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_33 != false) {
                goto branch_yes_24;
            } else {
                goto branch_no_24;
            }
        }
        branch_yes_24:;
        {
            PyObject *tmp_raise_type_9;
            PyObject *tmp_raise_value_9;
            PyObject *tmp_mod_expr_left_9;
            PyObject *tmp_mod_expr_right_9;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_getattr_target_9;
            PyObject *tmp_getattr_attr_9;
            PyObject *tmp_getattr_default_9;
            tmp_raise_type_9 = PyExc_TypeError;
            tmp_mod_expr_left_9 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
            tmp_getattr_target_9 = tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass;
            tmp_getattr_attr_9 = mod_consts[2];
            tmp_getattr_default_9 = mod_consts[77];
            tmp_tuple_element_37 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_9);
            if (tmp_tuple_element_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_3 = "o";
                goto try_except_handler_32;
            }
            tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_50;
                PyObject *tmp_type_arg_18;
                PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_37);
                CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared);
                tmp_type_arg_18 = tmp_pyparsing_unicode$Japanese$class_creation_1__prepared;
                tmp_expression_value_50 = BUILTIN_TYPE1(tmp_type_arg_18);
                assert(!(tmp_expression_value_50 == NULL));
                tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[2]);
                Py_DECREF(tmp_expression_value_50);
                if (tmp_tuple_element_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;
                    type_description_3 = "o";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_37);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_mod_expr_right_9);
            goto try_except_handler_32;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
            Py_DECREF(tmp_mod_expr_right_9);
            if (tmp_raise_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_3 = "o";
                goto try_except_handler_32;
            }
            exception_type = tmp_raise_type_9;
            Py_INCREF(tmp_raise_type_9);
            exception_value = tmp_raise_value_9;
            exception_lineno = 224;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_3 = "o";
            goto try_except_handler_32;
        }
        branch_no_24:;
        goto branch_end_23;
        branch_no_23:;
        {
            PyObject *tmp_assign_source_79;
            tmp_assign_source_79 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_1__prepared = tmp_assign_source_79;
        }
        branch_end_23:;
        {
            PyObject *tmp_set_locals_11;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared);
            tmp_set_locals_11 = tmp_pyparsing_unicode$Japanese$class_creation_1__prepared;
            locals_pyparsing$unicode$$$class__11_Kanji_224 = tmp_set_locals_11;
            Py_INCREF(tmp_set_locals_11);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Kanji_224, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_3 = "o";
            goto try_except_handler_34;
        }
        tmp_dictset_value = mod_consts[111];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Kanji_224, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_3 = "o";
            goto try_except_handler_34;
        }
        tmp_dictset_value = mod_consts[112];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Kanji_224, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_3 = "o";
            goto try_except_handler_34;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Kanji_224, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_3 = "o";
            goto try_except_handler_34;
        }
        frame_638e7e4295b9659e25e39d564bc3335f_11 = MAKE_CLASS_FRAME(codeobj_638e7e4295b9659e25e39d564bc3335f, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_638e7e4295b9659e25e39d564bc3335f_11);
        assert(Py_REFCNT(frame_638e7e4295b9659e25e39d564bc3335f_11) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST2(mod_consts[113],mod_consts[114]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Kanji_224, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_4 = "o";
            goto frame_exception_exit_11;
        }
        {
            PyObject *tmp_ass_subvalue_10;
            PyObject *tmp_ass_subscribed_10;
            PyObject *tmp_ass_subscript_10;
            tmp_ass_subvalue_10 = PyObject_GetItem(locals_pyparsing$unicode$$$class__11_Kanji_224, mod_consts[60]);

            if (tmp_ass_subvalue_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_10 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_10 == NULL)) {
                        tmp_ass_subvalue_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 226;
                        type_description_4 = "o";
                        goto frame_exception_exit_11;
                    }
                    Py_INCREF(tmp_ass_subvalue_10);
                } else {
                    goto frame_exception_exit_11;
                }
            }

            tmp_ass_subscribed_10 = PyObject_GetItem(locals_pyparsing$unicode$$$class__11_Kanji_224, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_10);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 226;
                type_description_4 = "o";
                goto frame_exception_exit_11;
            }

            if (tmp_ass_subscribed_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_10);

                exception_lineno = 226;
                type_description_4 = "o";
                goto frame_exception_exit_11;
            }
            tmp_ass_subscript_10 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
            Py_DECREF(tmp_ass_subscribed_10);
            Py_DECREF(tmp_ass_subvalue_10);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_4 = "o";
                goto frame_exception_exit_11;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_8;
        frame_exception_exit_11:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_638e7e4295b9659e25e39d564bc3335f_11, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_638e7e4295b9659e25e39d564bc3335f_11->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_638e7e4295b9659e25e39d564bc3335f_11, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_638e7e4295b9659e25e39d564bc3335f_11,
            type_description_4,
            outline_10_var___class__
        );



        assertFrameObject(frame_638e7e4295b9659e25e39d564bc3335f_11);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_10;
        frame_no_exception_8:;
        goto skip_nested_handling_8;
        nested_frame_exit_10:;
        type_description_3 = "o";
        goto try_except_handler_34;
        skip_nested_handling_8:;
        {
            nuitka_bool tmp_condition_result_34;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            tmp_cmp_expr_left_7 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig);
            tmp_cmp_expr_right_7 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig;
            tmp_condition_result_34 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_34 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_3 = "o";
                goto try_except_handler_34;
            }
            if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
                goto branch_yes_25;
            } else {
                goto branch_no_25;
            }
        }
        branch_yes_25:;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__11_Kanji_224, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_3 = "o";
            goto try_except_handler_34;
        }
        branch_no_25:;
        {
            PyObject *tmp_assign_source_80;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
            tmp_called_value_25 = tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass;
            tmp_tuple_element_38 = mod_consts[110];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
            tmp_tuple_element_38 = tmp_pyparsing_unicode$Japanese$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_38);
            tmp_tuple_element_38 = locals_pyparsing$unicode$$$class__11_Kanji_224;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_38);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict);
            tmp_kwargs_value_18 = tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict;
            frame_f88053c434f9825bacfa5dcbc69581ec_10->m_frame.f_lineno = 224;
            tmp_assign_source_80 = CALL_FUNCTION(tmp_called_value_25, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_3 = "o";
                goto try_except_handler_34;
            }
            assert(outline_10_var___class__ == NULL);
            outline_10_var___class__ = tmp_assign_source_80;
        }
        CHECK_OBJECT(outline_10_var___class__);
        tmp_dictset_value = outline_10_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_34;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        Py_DECREF(locals_pyparsing$unicode$$$class__11_Kanji_224);
        locals_pyparsing$unicode$$$class__11_Kanji_224 = NULL;
        goto try_return_handler_33;
        // Exception handler code:
        try_except_handler_34:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__11_Kanji_224);
        locals_pyparsing$unicode$$$class__11_Kanji_224 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_33;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        CHECK_OBJECT(outline_10_var___class__);
        Py_DECREF(outline_10_var___class__);
        outline_10_var___class__ = NULL;
        goto outline_result_11;
        // Exception handler code:
        try_except_handler_33:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_11:;
        exception_lineno = 224;
        goto try_except_handler_32;
        outline_result_11:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[110], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_3 = "o";
            goto try_except_handler_32;
        }
        goto try_end_10;
        // Exception handler code:
        try_except_handler_32:;
        exception_keeper_type_28 = exception_type;
        exception_keeper_value_28 = exception_value;
        exception_keeper_tb_28 = exception_tb;
        exception_keeper_lineno_28 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig);
        tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
        tmp_pyparsing_unicode$Japanese$class_creation_1__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict);
        tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
        tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared);
        tmp_pyparsing_unicode$Japanese$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_28;
        exception_value = exception_keeper_value_28;
        exception_tb = exception_keeper_tb_28;
        exception_lineno = exception_keeper_lineno_28;

        goto frame_exception_exit_10;
        // End of try:
        try_end_10:;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig);
        tmp_pyparsing_unicode$Japanese$class_creation_1__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__bases);
        tmp_pyparsing_unicode$Japanese$class_creation_1__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict);
        tmp_pyparsing_unicode$Japanese$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass);
        tmp_pyparsing_unicode$Japanese$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_1__prepared);
        tmp_pyparsing_unicode$Japanese$class_creation_1__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_81;
            PyObject *tmp_tuple_element_39;
            tmp_tuple_element_39 = PyObject_GetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[10]);

            if (tmp_tuple_element_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_39 == NULL)) {
                        tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 231;
                        type_description_3 = "o";
                        goto try_except_handler_35;
                    }
                    Py_INCREF(tmp_tuple_element_39);
                } else {
                    goto try_except_handler_35;
                }
            }

            tmp_assign_source_81 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_81, 0, tmp_tuple_element_39);
            assert(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig = tmp_assign_source_81;
        }
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_dircall_arg1_10;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig);
            tmp_dircall_arg1_10 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig;
            Py_INCREF(tmp_dircall_arg1_10);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
                tmp_assign_source_82 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_2__bases == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_2__bases = tmp_assign_source_82;
        }
        {
            PyObject *tmp_assign_source_83;
            tmp_assign_source_83 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict = tmp_assign_source_83;
        }
        {
            PyObject *tmp_assign_source_84;
            PyObject *tmp_metaclass_value_10;
            nuitka_bool tmp_condition_result_35;
            int tmp_truth_name_10;
            PyObject *tmp_type_arg_19;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_bases_value_10;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            tmp_truth_name_10 = CHECK_IF_TRUE(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            if (tmp_truth_name_10 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            tmp_condition_result_35 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            tmp_expression_value_51 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases;
            tmp_subscript_value_14 = mod_consts[15];
            tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_51, tmp_subscript_value_14, 0);
            if (tmp_type_arg_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
            Py_DECREF(tmp_type_arg_19);
            if (tmp_metaclass_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_10);
            condexpr_end_10:;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            tmp_bases_value_10 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases;
            tmp_assign_source_84 = SELECT_METACLASS(tmp_metaclass_value_10, tmp_bases_value_10);
            Py_DECREF(tmp_metaclass_value_10);
            if (tmp_assign_source_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass = tmp_assign_source_84;
        }
        {
            nuitka_bool tmp_condition_result_36;
            PyObject *tmp_expression_value_52;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
            tmp_expression_value_52 = tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_52, mod_consts[73]);
            tmp_condition_result_36 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
                goto branch_yes_26;
            } else {
                goto branch_no_26;
            }
        }
        branch_yes_26:;
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_called_value_26;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_args_value_19;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_kwargs_value_19;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
            tmp_expression_value_53 = tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass;
            tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[73]);
            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            tmp_tuple_element_40 = mod_consts[115];
            tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            tmp_tuple_element_40 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_40);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict);
            tmp_kwargs_value_19 = tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict;
            frame_f88053c434f9825bacfa5dcbc69581ec_10->m_frame.f_lineno = 231;
            tmp_assign_source_85 = CALL_FUNCTION(tmp_called_value_26, tmp_args_value_19, tmp_kwargs_value_19);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_value_19);
            if (tmp_assign_source_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_2__prepared = tmp_assign_source_85;
        }
        {
            bool tmp_condition_result_37;
            PyObject *tmp_operand_value_10;
            PyObject *tmp_expression_value_54;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared);
            tmp_expression_value_54 = tmp_pyparsing_unicode$Japanese$class_creation_2__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_54, mod_consts[75]);
            tmp_operand_value_10 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            tmp_condition_result_37 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_37 != false) {
                goto branch_yes_27;
            } else {
                goto branch_no_27;
            }
        }
        branch_yes_27:;
        {
            PyObject *tmp_raise_type_10;
            PyObject *tmp_raise_value_10;
            PyObject *tmp_mod_expr_left_10;
            PyObject *tmp_mod_expr_right_10;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_getattr_target_10;
            PyObject *tmp_getattr_attr_10;
            PyObject *tmp_getattr_default_10;
            tmp_raise_type_10 = PyExc_TypeError;
            tmp_mod_expr_left_10 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
            tmp_getattr_target_10 = tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass;
            tmp_getattr_attr_10 = mod_consts[2];
            tmp_getattr_default_10 = mod_consts[77];
            tmp_tuple_element_41 = BUILTIN_GETATTR(tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_10);
            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_55;
                PyObject *tmp_type_arg_20;
                PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_41);
                CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared);
                tmp_type_arg_20 = tmp_pyparsing_unicode$Japanese$class_creation_2__prepared;
                tmp_expression_value_55 = BUILTIN_TYPE1(tmp_type_arg_20);
                assert(!(tmp_expression_value_55 == NULL));
                tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[2]);
                Py_DECREF(tmp_expression_value_55);
                if (tmp_tuple_element_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 231;
                    type_description_3 = "o";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_41);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_mod_expr_right_10);
            goto try_except_handler_35;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
            Py_DECREF(tmp_mod_expr_right_10);
            if (tmp_raise_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_3 = "o";
                goto try_except_handler_35;
            }
            exception_type = tmp_raise_type_10;
            Py_INCREF(tmp_raise_type_10);
            exception_value = tmp_raise_value_10;
            exception_lineno = 231;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_3 = "o";
            goto try_except_handler_35;
        }
        branch_no_27:;
        goto branch_end_26;
        branch_no_26:;
        {
            PyObject *tmp_assign_source_86;
            tmp_assign_source_86 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_2__prepared = tmp_assign_source_86;
        }
        branch_end_26:;
        {
            PyObject *tmp_set_locals_12;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared);
            tmp_set_locals_12 = tmp_pyparsing_unicode$Japanese$class_creation_2__prepared;
            locals_pyparsing$unicode$$$class__12_Hiragana_231 = tmp_set_locals_12;
            Py_INCREF(tmp_set_locals_12);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__12_Hiragana_231, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_3 = "o";
            goto try_except_handler_37;
        }
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__12_Hiragana_231, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_3 = "o";
            goto try_except_handler_37;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__12_Hiragana_231, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_3 = "o";
            goto try_except_handler_37;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__12_Hiragana_231, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_3 = "o";
            goto try_except_handler_37;
        }
        frame_f33ff6911748fc9e359e7ccf7ac81111_12 = MAKE_CLASS_FRAME(codeobj_f33ff6911748fc9e359e7ccf7ac81111, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f33ff6911748fc9e359e7ccf7ac81111_12);
        assert(Py_REFCNT(frame_f33ff6911748fc9e359e7ccf7ac81111_12) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST7(mod_consts[118]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__12_Hiragana_231, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_4 = "o";
            goto frame_exception_exit_12;
        }
        {
            PyObject *tmp_ass_subvalue_11;
            PyObject *tmp_ass_subscribed_11;
            PyObject *tmp_ass_subscript_11;
            tmp_ass_subvalue_11 = PyObject_GetItem(locals_pyparsing$unicode$$$class__12_Hiragana_231, mod_consts[60]);

            if (tmp_ass_subvalue_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_11 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_11 == NULL)) {
                        tmp_ass_subvalue_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 233;
                        type_description_4 = "o";
                        goto frame_exception_exit_12;
                    }
                    Py_INCREF(tmp_ass_subvalue_11);
                } else {
                    goto frame_exception_exit_12;
                }
            }

            tmp_ass_subscribed_11 = PyObject_GetItem(locals_pyparsing$unicode$$$class__12_Hiragana_231, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_11);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 233;
                type_description_4 = "o";
                goto frame_exception_exit_12;
            }

            if (tmp_ass_subscribed_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_11);

                exception_lineno = 233;
                type_description_4 = "o";
                goto frame_exception_exit_12;
            }
            tmp_ass_subscript_11 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
            Py_DECREF(tmp_ass_subscribed_11);
            Py_DECREF(tmp_ass_subvalue_11);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_4 = "o";
                goto frame_exception_exit_12;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_9;
        frame_exception_exit_12:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f33ff6911748fc9e359e7ccf7ac81111_12, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f33ff6911748fc9e359e7ccf7ac81111_12->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f33ff6911748fc9e359e7ccf7ac81111_12, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f33ff6911748fc9e359e7ccf7ac81111_12,
            type_description_4,
            outline_11_var___class__
        );



        assertFrameObject(frame_f33ff6911748fc9e359e7ccf7ac81111_12);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_11;
        frame_no_exception_9:;
        goto skip_nested_handling_9;
        nested_frame_exit_11:;
        type_description_3 = "o";
        goto try_except_handler_37;
        skip_nested_handling_9:;
        {
            nuitka_bool tmp_condition_result_38;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            tmp_cmp_expr_left_8 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig);
            tmp_cmp_expr_right_8 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig;
            tmp_condition_result_38 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_3 = "o";
                goto try_except_handler_37;
            }
            if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
                goto branch_yes_28;
            } else {
                goto branch_no_28;
            }
        }
        branch_yes_28:;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__12_Hiragana_231, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_3 = "o";
            goto try_except_handler_37;
        }
        branch_no_28:;
        {
            PyObject *tmp_assign_source_87;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
            tmp_called_value_27 = tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass;
            tmp_tuple_element_42 = mod_consts[115];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
            tmp_tuple_element_42 = tmp_pyparsing_unicode$Japanese$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_42);
            tmp_tuple_element_42 = locals_pyparsing$unicode$$$class__12_Hiragana_231;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_42);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict);
            tmp_kwargs_value_20 = tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict;
            frame_f88053c434f9825bacfa5dcbc69581ec_10->m_frame.f_lineno = 231;
            tmp_assign_source_87 = CALL_FUNCTION(tmp_called_value_27, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_3 = "o";
                goto try_except_handler_37;
            }
            assert(outline_11_var___class__ == NULL);
            outline_11_var___class__ = tmp_assign_source_87;
        }
        CHECK_OBJECT(outline_11_var___class__);
        tmp_dictset_value = outline_11_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_37;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        Py_DECREF(locals_pyparsing$unicode$$$class__12_Hiragana_231);
        locals_pyparsing$unicode$$$class__12_Hiragana_231 = NULL;
        goto try_return_handler_36;
        // Exception handler code:
        try_except_handler_37:;
        exception_keeper_type_29 = exception_type;
        exception_keeper_value_29 = exception_value;
        exception_keeper_tb_29 = exception_tb;
        exception_keeper_lineno_29 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__12_Hiragana_231);
        locals_pyparsing$unicode$$$class__12_Hiragana_231 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_29;
        exception_value = exception_keeper_value_29;
        exception_tb = exception_keeper_tb_29;
        exception_lineno = exception_keeper_lineno_29;

        goto try_except_handler_36;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        CHECK_OBJECT(outline_11_var___class__);
        Py_DECREF(outline_11_var___class__);
        outline_11_var___class__ = NULL;
        goto outline_result_12;
        // Exception handler code:
        try_except_handler_36:;
        exception_keeper_type_30 = exception_type;
        exception_keeper_value_30 = exception_value;
        exception_keeper_tb_30 = exception_tb;
        exception_keeper_lineno_30 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_30;
        exception_value = exception_keeper_value_30;
        exception_tb = exception_keeper_tb_30;
        exception_lineno = exception_keeper_lineno_30;

        goto outline_exception_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_12:;
        exception_lineno = 231;
        goto try_except_handler_35;
        outline_result_12:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[115], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_3 = "o";
            goto try_except_handler_35;
        }
        goto try_end_11;
        // Exception handler code:
        try_except_handler_35:;
        exception_keeper_type_31 = exception_type;
        exception_keeper_value_31 = exception_value;
        exception_keeper_tb_31 = exception_tb;
        exception_keeper_lineno_31 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig);
        tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
        tmp_pyparsing_unicode$Japanese$class_creation_2__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict);
        tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
        tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared);
        tmp_pyparsing_unicode$Japanese$class_creation_2__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_31;
        exception_value = exception_keeper_value_31;
        exception_tb = exception_keeper_tb_31;
        exception_lineno = exception_keeper_lineno_31;

        goto frame_exception_exit_10;
        // End of try:
        try_end_11:;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig);
        tmp_pyparsing_unicode$Japanese$class_creation_2__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__bases);
        tmp_pyparsing_unicode$Japanese$class_creation_2__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict);
        tmp_pyparsing_unicode$Japanese$class_creation_2__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass);
        tmp_pyparsing_unicode$Japanese$class_creation_2__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_2__prepared);
        tmp_pyparsing_unicode$Japanese$class_creation_2__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_88;
            PyObject *tmp_tuple_element_43;
            tmp_tuple_element_43 = PyObject_GetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[10]);

            if (tmp_tuple_element_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_43 == NULL)) {
                        tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 243;
                        type_description_3 = "o";
                        goto try_except_handler_38;
                    }
                    Py_INCREF(tmp_tuple_element_43);
                } else {
                    goto try_except_handler_38;
                }
            }

            tmp_assign_source_88 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_88, 0, tmp_tuple_element_43);
            assert(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig = tmp_assign_source_88;
        }
        {
            PyObject *tmp_assign_source_89;
            PyObject *tmp_dircall_arg1_11;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig);
            tmp_dircall_arg1_11 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig;
            Py_INCREF(tmp_dircall_arg1_11);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
                tmp_assign_source_89 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_3__bases == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_3__bases = tmp_assign_source_89;
        }
        {
            PyObject *tmp_assign_source_90;
            tmp_assign_source_90 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict = tmp_assign_source_90;
        }
        {
            PyObject *tmp_assign_source_91;
            PyObject *tmp_metaclass_value_11;
            nuitka_bool tmp_condition_result_39;
            int tmp_truth_name_11;
            PyObject *tmp_type_arg_21;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_bases_value_11;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            tmp_truth_name_11 = CHECK_IF_TRUE(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            if (tmp_truth_name_11 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            tmp_condition_result_39 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            tmp_expression_value_56 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases;
            tmp_subscript_value_15 = mod_consts[15];
            tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_56, tmp_subscript_value_15, 0);
            if (tmp_type_arg_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
            Py_DECREF(tmp_type_arg_21);
            if (tmp_metaclass_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_11);
            condexpr_end_11:;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            tmp_bases_value_11 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases;
            tmp_assign_source_91 = SELECT_METACLASS(tmp_metaclass_value_11, tmp_bases_value_11);
            Py_DECREF(tmp_metaclass_value_11);
            if (tmp_assign_source_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass = tmp_assign_source_91;
        }
        {
            nuitka_bool tmp_condition_result_40;
            PyObject *tmp_expression_value_57;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
            tmp_expression_value_57 = tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_57, mod_consts[73]);
            tmp_condition_result_40 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
                goto branch_yes_29;
            } else {
                goto branch_no_29;
            }
        }
        branch_yes_29:;
        {
            PyObject *tmp_assign_source_92;
            PyObject *tmp_called_value_28;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_args_value_21;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_kwargs_value_21;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
            tmp_expression_value_58 = tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass;
            tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[73]);
            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            tmp_tuple_element_44 = mod_consts[119];
            tmp_args_value_21 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            tmp_tuple_element_44 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_44);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict);
            tmp_kwargs_value_21 = tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict;
            frame_f88053c434f9825bacfa5dcbc69581ec_10->m_frame.f_lineno = 243;
            tmp_assign_source_92 = CALL_FUNCTION(tmp_called_value_28, tmp_args_value_21, tmp_kwargs_value_21);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_value_21);
            if (tmp_assign_source_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            assert(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_3__prepared = tmp_assign_source_92;
        }
        {
            bool tmp_condition_result_41;
            PyObject *tmp_operand_value_11;
            PyObject *tmp_expression_value_59;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared);
            tmp_expression_value_59 = tmp_pyparsing_unicode$Japanese$class_creation_3__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_59, mod_consts[75]);
            tmp_operand_value_11 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            tmp_condition_result_41 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_41 != false) {
                goto branch_yes_30;
            } else {
                goto branch_no_30;
            }
        }
        branch_yes_30:;
        {
            PyObject *tmp_raise_type_11;
            PyObject *tmp_raise_value_11;
            PyObject *tmp_mod_expr_left_11;
            PyObject *tmp_mod_expr_right_11;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_getattr_target_11;
            PyObject *tmp_getattr_attr_11;
            PyObject *tmp_getattr_default_11;
            tmp_raise_type_11 = PyExc_TypeError;
            tmp_mod_expr_left_11 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
            tmp_getattr_target_11 = tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass;
            tmp_getattr_attr_11 = mod_consts[2];
            tmp_getattr_default_11 = mod_consts[77];
            tmp_tuple_element_45 = BUILTIN_GETATTR(tmp_getattr_target_11, tmp_getattr_attr_11, tmp_getattr_default_11);
            if (tmp_tuple_element_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_60;
                PyObject *tmp_type_arg_22;
                PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_45);
                CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared);
                tmp_type_arg_22 = tmp_pyparsing_unicode$Japanese$class_creation_3__prepared;
                tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_22);
                assert(!(tmp_expression_value_60 == NULL));
                tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[2]);
                Py_DECREF(tmp_expression_value_60);
                if (tmp_tuple_element_45 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;
                    type_description_3 = "o";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_45);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_mod_expr_right_11);
            goto try_except_handler_38;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
            Py_DECREF(tmp_mod_expr_right_11);
            if (tmp_raise_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_3 = "o";
                goto try_except_handler_38;
            }
            exception_type = tmp_raise_type_11;
            Py_INCREF(tmp_raise_type_11);
            exception_value = tmp_raise_value_11;
            exception_lineno = 243;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_3 = "o";
            goto try_except_handler_38;
        }
        branch_no_30:;
        goto branch_end_29;
        branch_no_29:;
        {
            PyObject *tmp_assign_source_93;
            tmp_assign_source_93 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared == NULL);
            tmp_pyparsing_unicode$Japanese$class_creation_3__prepared = tmp_assign_source_93;
        }
        branch_end_29:;
        {
            PyObject *tmp_set_locals_13;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared);
            tmp_set_locals_13 = tmp_pyparsing_unicode$Japanese$class_creation_3__prepared;
            locals_pyparsing$unicode$$$class__13_Katakana_243 = tmp_set_locals_13;
            Py_INCREF(tmp_set_locals_13);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__13_Katakana_243, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_3 = "o";
            goto try_except_handler_40;
        }
        tmp_dictset_value = mod_consts[120];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__13_Katakana_243, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_3 = "o";
            goto try_except_handler_40;
        }
        tmp_dictset_value = mod_consts[121];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__13_Katakana_243, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_3 = "o";
            goto try_except_handler_40;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__13_Katakana_243, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_3 = "o";
            goto try_except_handler_40;
        }
        frame_d2e7f470a82f56e325e2d63da4737b02_13 = MAKE_CLASS_FRAME(codeobj_d2e7f470a82f56e325e2d63da4737b02, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d2e7f470a82f56e325e2d63da4737b02_13);
        assert(Py_REFCNT(frame_d2e7f470a82f56e325e2d63da4737b02_13) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST9(mod_consts[122]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__13_Katakana_243, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_4 = "o";
            goto frame_exception_exit_13;
        }
        {
            PyObject *tmp_ass_subvalue_12;
            PyObject *tmp_ass_subscribed_12;
            PyObject *tmp_ass_subscript_12;
            tmp_ass_subvalue_12 = PyObject_GetItem(locals_pyparsing$unicode$$$class__13_Katakana_243, mod_consts[60]);

            if (tmp_ass_subvalue_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_12 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_12 == NULL)) {
                        tmp_ass_subvalue_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 245;
                        type_description_4 = "o";
                        goto frame_exception_exit_13;
                    }
                    Py_INCREF(tmp_ass_subvalue_12);
                } else {
                    goto frame_exception_exit_13;
                }
            }

            tmp_ass_subscribed_12 = PyObject_GetItem(locals_pyparsing$unicode$$$class__13_Katakana_243, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_12);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 245;
                type_description_4 = "o";
                goto frame_exception_exit_13;
            }

            if (tmp_ass_subscribed_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_12);

                exception_lineno = 245;
                type_description_4 = "o";
                goto frame_exception_exit_13;
            }
            tmp_ass_subscript_12 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
            Py_DECREF(tmp_ass_subscribed_12);
            Py_DECREF(tmp_ass_subvalue_12);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_4 = "o";
                goto frame_exception_exit_13;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_10;
        frame_exception_exit_13:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d2e7f470a82f56e325e2d63da4737b02_13, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d2e7f470a82f56e325e2d63da4737b02_13->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d2e7f470a82f56e325e2d63da4737b02_13, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d2e7f470a82f56e325e2d63da4737b02_13,
            type_description_4,
            outline_12_var___class__
        );



        assertFrameObject(frame_d2e7f470a82f56e325e2d63da4737b02_13);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_12;
        frame_no_exception_10:;
        goto skip_nested_handling_10;
        nested_frame_exit_12:;
        type_description_3 = "o";
        goto try_except_handler_40;
        skip_nested_handling_10:;
        {
            nuitka_bool tmp_condition_result_42;
            PyObject *tmp_cmp_expr_left_9;
            PyObject *tmp_cmp_expr_right_9;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            tmp_cmp_expr_left_9 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig);
            tmp_cmp_expr_right_9 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig;
            tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
            if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_3 = "o";
                goto try_except_handler_40;
            }
            if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
                goto branch_yes_31;
            } else {
                goto branch_no_31;
            }
        }
        branch_yes_31:;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__13_Katakana_243, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_3 = "o";
            goto try_except_handler_40;
        }
        branch_no_31:;
        {
            PyObject *tmp_assign_source_94;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_value_22;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_kwargs_value_22;
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
            tmp_called_value_29 = tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass;
            tmp_tuple_element_46 = mod_consts[119];
            tmp_args_value_22 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
            tmp_tuple_element_46 = tmp_pyparsing_unicode$Japanese$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_46);
            tmp_tuple_element_46 = locals_pyparsing$unicode$$$class__13_Katakana_243;
            PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_46);
            CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict);
            tmp_kwargs_value_22 = tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict;
            frame_f88053c434f9825bacfa5dcbc69581ec_10->m_frame.f_lineno = 243;
            tmp_assign_source_94 = CALL_FUNCTION(tmp_called_value_29, tmp_args_value_22, tmp_kwargs_value_22);
            Py_DECREF(tmp_args_value_22);
            if (tmp_assign_source_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_3 = "o";
                goto try_except_handler_40;
            }
            assert(outline_12_var___class__ == NULL);
            outline_12_var___class__ = tmp_assign_source_94;
        }
        CHECK_OBJECT(outline_12_var___class__);
        tmp_dictset_value = outline_12_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_40;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_40:;
        Py_DECREF(locals_pyparsing$unicode$$$class__13_Katakana_243);
        locals_pyparsing$unicode$$$class__13_Katakana_243 = NULL;
        goto try_return_handler_39;
        // Exception handler code:
        try_except_handler_40:;
        exception_keeper_type_32 = exception_type;
        exception_keeper_value_32 = exception_value;
        exception_keeper_tb_32 = exception_tb;
        exception_keeper_lineno_32 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__13_Katakana_243);
        locals_pyparsing$unicode$$$class__13_Katakana_243 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_32;
        exception_value = exception_keeper_value_32;
        exception_tb = exception_keeper_tb_32;
        exception_lineno = exception_keeper_lineno_32;

        goto try_except_handler_39;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_39:;
        CHECK_OBJECT(outline_12_var___class__);
        Py_DECREF(outline_12_var___class__);
        outline_12_var___class__ = NULL;
        goto outline_result_13;
        // Exception handler code:
        try_except_handler_39:;
        exception_keeper_type_33 = exception_type;
        exception_keeper_value_33 = exception_value;
        exception_keeper_tb_33 = exception_tb;
        exception_keeper_lineno_33 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_33;
        exception_value = exception_keeper_value_33;
        exception_tb = exception_keeper_tb_33;
        exception_lineno = exception_keeper_lineno_33;

        goto outline_exception_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_13:;
        exception_lineno = 243;
        goto try_except_handler_38;
        outline_result_13:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[119], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_3 = "o";
            goto try_except_handler_38;
        }
        goto try_end_12;
        // Exception handler code:
        try_except_handler_38:;
        exception_keeper_type_34 = exception_type;
        exception_keeper_value_34 = exception_value;
        exception_keeper_tb_34 = exception_tb;
        exception_keeper_lineno_34 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig);
        tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
        tmp_pyparsing_unicode$Japanese$class_creation_3__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict);
        tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
        tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared);
        tmp_pyparsing_unicode$Japanese$class_creation_3__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_34;
        exception_value = exception_keeper_value_34;
        exception_tb = exception_keeper_tb_34;
        exception_lineno = exception_keeper_lineno_34;

        goto frame_exception_exit_10;
        // End of try:
        try_end_12:;


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_11;
        frame_exception_exit_10:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f88053c434f9825bacfa5dcbc69581ec_10, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f88053c434f9825bacfa5dcbc69581ec_10->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f88053c434f9825bacfa5dcbc69581ec_10, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f88053c434f9825bacfa5dcbc69581ec_10,
            type_description_3,
            outline_9_var___class__
        );



        assertFrameObject(frame_f88053c434f9825bacfa5dcbc69581ec_10);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_9;
        frame_no_exception_11:;
        goto skip_nested_handling_11;
        nested_frame_exit_9:;
        type_description_2 = "o";
        goto try_except_handler_31;
        skip_nested_handling_11:;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig);
        tmp_pyparsing_unicode$Japanese$class_creation_3__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__bases);
        tmp_pyparsing_unicode$Japanese$class_creation_3__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict);
        tmp_pyparsing_unicode$Japanese$class_creation_3__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass);
        tmp_pyparsing_unicode$Japanese$class_creation_3__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared);
        Py_DECREF(tmp_pyparsing_unicode$Japanese$class_creation_3__prepared);
        tmp_pyparsing_unicode$Japanese$class_creation_3__prepared = NULL;
        {
            nuitka_bool tmp_condition_result_43;
            PyObject *tmp_cmp_expr_left_10;
            PyObject *tmp_cmp_expr_right_10;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
            tmp_cmp_expr_left_10 = tmp_pyparsing_unicode$class_creation_7__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases_orig);
            tmp_cmp_expr_right_10 = tmp_pyparsing_unicode$class_creation_7__bases_orig;
            tmp_condition_result_43 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
            if (tmp_condition_result_43 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_31;
            }
            if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
                goto branch_yes_32;
            } else {
                goto branch_no_32;
            }
        }
        branch_yes_32:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_7__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__10_Japanese_220, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_2 = "o";
            goto try_except_handler_31;
        }
        branch_no_32:;
        {
            PyObject *tmp_assign_source_95;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_value_23;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_kwargs_value_23;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__metaclass);
            tmp_called_value_30 = tmp_pyparsing_unicode$class_creation_7__metaclass;
            tmp_tuple_element_47 = mod_consts[107];
            tmp_args_value_23 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
            tmp_tuple_element_47 = tmp_pyparsing_unicode$class_creation_7__bases;
            PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_47);
            tmp_tuple_element_47 = locals_pyparsing$unicode$$$class__10_Japanese_220;
            PyTuple_SET_ITEM0(tmp_args_value_23, 2, tmp_tuple_element_47);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__class_decl_dict);
            tmp_kwargs_value_23 = tmp_pyparsing_unicode$class_creation_7__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 220;
            tmp_assign_source_95 = CALL_FUNCTION(tmp_called_value_30, tmp_args_value_23, tmp_kwargs_value_23);
            Py_DECREF(tmp_args_value_23);
            if (tmp_assign_source_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto try_except_handler_31;
            }
            assert(outline_9_var___class__ == NULL);
            outline_9_var___class__ = tmp_assign_source_95;
        }
        CHECK_OBJECT(outline_9_var___class__);
        tmp_dictset_value = outline_9_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_31;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        Py_DECREF(locals_pyparsing$unicode$$$class__10_Japanese_220);
        locals_pyparsing$unicode$$$class__10_Japanese_220 = NULL;
        goto try_return_handler_30;
        // Exception handler code:
        try_except_handler_31:;
        exception_keeper_type_35 = exception_type;
        exception_keeper_value_35 = exception_value;
        exception_keeper_tb_35 = exception_tb;
        exception_keeper_lineno_35 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__10_Japanese_220);
        locals_pyparsing$unicode$$$class__10_Japanese_220 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_35;
        exception_value = exception_keeper_value_35;
        exception_tb = exception_keeper_tb_35;
        exception_lineno = exception_keeper_lineno_35;

        goto try_except_handler_30;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT(outline_9_var___class__);
        Py_DECREF(outline_9_var___class__);
        outline_9_var___class__ = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_30:;
        exception_keeper_type_36 = exception_type;
        exception_keeper_value_36 = exception_value;
        exception_keeper_tb_36 = exception_tb;
        exception_keeper_lineno_36 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_36;
        exception_value = exception_keeper_value_36;
        exception_tb = exception_keeper_tb_36;
        exception_lineno = exception_keeper_lineno_36;

        goto outline_exception_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_10:;
        exception_lineno = 220;
        goto try_except_handler_29;
        outline_result_10:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[107], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_2 = "o";
            goto try_except_handler_29;
        }
        goto try_end_13;
        // Exception handler code:
        try_except_handler_29:;
        exception_keeper_type_37 = exception_type;
        exception_keeper_value_37 = exception_value;
        exception_keeper_tb_37 = exception_tb;
        exception_keeper_lineno_37 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_7__bases_orig);
        tmp_pyparsing_unicode$class_creation_7__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_7__bases);
        tmp_pyparsing_unicode$class_creation_7__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_7__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_7__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_7__metaclass);
        tmp_pyparsing_unicode$class_creation_7__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_7__prepared);
        tmp_pyparsing_unicode$class_creation_7__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_37;
        exception_value = exception_keeper_value_37;
        exception_tb = exception_keeper_tb_37;
        exception_lineno = exception_keeper_lineno_37;

        goto frame_exception_exit_3;
        // End of try:
        try_end_13:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_7__bases_orig);
        tmp_pyparsing_unicode$class_creation_7__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_7__bases);
        tmp_pyparsing_unicode$class_creation_7__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_7__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_7__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_7__metaclass);
        tmp_pyparsing_unicode$class_creation_7__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_7__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_7__prepared);
        tmp_pyparsing_unicode$class_creation_7__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_tuple_element_48;
            tmp_tuple_element_48 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[10]);

            if (tmp_tuple_element_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_48 == NULL)) {
                        tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 257;
                        type_description_2 = "o";
                        goto try_except_handler_41;
                    }
                    Py_INCREF(tmp_tuple_element_48);
                } else {
                    goto try_except_handler_41;
                }
            }

            tmp_assign_source_96 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_96, 0, tmp_tuple_element_48);
            assert(tmp_pyparsing_unicode$class_creation_8__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_8__bases_orig = tmp_assign_source_96;
        }
        {
            PyObject *tmp_assign_source_97;
            PyObject *tmp_dircall_arg1_12;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases_orig);
            tmp_dircall_arg1_12 = tmp_pyparsing_unicode$class_creation_8__bases_orig;
            Py_INCREF(tmp_dircall_arg1_12);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
                tmp_assign_source_97 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_97 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_41;
            }
            assert(tmp_pyparsing_unicode$class_creation_8__bases == NULL);
            tmp_pyparsing_unicode$class_creation_8__bases = tmp_assign_source_97;
        }
        {
            PyObject *tmp_assign_source_98;
            tmp_assign_source_98 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_8__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_8__class_decl_dict = tmp_assign_source_98;
        }
        {
            PyObject *tmp_assign_source_99;
            PyObject *tmp_metaclass_value_12;
            nuitka_bool tmp_condition_result_44;
            int tmp_truth_name_12;
            PyObject *tmp_type_arg_23;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_bases_value_12;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
            tmp_truth_name_12 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_8__bases);
            if (tmp_truth_name_12 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_41;
            }
            tmp_condition_result_44 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
            tmp_expression_value_61 = tmp_pyparsing_unicode$class_creation_8__bases;
            tmp_subscript_value_16 = mod_consts[15];
            tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_61, tmp_subscript_value_16, 0);
            if (tmp_type_arg_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_41;
            }
            tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
            Py_DECREF(tmp_type_arg_23);
            if (tmp_metaclass_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_41;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_12);
            condexpr_end_12:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
            tmp_bases_value_12 = tmp_pyparsing_unicode$class_creation_8__bases;
            tmp_assign_source_99 = SELECT_METACLASS(tmp_metaclass_value_12, tmp_bases_value_12);
            Py_DECREF(tmp_metaclass_value_12);
            if (tmp_assign_source_99 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_41;
            }
            assert(tmp_pyparsing_unicode$class_creation_8__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_8__metaclass = tmp_assign_source_99;
        }
        {
            nuitka_bool tmp_condition_result_45;
            PyObject *tmp_expression_value_62;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__metaclass);
            tmp_expression_value_62 = tmp_pyparsing_unicode$class_creation_8__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_62, mod_consts[73]);
            tmp_condition_result_45 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_45 == NUITKA_BOOL_TRUE) {
                goto branch_yes_33;
            } else {
                goto branch_no_33;
            }
        }
        branch_yes_33:;
        {
            PyObject *tmp_assign_source_100;
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_args_value_24;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_kwargs_value_24;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__metaclass);
            tmp_expression_value_63 = tmp_pyparsing_unicode$class_creation_8__metaclass;
            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[73]);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_41;
            }
            tmp_tuple_element_49 = mod_consts[123];
            tmp_args_value_24 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
            tmp_tuple_element_49 = tmp_pyparsing_unicode$class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_49);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__class_decl_dict);
            tmp_kwargs_value_24 = tmp_pyparsing_unicode$class_creation_8__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 257;
            tmp_assign_source_100 = CALL_FUNCTION(tmp_called_value_31, tmp_args_value_24, tmp_kwargs_value_24);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_value_24);
            if (tmp_assign_source_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_41;
            }
            assert(tmp_pyparsing_unicode$class_creation_8__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_8__prepared = tmp_assign_source_100;
        }
        {
            bool tmp_condition_result_46;
            PyObject *tmp_operand_value_12;
            PyObject *tmp_expression_value_64;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__prepared);
            tmp_expression_value_64 = tmp_pyparsing_unicode$class_creation_8__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_64, mod_consts[75]);
            tmp_operand_value_12 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_41;
            }
            tmp_condition_result_46 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_46 != false) {
                goto branch_yes_34;
            } else {
                goto branch_no_34;
            }
        }
        branch_yes_34:;
        {
            PyObject *tmp_raise_type_12;
            PyObject *tmp_raise_value_12;
            PyObject *tmp_mod_expr_left_12;
            PyObject *tmp_mod_expr_right_12;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_getattr_target_12;
            PyObject *tmp_getattr_attr_12;
            PyObject *tmp_getattr_default_12;
            tmp_raise_type_12 = PyExc_TypeError;
            tmp_mod_expr_left_12 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__metaclass);
            tmp_getattr_target_12 = tmp_pyparsing_unicode$class_creation_8__metaclass;
            tmp_getattr_attr_12 = mod_consts[2];
            tmp_getattr_default_12 = mod_consts[77];
            tmp_tuple_element_50 = BUILTIN_GETATTR(tmp_getattr_target_12, tmp_getattr_attr_12, tmp_getattr_default_12);
            if (tmp_tuple_element_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_41;
            }
            tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_65;
                PyObject *tmp_type_arg_24;
                PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_50);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__prepared);
                tmp_type_arg_24 = tmp_pyparsing_unicode$class_creation_8__prepared;
                tmp_expression_value_65 = BUILTIN_TYPE1(tmp_type_arg_24);
                assert(!(tmp_expression_value_65 == NULL));
                tmp_tuple_element_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[2]);
                Py_DECREF(tmp_expression_value_65);
                if (tmp_tuple_element_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 257;
                    type_description_2 = "o";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_50);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_mod_expr_right_12);
            goto try_except_handler_41;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
            Py_DECREF(tmp_mod_expr_right_12);
            if (tmp_raise_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_41;
            }
            exception_type = tmp_raise_type_12;
            Py_INCREF(tmp_raise_type_12);
            exception_value = tmp_raise_value_12;
            exception_lineno = 257;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_41;
        }
        branch_no_34:;
        goto branch_end_33;
        branch_no_33:;
        {
            PyObject *tmp_assign_source_101;
            tmp_assign_source_101 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_8__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_8__prepared = tmp_assign_source_101;
        }
        branch_end_33:;
        {
            PyObject *tmp_set_locals_14;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__prepared);
            tmp_set_locals_14 = tmp_pyparsing_unicode$class_creation_8__prepared;
            locals_pyparsing$unicode$$$class__14_Hangul_257 = tmp_set_locals_14;
            Py_INCREF(tmp_set_locals_14);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__14_Hangul_257, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_2 = "o";
            goto try_except_handler_43;
        }
        tmp_dictset_value = mod_consts[124];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__14_Hangul_257, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_2 = "o";
            goto try_except_handler_43;
        }
        tmp_dictset_value = mod_consts[125];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__14_Hangul_257, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_2 = "o";
            goto try_except_handler_43;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__14_Hangul_257, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_2 = "o";
            goto try_except_handler_43;
        }
        frame_c19df7352f6c609e626430f5369eee60_14 = MAKE_CLASS_FRAME(codeobj_c19df7352f6c609e626430f5369eee60, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c19df7352f6c609e626430f5369eee60_14);
        assert(Py_REFCNT(frame_c19df7352f6c609e626430f5369eee60_14) == 2);

        // Framed code:
        tmp_dictset_value = LIST_COPY(mod_consts[126]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__14_Hangul_257, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_3 = "o";
            goto frame_exception_exit_14;
        }
        {
            PyObject *tmp_ass_subvalue_13;
            PyObject *tmp_ass_subscribed_13;
            PyObject *tmp_ass_subscript_13;
            tmp_ass_subvalue_13 = PyObject_GetItem(locals_pyparsing$unicode$$$class__14_Hangul_257, mod_consts[60]);

            if (tmp_ass_subvalue_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_13 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_13 == NULL)) {
                        tmp_ass_subvalue_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 259;
                        type_description_3 = "o";
                        goto frame_exception_exit_14;
                    }
                    Py_INCREF(tmp_ass_subvalue_13);
                } else {
                    goto frame_exception_exit_14;
                }
            }

            tmp_ass_subscribed_13 = PyObject_GetItem(locals_pyparsing$unicode$$$class__14_Hangul_257, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_13);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 259;
                type_description_3 = "o";
                goto frame_exception_exit_14;
            }

            if (tmp_ass_subscribed_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_13);

                exception_lineno = 259;
                type_description_3 = "o";
                goto frame_exception_exit_14;
            }
            tmp_ass_subscript_13 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
            Py_DECREF(tmp_ass_subscribed_13);
            Py_DECREF(tmp_ass_subvalue_13);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_3 = "o";
                goto frame_exception_exit_14;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_12;
        frame_exception_exit_14:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c19df7352f6c609e626430f5369eee60_14, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c19df7352f6c609e626430f5369eee60_14->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c19df7352f6c609e626430f5369eee60_14, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c19df7352f6c609e626430f5369eee60_14,
            type_description_3,
            outline_13_var___class__
        );



        assertFrameObject(frame_c19df7352f6c609e626430f5369eee60_14);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_13;
        frame_no_exception_12:;
        goto skip_nested_handling_12;
        nested_frame_exit_13:;
        type_description_2 = "o";
        goto try_except_handler_43;
        skip_nested_handling_12:;
        {
            nuitka_bool tmp_condition_result_47;
            PyObject *tmp_cmp_expr_left_11;
            PyObject *tmp_cmp_expr_right_11;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
            tmp_cmp_expr_left_11 = tmp_pyparsing_unicode$class_creation_8__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases_orig);
            tmp_cmp_expr_right_11 = tmp_pyparsing_unicode$class_creation_8__bases_orig;
            tmp_condition_result_47 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
            if (tmp_condition_result_47 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_43;
            }
            if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
                goto branch_yes_35;
            } else {
                goto branch_no_35;
            }
        }
        branch_yes_35:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_8__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__14_Hangul_257, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_2 = "o";
            goto try_except_handler_43;
        }
        branch_no_35:;
        {
            PyObject *tmp_assign_source_102;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_value_25;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_kwargs_value_25;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__metaclass);
            tmp_called_value_32 = tmp_pyparsing_unicode$class_creation_8__metaclass;
            tmp_tuple_element_51 = mod_consts[123];
            tmp_args_value_25 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
            tmp_tuple_element_51 = tmp_pyparsing_unicode$class_creation_8__bases;
            PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = locals_pyparsing$unicode$$$class__14_Hangul_257;
            PyTuple_SET_ITEM0(tmp_args_value_25, 2, tmp_tuple_element_51);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__class_decl_dict);
            tmp_kwargs_value_25 = tmp_pyparsing_unicode$class_creation_8__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 257;
            tmp_assign_source_102 = CALL_FUNCTION(tmp_called_value_32, tmp_args_value_25, tmp_kwargs_value_25);
            Py_DECREF(tmp_args_value_25);
            if (tmp_assign_source_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto try_except_handler_43;
            }
            assert(outline_13_var___class__ == NULL);
            outline_13_var___class__ = tmp_assign_source_102;
        }
        CHECK_OBJECT(outline_13_var___class__);
        tmp_dictset_value = outline_13_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_43;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_43:;
        Py_DECREF(locals_pyparsing$unicode$$$class__14_Hangul_257);
        locals_pyparsing$unicode$$$class__14_Hangul_257 = NULL;
        goto try_return_handler_42;
        // Exception handler code:
        try_except_handler_43:;
        exception_keeper_type_38 = exception_type;
        exception_keeper_value_38 = exception_value;
        exception_keeper_tb_38 = exception_tb;
        exception_keeper_lineno_38 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__14_Hangul_257);
        locals_pyparsing$unicode$$$class__14_Hangul_257 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_38;
        exception_value = exception_keeper_value_38;
        exception_tb = exception_keeper_tb_38;
        exception_lineno = exception_keeper_lineno_38;

        goto try_except_handler_42;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        CHECK_OBJECT(outline_13_var___class__);
        Py_DECREF(outline_13_var___class__);
        outline_13_var___class__ = NULL;
        goto outline_result_14;
        // Exception handler code:
        try_except_handler_42:;
        exception_keeper_type_39 = exception_type;
        exception_keeper_value_39 = exception_value;
        exception_keeper_tb_39 = exception_tb;
        exception_keeper_lineno_39 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_39;
        exception_value = exception_keeper_value_39;
        exception_tb = exception_keeper_tb_39;
        exception_lineno = exception_keeper_lineno_39;

        goto outline_exception_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_14:;
        exception_lineno = 257;
        goto try_except_handler_41;
        outline_result_14:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[123], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_2 = "o";
            goto try_except_handler_41;
        }
        goto try_end_14;
        // Exception handler code:
        try_except_handler_41:;
        exception_keeper_type_40 = exception_type;
        exception_keeper_value_40 = exception_value;
        exception_keeper_tb_40 = exception_tb;
        exception_keeper_lineno_40 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_8__bases_orig);
        tmp_pyparsing_unicode$class_creation_8__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_8__bases);
        tmp_pyparsing_unicode$class_creation_8__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_8__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_8__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_8__metaclass);
        tmp_pyparsing_unicode$class_creation_8__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_8__prepared);
        tmp_pyparsing_unicode$class_creation_8__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_40;
        exception_value = exception_keeper_value_40;
        exception_tb = exception_keeper_tb_40;
        exception_lineno = exception_keeper_lineno_40;

        goto frame_exception_exit_3;
        // End of try:
        try_end_14:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_8__bases_orig);
        tmp_pyparsing_unicode$class_creation_8__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_8__bases);
        tmp_pyparsing_unicode$class_creation_8__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_8__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_8__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_8__metaclass);
        tmp_pyparsing_unicode$class_creation_8__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_8__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_8__prepared);
        tmp_pyparsing_unicode$class_creation_8__prepared = NULL;
        tmp_dictset_value = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[123]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[123]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 277;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[127], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_assign_source_103;
            PyObject *tmp_tuple_element_52;
            tmp_tuple_element_52 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[103]);

            if (unlikely(tmp_tuple_element_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[103]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_tuple_element_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_assign_source_103 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_assign_source_103, 0, tmp_tuple_element_52);
            tmp_tuple_element_52 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[107]);

            if (unlikely(tmp_tuple_element_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[107]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_tuple_element_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_103, 1, tmp_tuple_element_52);
            tmp_tuple_element_52 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[123]);

            if (unlikely(tmp_tuple_element_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[123]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_tuple_element_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            PyTuple_SET_ITEM(tmp_assign_source_103, 2, tmp_tuple_element_52);
            assert(tmp_pyparsing_unicode$class_creation_9__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_9__bases_orig = tmp_assign_source_103;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_104;
            PyObject *tmp_dircall_arg1_13;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases_orig);
            tmp_dircall_arg1_13 = tmp_pyparsing_unicode$class_creation_9__bases_orig;
            Py_INCREF(tmp_dircall_arg1_13);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
                tmp_assign_source_104 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            assert(tmp_pyparsing_unicode$class_creation_9__bases == NULL);
            tmp_pyparsing_unicode$class_creation_9__bases = tmp_assign_source_104;
        }
        {
            PyObject *tmp_assign_source_105;
            tmp_assign_source_105 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_9__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_9__class_decl_dict = tmp_assign_source_105;
        }
        {
            PyObject *tmp_assign_source_106;
            PyObject *tmp_metaclass_value_13;
            nuitka_bool tmp_condition_result_48;
            int tmp_truth_name_13;
            PyObject *tmp_type_arg_25;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_bases_value_13;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
            tmp_truth_name_13 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_9__bases);
            if (tmp_truth_name_13 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            tmp_condition_result_48 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
            tmp_expression_value_66 = tmp_pyparsing_unicode$class_creation_9__bases;
            tmp_subscript_value_17 = mod_consts[15];
            tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_66, tmp_subscript_value_17, 0);
            if (tmp_type_arg_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
            Py_DECREF(tmp_type_arg_25);
            if (tmp_metaclass_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_13);
            condexpr_end_13:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
            tmp_bases_value_13 = tmp_pyparsing_unicode$class_creation_9__bases;
            tmp_assign_source_106 = SELECT_METACLASS(tmp_metaclass_value_13, tmp_bases_value_13);
            Py_DECREF(tmp_metaclass_value_13);
            if (tmp_assign_source_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            assert(tmp_pyparsing_unicode$class_creation_9__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_9__metaclass = tmp_assign_source_106;
        }
        {
            nuitka_bool tmp_condition_result_49;
            PyObject *tmp_expression_value_67;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__metaclass);
            tmp_expression_value_67 = tmp_pyparsing_unicode$class_creation_9__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_67, mod_consts[73]);
            tmp_condition_result_49 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
                goto branch_yes_36;
            } else {
                goto branch_no_36;
            }
        }
        branch_yes_36:;
        {
            PyObject *tmp_assign_source_107;
            PyObject *tmp_called_value_33;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_args_value_26;
            PyObject *tmp_tuple_element_53;
            PyObject *tmp_kwargs_value_26;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__metaclass);
            tmp_expression_value_68 = tmp_pyparsing_unicode$class_creation_9__metaclass;
            tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[73]);
            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            tmp_tuple_element_53 = mod_consts[128];
            tmp_args_value_26 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_53);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
            tmp_tuple_element_53 = tmp_pyparsing_unicode$class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_53);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__class_decl_dict);
            tmp_kwargs_value_26 = tmp_pyparsing_unicode$class_creation_9__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 279;
            tmp_assign_source_107 = CALL_FUNCTION(tmp_called_value_33, tmp_args_value_26, tmp_kwargs_value_26);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_value_26);
            if (tmp_assign_source_107 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            assert(tmp_pyparsing_unicode$class_creation_9__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_9__prepared = tmp_assign_source_107;
        }
        {
            bool tmp_condition_result_50;
            PyObject *tmp_operand_value_13;
            PyObject *tmp_expression_value_69;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__prepared);
            tmp_expression_value_69 = tmp_pyparsing_unicode$class_creation_9__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_69, mod_consts[75]);
            tmp_operand_value_13 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            tmp_condition_result_50 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_50 != false) {
                goto branch_yes_37;
            } else {
                goto branch_no_37;
            }
        }
        branch_yes_37:;
        {
            PyObject *tmp_raise_type_13;
            PyObject *tmp_raise_value_13;
            PyObject *tmp_mod_expr_left_13;
            PyObject *tmp_mod_expr_right_13;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_getattr_target_13;
            PyObject *tmp_getattr_attr_13;
            PyObject *tmp_getattr_default_13;
            tmp_raise_type_13 = PyExc_TypeError;
            tmp_mod_expr_left_13 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__metaclass);
            tmp_getattr_target_13 = tmp_pyparsing_unicode$class_creation_9__metaclass;
            tmp_getattr_attr_13 = mod_consts[2];
            tmp_getattr_default_13 = mod_consts[77];
            tmp_tuple_element_54 = BUILTIN_GETATTR(tmp_getattr_target_13, tmp_getattr_attr_13, tmp_getattr_default_13);
            if (tmp_tuple_element_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_70;
                PyObject *tmp_type_arg_26;
                PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_54);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__prepared);
                tmp_type_arg_26 = tmp_pyparsing_unicode$class_creation_9__prepared;
                tmp_expression_value_70 = BUILTIN_TYPE1(tmp_type_arg_26);
                assert(!(tmp_expression_value_70 == NULL));
                tmp_tuple_element_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[2]);
                Py_DECREF(tmp_expression_value_70);
                if (tmp_tuple_element_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 279;
                    type_description_2 = "o";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_54);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_mod_expr_right_13);
            goto try_except_handler_44;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
            Py_DECREF(tmp_mod_expr_right_13);
            if (tmp_raise_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto try_except_handler_44;
            }
            exception_type = tmp_raise_type_13;
            Py_INCREF(tmp_raise_type_13);
            exception_value = tmp_raise_value_13;
            exception_lineno = 279;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_44;
        }
        branch_no_37:;
        goto branch_end_36;
        branch_no_36:;
        {
            PyObject *tmp_assign_source_108;
            tmp_assign_source_108 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_9__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_9__prepared = tmp_assign_source_108;
        }
        branch_end_36:;
        {
            PyObject *tmp_set_locals_15;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__prepared);
            tmp_set_locals_15 = tmp_pyparsing_unicode$class_creation_9__prepared;
            locals_pyparsing$unicode$$$class__15_CJK_279 = tmp_set_locals_15;
            Py_INCREF(tmp_set_locals_15);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__15_CJK_279, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_2 = "o";
            goto try_except_handler_46;
        }
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__15_CJK_279, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_2 = "o";
            goto try_except_handler_46;
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__15_CJK_279, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_2 = "o";
            goto try_except_handler_46;
        }
        {
            nuitka_bool tmp_condition_result_51;
            PyObject *tmp_cmp_expr_left_12;
            PyObject *tmp_cmp_expr_right_12;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
            tmp_cmp_expr_left_12 = tmp_pyparsing_unicode$class_creation_9__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases_orig);
            tmp_cmp_expr_right_12 = tmp_pyparsing_unicode$class_creation_9__bases_orig;
            tmp_condition_result_51 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
            if (tmp_condition_result_51 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto try_except_handler_46;
            }
            if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
                goto branch_yes_38;
            } else {
                goto branch_no_38;
            }
        }
        branch_yes_38:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_9__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__15_CJK_279, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_2 = "o";
            goto try_except_handler_46;
        }
        branch_no_38:;
        {
            PyObject *tmp_assign_source_109;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_value_27;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_kwargs_value_27;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__metaclass);
            tmp_called_value_34 = tmp_pyparsing_unicode$class_creation_9__metaclass;
            tmp_tuple_element_55 = mod_consts[128];
            tmp_args_value_27 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
            tmp_tuple_element_55 = tmp_pyparsing_unicode$class_creation_9__bases;
            PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = locals_pyparsing$unicode$$$class__15_CJK_279;
            PyTuple_SET_ITEM0(tmp_args_value_27, 2, tmp_tuple_element_55);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__class_decl_dict);
            tmp_kwargs_value_27 = tmp_pyparsing_unicode$class_creation_9__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 279;
            tmp_assign_source_109 = CALL_FUNCTION(tmp_called_value_34, tmp_args_value_27, tmp_kwargs_value_27);
            Py_DECREF(tmp_args_value_27);
            if (tmp_assign_source_109 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto try_except_handler_46;
            }
            assert(outline_14_var___class__ == NULL);
            outline_14_var___class__ = tmp_assign_source_109;
        }
        CHECK_OBJECT(outline_14_var___class__);
        tmp_dictset_value = outline_14_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_46;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_46:;
        Py_DECREF(locals_pyparsing$unicode$$$class__15_CJK_279);
        locals_pyparsing$unicode$$$class__15_CJK_279 = NULL;
        goto try_return_handler_45;
        // Exception handler code:
        try_except_handler_46:;
        exception_keeper_type_41 = exception_type;
        exception_keeper_value_41 = exception_value;
        exception_keeper_tb_41 = exception_tb;
        exception_keeper_lineno_41 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__15_CJK_279);
        locals_pyparsing$unicode$$$class__15_CJK_279 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_41;
        exception_value = exception_keeper_value_41;
        exception_tb = exception_keeper_tb_41;
        exception_lineno = exception_keeper_lineno_41;

        goto try_except_handler_45;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_45:;
        CHECK_OBJECT(outline_14_var___class__);
        Py_DECREF(outline_14_var___class__);
        outline_14_var___class__ = NULL;
        goto outline_result_15;
        // Exception handler code:
        try_except_handler_45:;
        exception_keeper_type_42 = exception_type;
        exception_keeper_value_42 = exception_value;
        exception_keeper_tb_42 = exception_tb;
        exception_keeper_lineno_42 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_42;
        exception_value = exception_keeper_value_42;
        exception_tb = exception_keeper_tb_42;
        exception_lineno = exception_keeper_lineno_42;

        goto outline_exception_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_15:;
        exception_lineno = 279;
        goto try_except_handler_44;
        outline_result_15:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[128], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_2 = "o";
            goto try_except_handler_44;
        }
        goto try_end_15;
        // Exception handler code:
        try_except_handler_44:;
        exception_keeper_type_43 = exception_type;
        exception_keeper_value_43 = exception_value;
        exception_keeper_tb_43 = exception_tb;
        exception_keeper_lineno_43 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_9__bases_orig);
        tmp_pyparsing_unicode$class_creation_9__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_9__bases);
        tmp_pyparsing_unicode$class_creation_9__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_9__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_9__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_9__metaclass);
        tmp_pyparsing_unicode$class_creation_9__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_9__prepared);
        tmp_pyparsing_unicode$class_creation_9__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_43;
        exception_value = exception_keeper_value_43;
        exception_tb = exception_keeper_tb_43;
        exception_lineno = exception_keeper_lineno_43;

        goto frame_exception_exit_3;
        // End of try:
        try_end_15:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_9__bases_orig);
        tmp_pyparsing_unicode$class_creation_9__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_9__bases);
        tmp_pyparsing_unicode$class_creation_9__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_9__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_9__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_9__metaclass);
        tmp_pyparsing_unicode$class_creation_9__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_9__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_9__prepared);
        tmp_pyparsing_unicode$class_creation_9__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_110;
            PyObject *tmp_tuple_element_56;
            tmp_tuple_element_56 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[10]);

            if (tmp_tuple_element_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_56 == NULL)) {
                        tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 283;
                        type_description_2 = "o";
                        goto try_except_handler_47;
                    }
                    Py_INCREF(tmp_tuple_element_56);
                } else {
                    goto try_except_handler_47;
                }
            }

            tmp_assign_source_110 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_110, 0, tmp_tuple_element_56);
            assert(tmp_pyparsing_unicode$class_creation_10__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_10__bases_orig = tmp_assign_source_110;
        }
        {
            PyObject *tmp_assign_source_111;
            PyObject *tmp_dircall_arg1_14;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases_orig);
            tmp_dircall_arg1_14 = tmp_pyparsing_unicode$class_creation_10__bases_orig;
            Py_INCREF(tmp_dircall_arg1_14);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
                tmp_assign_source_111 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_111 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            assert(tmp_pyparsing_unicode$class_creation_10__bases == NULL);
            tmp_pyparsing_unicode$class_creation_10__bases = tmp_assign_source_111;
        }
        {
            PyObject *tmp_assign_source_112;
            tmp_assign_source_112 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_10__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_10__class_decl_dict = tmp_assign_source_112;
        }
        {
            PyObject *tmp_assign_source_113;
            PyObject *tmp_metaclass_value_14;
            nuitka_bool tmp_condition_result_52;
            int tmp_truth_name_14;
            PyObject *tmp_type_arg_27;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_bases_value_14;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
            tmp_truth_name_14 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_10__bases);
            if (tmp_truth_name_14 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            tmp_condition_result_52 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
            tmp_expression_value_71 = tmp_pyparsing_unicode$class_creation_10__bases;
            tmp_subscript_value_18 = mod_consts[15];
            tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_71, tmp_subscript_value_18, 0);
            if (tmp_type_arg_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
            Py_DECREF(tmp_type_arg_27);
            if (tmp_metaclass_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_14);
            condexpr_end_14:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
            tmp_bases_value_14 = tmp_pyparsing_unicode$class_creation_10__bases;
            tmp_assign_source_113 = SELECT_METACLASS(tmp_metaclass_value_14, tmp_bases_value_14);
            Py_DECREF(tmp_metaclass_value_14);
            if (tmp_assign_source_113 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            assert(tmp_pyparsing_unicode$class_creation_10__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_10__metaclass = tmp_assign_source_113;
        }
        {
            nuitka_bool tmp_condition_result_53;
            PyObject *tmp_expression_value_72;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__metaclass);
            tmp_expression_value_72 = tmp_pyparsing_unicode$class_creation_10__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_72, mod_consts[73]);
            tmp_condition_result_53 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_53 == NUITKA_BOOL_TRUE) {
                goto branch_yes_39;
            } else {
                goto branch_no_39;
            }
        }
        branch_yes_39:;
        {
            PyObject *tmp_assign_source_114;
            PyObject *tmp_called_value_35;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_args_value_28;
            PyObject *tmp_tuple_element_57;
            PyObject *tmp_kwargs_value_28;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__metaclass);
            tmp_expression_value_73 = tmp_pyparsing_unicode$class_creation_10__metaclass;
            tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[73]);
            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            tmp_tuple_element_57 = mod_consts[131];
            tmp_args_value_28 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_57);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
            tmp_tuple_element_57 = tmp_pyparsing_unicode$class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_57);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__class_decl_dict);
            tmp_kwargs_value_28 = tmp_pyparsing_unicode$class_creation_10__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 283;
            tmp_assign_source_114 = CALL_FUNCTION(tmp_called_value_35, tmp_args_value_28, tmp_kwargs_value_28);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_value_28);
            if (tmp_assign_source_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            assert(tmp_pyparsing_unicode$class_creation_10__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_10__prepared = tmp_assign_source_114;
        }
        {
            bool tmp_condition_result_54;
            PyObject *tmp_operand_value_14;
            PyObject *tmp_expression_value_74;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__prepared);
            tmp_expression_value_74 = tmp_pyparsing_unicode$class_creation_10__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_74, mod_consts[75]);
            tmp_operand_value_14 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            tmp_condition_result_54 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_54 != false) {
                goto branch_yes_40;
            } else {
                goto branch_no_40;
            }
        }
        branch_yes_40:;
        {
            PyObject *tmp_raise_type_14;
            PyObject *tmp_raise_value_14;
            PyObject *tmp_mod_expr_left_14;
            PyObject *tmp_mod_expr_right_14;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_getattr_target_14;
            PyObject *tmp_getattr_attr_14;
            PyObject *tmp_getattr_default_14;
            tmp_raise_type_14 = PyExc_TypeError;
            tmp_mod_expr_left_14 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__metaclass);
            tmp_getattr_target_14 = tmp_pyparsing_unicode$class_creation_10__metaclass;
            tmp_getattr_attr_14 = mod_consts[2];
            tmp_getattr_default_14 = mod_consts[77];
            tmp_tuple_element_58 = BUILTIN_GETATTR(tmp_getattr_target_14, tmp_getattr_attr_14, tmp_getattr_default_14);
            if (tmp_tuple_element_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_75;
                PyObject *tmp_type_arg_28;
                PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_58);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__prepared);
                tmp_type_arg_28 = tmp_pyparsing_unicode$class_creation_10__prepared;
                tmp_expression_value_75 = BUILTIN_TYPE1(tmp_type_arg_28);
                assert(!(tmp_expression_value_75 == NULL));
                tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[2]);
                Py_DECREF(tmp_expression_value_75);
                if (tmp_tuple_element_58 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 283;
                    type_description_2 = "o";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_58);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_mod_expr_right_14);
            goto try_except_handler_47;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
            Py_DECREF(tmp_mod_expr_right_14);
            if (tmp_raise_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto try_except_handler_47;
            }
            exception_type = tmp_raise_type_14;
            Py_INCREF(tmp_raise_type_14);
            exception_value = tmp_raise_value_14;
            exception_lineno = 283;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_47;
        }
        branch_no_40:;
        goto branch_end_39;
        branch_no_39:;
        {
            PyObject *tmp_assign_source_115;
            tmp_assign_source_115 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_10__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_10__prepared = tmp_assign_source_115;
        }
        branch_end_39:;
        {
            PyObject *tmp_set_locals_16;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__prepared);
            tmp_set_locals_16 = tmp_pyparsing_unicode$class_creation_10__prepared;
            locals_pyparsing$unicode$$$class__16_Thai_283 = tmp_set_locals_16;
            Py_INCREF(tmp_set_locals_16);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__16_Thai_283, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_2 = "o";
            goto try_except_handler_49;
        }
        tmp_dictset_value = mod_consts[132];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__16_Thai_283, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_2 = "o";
            goto try_except_handler_49;
        }
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__16_Thai_283, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_2 = "o";
            goto try_except_handler_49;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__16_Thai_283, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_2 = "o";
            goto try_except_handler_49;
        }
        frame_1ba75d80883ca08e51f42abe6230d154_15 = MAKE_CLASS_FRAME(codeobj_1ba75d80883ca08e51f42abe6230d154, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_1ba75d80883ca08e51f42abe6230d154_15);
        assert(Py_REFCNT(frame_1ba75d80883ca08e51f42abe6230d154_15) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST2(mod_consts[134],mod_consts[135]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__16_Thai_283, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_3 = "o";
            goto frame_exception_exit_15;
        }
        {
            PyObject *tmp_ass_subvalue_14;
            PyObject *tmp_ass_subscribed_14;
            PyObject *tmp_ass_subscript_14;
            tmp_ass_subvalue_14 = PyObject_GetItem(locals_pyparsing$unicode$$$class__16_Thai_283, mod_consts[60]);

            if (tmp_ass_subvalue_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_14 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_14 == NULL)) {
                        tmp_ass_subvalue_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 285;
                        type_description_3 = "o";
                        goto frame_exception_exit_15;
                    }
                    Py_INCREF(tmp_ass_subvalue_14);
                } else {
                    goto frame_exception_exit_15;
                }
            }

            tmp_ass_subscribed_14 = PyObject_GetItem(locals_pyparsing$unicode$$$class__16_Thai_283, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_14);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 285;
                type_description_3 = "o";
                goto frame_exception_exit_15;
            }

            if (tmp_ass_subscribed_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_14);

                exception_lineno = 285;
                type_description_3 = "o";
                goto frame_exception_exit_15;
            }
            tmp_ass_subscript_14 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
            Py_DECREF(tmp_ass_subscribed_14);
            Py_DECREF(tmp_ass_subvalue_14);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_3 = "o";
                goto frame_exception_exit_15;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_13;
        frame_exception_exit_15:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1ba75d80883ca08e51f42abe6230d154_15, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1ba75d80883ca08e51f42abe6230d154_15->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1ba75d80883ca08e51f42abe6230d154_15, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1ba75d80883ca08e51f42abe6230d154_15,
            type_description_3,
            outline_15_var___class__
        );



        assertFrameObject(frame_1ba75d80883ca08e51f42abe6230d154_15);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_14;
        frame_no_exception_13:;
        goto skip_nested_handling_13;
        nested_frame_exit_14:;
        type_description_2 = "o";
        goto try_except_handler_49;
        skip_nested_handling_13:;
        {
            nuitka_bool tmp_condition_result_55;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
            tmp_cmp_expr_left_13 = tmp_pyparsing_unicode$class_creation_10__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases_orig);
            tmp_cmp_expr_right_13 = tmp_pyparsing_unicode$class_creation_10__bases_orig;
            tmp_condition_result_55 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
            if (tmp_condition_result_55 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto try_except_handler_49;
            }
            if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
                goto branch_yes_41;
            } else {
                goto branch_no_41;
            }
        }
        branch_yes_41:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_10__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__16_Thai_283, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_2 = "o";
            goto try_except_handler_49;
        }
        branch_no_41:;
        {
            PyObject *tmp_assign_source_116;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_value_29;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_kwargs_value_29;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__metaclass);
            tmp_called_value_36 = tmp_pyparsing_unicode$class_creation_10__metaclass;
            tmp_tuple_element_59 = mod_consts[131];
            tmp_args_value_29 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
            tmp_tuple_element_59 = tmp_pyparsing_unicode$class_creation_10__bases;
            PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_59);
            tmp_tuple_element_59 = locals_pyparsing$unicode$$$class__16_Thai_283;
            PyTuple_SET_ITEM0(tmp_args_value_29, 2, tmp_tuple_element_59);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__class_decl_dict);
            tmp_kwargs_value_29 = tmp_pyparsing_unicode$class_creation_10__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 283;
            tmp_assign_source_116 = CALL_FUNCTION(tmp_called_value_36, tmp_args_value_29, tmp_kwargs_value_29);
            Py_DECREF(tmp_args_value_29);
            if (tmp_assign_source_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_2 = "o";
                goto try_except_handler_49;
            }
            assert(outline_15_var___class__ == NULL);
            outline_15_var___class__ = tmp_assign_source_116;
        }
        CHECK_OBJECT(outline_15_var___class__);
        tmp_dictset_value = outline_15_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_49;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_49:;
        Py_DECREF(locals_pyparsing$unicode$$$class__16_Thai_283);
        locals_pyparsing$unicode$$$class__16_Thai_283 = NULL;
        goto try_return_handler_48;
        // Exception handler code:
        try_except_handler_49:;
        exception_keeper_type_44 = exception_type;
        exception_keeper_value_44 = exception_value;
        exception_keeper_tb_44 = exception_tb;
        exception_keeper_lineno_44 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__16_Thai_283);
        locals_pyparsing$unicode$$$class__16_Thai_283 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_44;
        exception_value = exception_keeper_value_44;
        exception_tb = exception_keeper_tb_44;
        exception_lineno = exception_keeper_lineno_44;

        goto try_except_handler_48;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_48:;
        CHECK_OBJECT(outline_15_var___class__);
        Py_DECREF(outline_15_var___class__);
        outline_15_var___class__ = NULL;
        goto outline_result_16;
        // Exception handler code:
        try_except_handler_48:;
        exception_keeper_type_45 = exception_type;
        exception_keeper_value_45 = exception_value;
        exception_keeper_tb_45 = exception_tb;
        exception_keeper_lineno_45 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_45;
        exception_value = exception_keeper_value_45;
        exception_tb = exception_keeper_tb_45;
        exception_lineno = exception_keeper_lineno_45;

        goto outline_exception_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_16:;
        exception_lineno = 283;
        goto try_except_handler_47;
        outline_result_16:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[131], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_2 = "o";
            goto try_except_handler_47;
        }
        goto try_end_16;
        // Exception handler code:
        try_except_handler_47:;
        exception_keeper_type_46 = exception_type;
        exception_keeper_value_46 = exception_value;
        exception_keeper_tb_46 = exception_tb;
        exception_keeper_lineno_46 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_10__bases_orig);
        tmp_pyparsing_unicode$class_creation_10__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_10__bases);
        tmp_pyparsing_unicode$class_creation_10__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_10__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_10__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_10__metaclass);
        tmp_pyparsing_unicode$class_creation_10__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_10__prepared);
        tmp_pyparsing_unicode$class_creation_10__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_46;
        exception_value = exception_keeper_value_46;
        exception_tb = exception_keeper_tb_46;
        exception_lineno = exception_keeper_lineno_46;

        goto frame_exception_exit_3;
        // End of try:
        try_end_16:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_10__bases_orig);
        tmp_pyparsing_unicode$class_creation_10__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_10__bases);
        tmp_pyparsing_unicode$class_creation_10__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_10__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_10__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_10__metaclass);
        tmp_pyparsing_unicode$class_creation_10__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_10__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_10__prepared);
        tmp_pyparsing_unicode$class_creation_10__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_117;
            PyObject *tmp_tuple_element_60;
            tmp_tuple_element_60 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[10]);

            if (tmp_tuple_element_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_60 == NULL)) {
                        tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 287;
                        type_description_2 = "o";
                        goto try_except_handler_50;
                    }
                    Py_INCREF(tmp_tuple_element_60);
                } else {
                    goto try_except_handler_50;
                }
            }

            tmp_assign_source_117 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_117, 0, tmp_tuple_element_60);
            assert(tmp_pyparsing_unicode$class_creation_11__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_11__bases_orig = tmp_assign_source_117;
        }
        {
            PyObject *tmp_assign_source_118;
            PyObject *tmp_dircall_arg1_15;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases_orig);
            tmp_dircall_arg1_15 = tmp_pyparsing_unicode$class_creation_11__bases_orig;
            Py_INCREF(tmp_dircall_arg1_15);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
                tmp_assign_source_118 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_118 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            assert(tmp_pyparsing_unicode$class_creation_11__bases == NULL);
            tmp_pyparsing_unicode$class_creation_11__bases = tmp_assign_source_118;
        }
        {
            PyObject *tmp_assign_source_119;
            tmp_assign_source_119 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_11__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_11__class_decl_dict = tmp_assign_source_119;
        }
        {
            PyObject *tmp_assign_source_120;
            PyObject *tmp_metaclass_value_15;
            nuitka_bool tmp_condition_result_56;
            int tmp_truth_name_15;
            PyObject *tmp_type_arg_29;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_bases_value_15;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
            tmp_truth_name_15 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_11__bases);
            if (tmp_truth_name_15 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            tmp_condition_result_56 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_15;
            } else {
                goto condexpr_false_15;
            }
            condexpr_true_15:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
            tmp_expression_value_76 = tmp_pyparsing_unicode$class_creation_11__bases;
            tmp_subscript_value_19 = mod_consts[15];
            tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_76, tmp_subscript_value_19, 0);
            if (tmp_type_arg_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
            Py_DECREF(tmp_type_arg_29);
            if (tmp_metaclass_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_15);
            condexpr_end_15:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
            tmp_bases_value_15 = tmp_pyparsing_unicode$class_creation_11__bases;
            tmp_assign_source_120 = SELECT_METACLASS(tmp_metaclass_value_15, tmp_bases_value_15);
            Py_DECREF(tmp_metaclass_value_15);
            if (tmp_assign_source_120 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            assert(tmp_pyparsing_unicode$class_creation_11__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_11__metaclass = tmp_assign_source_120;
        }
        {
            nuitka_bool tmp_condition_result_57;
            PyObject *tmp_expression_value_77;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__metaclass);
            tmp_expression_value_77 = tmp_pyparsing_unicode$class_creation_11__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_77, mod_consts[73]);
            tmp_condition_result_57 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_57 == NUITKA_BOOL_TRUE) {
                goto branch_yes_42;
            } else {
                goto branch_no_42;
            }
        }
        branch_yes_42:;
        {
            PyObject *tmp_assign_source_121;
            PyObject *tmp_called_value_37;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_args_value_30;
            PyObject *tmp_tuple_element_61;
            PyObject *tmp_kwargs_value_30;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__metaclass);
            tmp_expression_value_78 = tmp_pyparsing_unicode$class_creation_11__metaclass;
            tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[73]);
            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            tmp_tuple_element_61 = mod_consts[136];
            tmp_args_value_30 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_61);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
            tmp_tuple_element_61 = tmp_pyparsing_unicode$class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_61);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__class_decl_dict);
            tmp_kwargs_value_30 = tmp_pyparsing_unicode$class_creation_11__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 287;
            tmp_assign_source_121 = CALL_FUNCTION(tmp_called_value_37, tmp_args_value_30, tmp_kwargs_value_30);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_value_30);
            if (tmp_assign_source_121 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            assert(tmp_pyparsing_unicode$class_creation_11__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_11__prepared = tmp_assign_source_121;
        }
        {
            bool tmp_condition_result_58;
            PyObject *tmp_operand_value_15;
            PyObject *tmp_expression_value_79;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__prepared);
            tmp_expression_value_79 = tmp_pyparsing_unicode$class_creation_11__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_79, mod_consts[75]);
            tmp_operand_value_15 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            tmp_condition_result_58 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_58 != false) {
                goto branch_yes_43;
            } else {
                goto branch_no_43;
            }
        }
        branch_yes_43:;
        {
            PyObject *tmp_raise_type_15;
            PyObject *tmp_raise_value_15;
            PyObject *tmp_mod_expr_left_15;
            PyObject *tmp_mod_expr_right_15;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_getattr_target_15;
            PyObject *tmp_getattr_attr_15;
            PyObject *tmp_getattr_default_15;
            tmp_raise_type_15 = PyExc_TypeError;
            tmp_mod_expr_left_15 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__metaclass);
            tmp_getattr_target_15 = tmp_pyparsing_unicode$class_creation_11__metaclass;
            tmp_getattr_attr_15 = mod_consts[2];
            tmp_getattr_default_15 = mod_consts[77];
            tmp_tuple_element_62 = BUILTIN_GETATTR(tmp_getattr_target_15, tmp_getattr_attr_15, tmp_getattr_default_15);
            if (tmp_tuple_element_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_80;
                PyObject *tmp_type_arg_30;
                PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_62);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__prepared);
                tmp_type_arg_30 = tmp_pyparsing_unicode$class_creation_11__prepared;
                tmp_expression_value_80 = BUILTIN_TYPE1(tmp_type_arg_30);
                assert(!(tmp_expression_value_80 == NULL));
                tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[2]);
                Py_DECREF(tmp_expression_value_80);
                if (tmp_tuple_element_62 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;
                    type_description_2 = "o";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_62);
            }
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_mod_expr_right_15);
            goto try_except_handler_50;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
            Py_DECREF(tmp_mod_expr_right_15);
            if (tmp_raise_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_50;
            }
            exception_type = tmp_raise_type_15;
            Py_INCREF(tmp_raise_type_15);
            exception_value = tmp_raise_value_15;
            exception_lineno = 287;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_50;
        }
        branch_no_43:;
        goto branch_end_42;
        branch_no_42:;
        {
            PyObject *tmp_assign_source_122;
            tmp_assign_source_122 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_11__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_11__prepared = tmp_assign_source_122;
        }
        branch_end_42:;
        {
            PyObject *tmp_set_locals_17;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__prepared);
            tmp_set_locals_17 = tmp_pyparsing_unicode$class_creation_11__prepared;
            locals_pyparsing$unicode$$$class__17_Arabic_287 = tmp_set_locals_17;
            Py_INCREF(tmp_set_locals_17);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__17_Arabic_287, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_2 = "o";
            goto try_except_handler_52;
        }
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__17_Arabic_287, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_2 = "o";
            goto try_except_handler_52;
        }
        tmp_dictset_value = mod_consts[138];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__17_Arabic_287, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_2 = "o";
            goto try_except_handler_52;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__17_Arabic_287, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_2 = "o";
            goto try_except_handler_52;
        }
        frame_fce864104e58b2c64d87f4580cd75c6d_16 = MAKE_CLASS_FRAME(codeobj_fce864104e58b2c64d87f4580cd75c6d, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_fce864104e58b2c64d87f4580cd75c6d_16);
        assert(Py_REFCNT(frame_fce864104e58b2c64d87f4580cd75c6d_16) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST3(mod_consts[139],mod_consts[140],mod_consts[141]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__17_Arabic_287, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_3 = "o";
            goto frame_exception_exit_16;
        }
        {
            PyObject *tmp_ass_subvalue_15;
            PyObject *tmp_ass_subscribed_15;
            PyObject *tmp_ass_subscript_15;
            tmp_ass_subvalue_15 = PyObject_GetItem(locals_pyparsing$unicode$$$class__17_Arabic_287, mod_consts[60]);

            if (tmp_ass_subvalue_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_15 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_15 == NULL)) {
                        tmp_ass_subvalue_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 289;
                        type_description_3 = "o";
                        goto frame_exception_exit_16;
                    }
                    Py_INCREF(tmp_ass_subvalue_15);
                } else {
                    goto frame_exception_exit_16;
                }
            }

            tmp_ass_subscribed_15 = PyObject_GetItem(locals_pyparsing$unicode$$$class__17_Arabic_287, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_15);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 289;
                type_description_3 = "o";
                goto frame_exception_exit_16;
            }

            if (tmp_ass_subscribed_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_15);

                exception_lineno = 289;
                type_description_3 = "o";
                goto frame_exception_exit_16;
            }
            tmp_ass_subscript_15 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
            Py_DECREF(tmp_ass_subscribed_15);
            Py_DECREF(tmp_ass_subvalue_15);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_3 = "o";
                goto frame_exception_exit_16;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_14;
        frame_exception_exit_16:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fce864104e58b2c64d87f4580cd75c6d_16, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fce864104e58b2c64d87f4580cd75c6d_16->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fce864104e58b2c64d87f4580cd75c6d_16, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fce864104e58b2c64d87f4580cd75c6d_16,
            type_description_3,
            outline_16_var___class__
        );



        assertFrameObject(frame_fce864104e58b2c64d87f4580cd75c6d_16);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_15;
        frame_no_exception_14:;
        goto skip_nested_handling_14;
        nested_frame_exit_15:;
        type_description_2 = "o";
        goto try_except_handler_52;
        skip_nested_handling_14:;
        {
            nuitka_bool tmp_condition_result_59;
            PyObject *tmp_cmp_expr_left_14;
            PyObject *tmp_cmp_expr_right_14;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
            tmp_cmp_expr_left_14 = tmp_pyparsing_unicode$class_creation_11__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases_orig);
            tmp_cmp_expr_right_14 = tmp_pyparsing_unicode$class_creation_11__bases_orig;
            tmp_condition_result_59 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
            if (tmp_condition_result_59 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_52;
            }
            if (tmp_condition_result_59 == NUITKA_BOOL_TRUE) {
                goto branch_yes_44;
            } else {
                goto branch_no_44;
            }
        }
        branch_yes_44:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_11__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__17_Arabic_287, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_2 = "o";
            goto try_except_handler_52;
        }
        branch_no_44:;
        {
            PyObject *tmp_assign_source_123;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_value_31;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_kwargs_value_31;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__metaclass);
            tmp_called_value_38 = tmp_pyparsing_unicode$class_creation_11__metaclass;
            tmp_tuple_element_63 = mod_consts[136];
            tmp_args_value_31 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
            tmp_tuple_element_63 = tmp_pyparsing_unicode$class_creation_11__bases;
            PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_63);
            tmp_tuple_element_63 = locals_pyparsing$unicode$$$class__17_Arabic_287;
            PyTuple_SET_ITEM0(tmp_args_value_31, 2, tmp_tuple_element_63);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__class_decl_dict);
            tmp_kwargs_value_31 = tmp_pyparsing_unicode$class_creation_11__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 287;
            tmp_assign_source_123 = CALL_FUNCTION(tmp_called_value_38, tmp_args_value_31, tmp_kwargs_value_31);
            Py_DECREF(tmp_args_value_31);
            if (tmp_assign_source_123 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto try_except_handler_52;
            }
            assert(outline_16_var___class__ == NULL);
            outline_16_var___class__ = tmp_assign_source_123;
        }
        CHECK_OBJECT(outline_16_var___class__);
        tmp_dictset_value = outline_16_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_52;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_52:;
        Py_DECREF(locals_pyparsing$unicode$$$class__17_Arabic_287);
        locals_pyparsing$unicode$$$class__17_Arabic_287 = NULL;
        goto try_return_handler_51;
        // Exception handler code:
        try_except_handler_52:;
        exception_keeper_type_47 = exception_type;
        exception_keeper_value_47 = exception_value;
        exception_keeper_tb_47 = exception_tb;
        exception_keeper_lineno_47 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__17_Arabic_287);
        locals_pyparsing$unicode$$$class__17_Arabic_287 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_47;
        exception_value = exception_keeper_value_47;
        exception_tb = exception_keeper_tb_47;
        exception_lineno = exception_keeper_lineno_47;

        goto try_except_handler_51;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_51:;
        CHECK_OBJECT(outline_16_var___class__);
        Py_DECREF(outline_16_var___class__);
        outline_16_var___class__ = NULL;
        goto outline_result_17;
        // Exception handler code:
        try_except_handler_51:;
        exception_keeper_type_48 = exception_type;
        exception_keeper_value_48 = exception_value;
        exception_keeper_tb_48 = exception_tb;
        exception_keeper_lineno_48 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_48;
        exception_value = exception_keeper_value_48;
        exception_tb = exception_keeper_tb_48;
        exception_lineno = exception_keeper_lineno_48;

        goto outline_exception_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_17:;
        exception_lineno = 287;
        goto try_except_handler_50;
        outline_result_17:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[136], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_2 = "o";
            goto try_except_handler_50;
        }
        goto try_end_17;
        // Exception handler code:
        try_except_handler_50:;
        exception_keeper_type_49 = exception_type;
        exception_keeper_value_49 = exception_value;
        exception_keeper_tb_49 = exception_tb;
        exception_keeper_lineno_49 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_11__bases_orig);
        tmp_pyparsing_unicode$class_creation_11__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_11__bases);
        tmp_pyparsing_unicode$class_creation_11__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_11__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_11__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_11__metaclass);
        tmp_pyparsing_unicode$class_creation_11__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_11__prepared);
        tmp_pyparsing_unicode$class_creation_11__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_49;
        exception_value = exception_keeper_value_49;
        exception_tb = exception_keeper_tb_49;
        exception_lineno = exception_keeper_lineno_49;

        goto frame_exception_exit_3;
        // End of try:
        try_end_17:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_11__bases_orig);
        tmp_pyparsing_unicode$class_creation_11__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_11__bases);
        tmp_pyparsing_unicode$class_creation_11__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_11__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_11__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_11__metaclass);
        tmp_pyparsing_unicode$class_creation_11__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_11__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_11__prepared);
        tmp_pyparsing_unicode$class_creation_11__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_124;
            PyObject *tmp_tuple_element_64;
            tmp_tuple_element_64 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[10]);

            if (tmp_tuple_element_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_64 == NULL)) {
                        tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 295;
                        type_description_2 = "o";
                        goto try_except_handler_53;
                    }
                    Py_INCREF(tmp_tuple_element_64);
                } else {
                    goto try_except_handler_53;
                }
            }

            tmp_assign_source_124 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_124, 0, tmp_tuple_element_64);
            assert(tmp_pyparsing_unicode$class_creation_12__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_12__bases_orig = tmp_assign_source_124;
        }
        {
            PyObject *tmp_assign_source_125;
            PyObject *tmp_dircall_arg1_16;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases_orig);
            tmp_dircall_arg1_16 = tmp_pyparsing_unicode$class_creation_12__bases_orig;
            Py_INCREF(tmp_dircall_arg1_16);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
                tmp_assign_source_125 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_125 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            assert(tmp_pyparsing_unicode$class_creation_12__bases == NULL);
            tmp_pyparsing_unicode$class_creation_12__bases = tmp_assign_source_125;
        }
        {
            PyObject *tmp_assign_source_126;
            tmp_assign_source_126 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_12__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_12__class_decl_dict = tmp_assign_source_126;
        }
        {
            PyObject *tmp_assign_source_127;
            PyObject *tmp_metaclass_value_16;
            nuitka_bool tmp_condition_result_60;
            int tmp_truth_name_16;
            PyObject *tmp_type_arg_31;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_bases_value_16;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
            tmp_truth_name_16 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_12__bases);
            if (tmp_truth_name_16 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            tmp_condition_result_60 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_16;
            } else {
                goto condexpr_false_16;
            }
            condexpr_true_16:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
            tmp_expression_value_81 = tmp_pyparsing_unicode$class_creation_12__bases;
            tmp_subscript_value_20 = mod_consts[15];
            tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_81, tmp_subscript_value_20, 0);
            if (tmp_type_arg_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
            Py_DECREF(tmp_type_arg_31);
            if (tmp_metaclass_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_16);
            condexpr_end_16:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
            tmp_bases_value_16 = tmp_pyparsing_unicode$class_creation_12__bases;
            tmp_assign_source_127 = SELECT_METACLASS(tmp_metaclass_value_16, tmp_bases_value_16);
            Py_DECREF(tmp_metaclass_value_16);
            if (tmp_assign_source_127 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            assert(tmp_pyparsing_unicode$class_creation_12__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_12__metaclass = tmp_assign_source_127;
        }
        {
            nuitka_bool tmp_condition_result_61;
            PyObject *tmp_expression_value_82;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__metaclass);
            tmp_expression_value_82 = tmp_pyparsing_unicode$class_creation_12__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_82, mod_consts[73]);
            tmp_condition_result_61 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_61 == NUITKA_BOOL_TRUE) {
                goto branch_yes_45;
            } else {
                goto branch_no_45;
            }
        }
        branch_yes_45:;
        {
            PyObject *tmp_assign_source_128;
            PyObject *tmp_called_value_39;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_args_value_32;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_kwargs_value_32;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__metaclass);
            tmp_expression_value_83 = tmp_pyparsing_unicode$class_creation_12__metaclass;
            tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[73]);
            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            tmp_tuple_element_65 = mod_consts[142];
            tmp_args_value_32 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
            tmp_tuple_element_65 = tmp_pyparsing_unicode$class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_65);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__class_decl_dict);
            tmp_kwargs_value_32 = tmp_pyparsing_unicode$class_creation_12__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 295;
            tmp_assign_source_128 = CALL_FUNCTION(tmp_called_value_39, tmp_args_value_32, tmp_kwargs_value_32);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_value_32);
            if (tmp_assign_source_128 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            assert(tmp_pyparsing_unicode$class_creation_12__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_12__prepared = tmp_assign_source_128;
        }
        {
            bool tmp_condition_result_62;
            PyObject *tmp_operand_value_16;
            PyObject *tmp_expression_value_84;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__prepared);
            tmp_expression_value_84 = tmp_pyparsing_unicode$class_creation_12__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_84, mod_consts[75]);
            tmp_operand_value_16 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            tmp_condition_result_62 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_62 != false) {
                goto branch_yes_46;
            } else {
                goto branch_no_46;
            }
        }
        branch_yes_46:;
        {
            PyObject *tmp_raise_type_16;
            PyObject *tmp_raise_value_16;
            PyObject *tmp_mod_expr_left_16;
            PyObject *tmp_mod_expr_right_16;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_getattr_target_16;
            PyObject *tmp_getattr_attr_16;
            PyObject *tmp_getattr_default_16;
            tmp_raise_type_16 = PyExc_TypeError;
            tmp_mod_expr_left_16 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__metaclass);
            tmp_getattr_target_16 = tmp_pyparsing_unicode$class_creation_12__metaclass;
            tmp_getattr_attr_16 = mod_consts[2];
            tmp_getattr_default_16 = mod_consts[77];
            tmp_tuple_element_66 = BUILTIN_GETATTR(tmp_getattr_target_16, tmp_getattr_attr_16, tmp_getattr_default_16);
            if (tmp_tuple_element_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_85;
                PyObject *tmp_type_arg_32;
                PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_66);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__prepared);
                tmp_type_arg_32 = tmp_pyparsing_unicode$class_creation_12__prepared;
                tmp_expression_value_85 = BUILTIN_TYPE1(tmp_type_arg_32);
                assert(!(tmp_expression_value_85 == NULL));
                tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[2]);
                Py_DECREF(tmp_expression_value_85);
                if (tmp_tuple_element_66 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;
                    type_description_2 = "o";
                    goto tuple_build_exception_18;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_66);
            }
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_mod_expr_right_16);
            goto try_except_handler_53;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
            Py_DECREF(tmp_mod_expr_right_16);
            if (tmp_raise_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto try_except_handler_53;
            }
            exception_type = tmp_raise_type_16;
            Py_INCREF(tmp_raise_type_16);
            exception_value = tmp_raise_value_16;
            exception_lineno = 295;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_53;
        }
        branch_no_46:;
        goto branch_end_45;
        branch_no_45:;
        {
            PyObject *tmp_assign_source_129;
            tmp_assign_source_129 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_12__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_12__prepared = tmp_assign_source_129;
        }
        branch_end_45:;
        {
            PyObject *tmp_set_locals_18;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__prepared);
            tmp_set_locals_18 = tmp_pyparsing_unicode$class_creation_12__prepared;
            locals_pyparsing$unicode$$$class__18_Hebrew_295 = tmp_set_locals_18;
            Py_INCREF(tmp_set_locals_18);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__18_Hebrew_295, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_2 = "o";
            goto try_except_handler_55;
        }
        tmp_dictset_value = mod_consts[143];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__18_Hebrew_295, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_2 = "o";
            goto try_except_handler_55;
        }
        tmp_dictset_value = mod_consts[144];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__18_Hebrew_295, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_2 = "o";
            goto try_except_handler_55;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__18_Hebrew_295, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_2 = "o";
            goto try_except_handler_55;
        }
        frame_bee2aba53c55f8befa14c49c33bf6992_17 = MAKE_CLASS_FRAME(codeobj_bee2aba53c55f8befa14c49c33bf6992, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_bee2aba53c55f8befa14c49c33bf6992_17);
        assert(Py_REFCNT(frame_bee2aba53c55f8befa14c49c33bf6992_17) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST9(mod_consts[145]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__18_Hebrew_295, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_3 = "o";
            goto frame_exception_exit_17;
        }
        {
            PyObject *tmp_ass_subvalue_16;
            PyObject *tmp_ass_subscribed_16;
            PyObject *tmp_ass_subscript_16;
            tmp_ass_subvalue_16 = PyObject_GetItem(locals_pyparsing$unicode$$$class__18_Hebrew_295, mod_consts[60]);

            if (tmp_ass_subvalue_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_16 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_16 == NULL)) {
                        tmp_ass_subvalue_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 297;
                        type_description_3 = "o";
                        goto frame_exception_exit_17;
                    }
                    Py_INCREF(tmp_ass_subvalue_16);
                } else {
                    goto frame_exception_exit_17;
                }
            }

            tmp_ass_subscribed_16 = PyObject_GetItem(locals_pyparsing$unicode$$$class__18_Hebrew_295, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_16);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 297;
                type_description_3 = "o";
                goto frame_exception_exit_17;
            }

            if (tmp_ass_subscribed_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_16);

                exception_lineno = 297;
                type_description_3 = "o";
                goto frame_exception_exit_17;
            }
            tmp_ass_subscript_16 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
            Py_DECREF(tmp_ass_subscribed_16);
            Py_DECREF(tmp_ass_subvalue_16);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;
                type_description_3 = "o";
                goto frame_exception_exit_17;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_15;
        frame_exception_exit_17:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bee2aba53c55f8befa14c49c33bf6992_17, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bee2aba53c55f8befa14c49c33bf6992_17->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bee2aba53c55f8befa14c49c33bf6992_17, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bee2aba53c55f8befa14c49c33bf6992_17,
            type_description_3,
            outline_17_var___class__
        );



        assertFrameObject(frame_bee2aba53c55f8befa14c49c33bf6992_17);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_16;
        frame_no_exception_15:;
        goto skip_nested_handling_15;
        nested_frame_exit_16:;
        type_description_2 = "o";
        goto try_except_handler_55;
        skip_nested_handling_15:;
        {
            nuitka_bool tmp_condition_result_63;
            PyObject *tmp_cmp_expr_left_15;
            PyObject *tmp_cmp_expr_right_15;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
            tmp_cmp_expr_left_15 = tmp_pyparsing_unicode$class_creation_12__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases_orig);
            tmp_cmp_expr_right_15 = tmp_pyparsing_unicode$class_creation_12__bases_orig;
            tmp_condition_result_63 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
            if (tmp_condition_result_63 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto try_except_handler_55;
            }
            if (tmp_condition_result_63 == NUITKA_BOOL_TRUE) {
                goto branch_yes_47;
            } else {
                goto branch_no_47;
            }
        }
        branch_yes_47:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_12__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__18_Hebrew_295, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_2 = "o";
            goto try_except_handler_55;
        }
        branch_no_47:;
        {
            PyObject *tmp_assign_source_130;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_33;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_kwargs_value_33;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__metaclass);
            tmp_called_value_40 = tmp_pyparsing_unicode$class_creation_12__metaclass;
            tmp_tuple_element_67 = mod_consts[142];
            tmp_args_value_33 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
            tmp_tuple_element_67 = tmp_pyparsing_unicode$class_creation_12__bases;
            PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_67);
            tmp_tuple_element_67 = locals_pyparsing$unicode$$$class__18_Hebrew_295;
            PyTuple_SET_ITEM0(tmp_args_value_33, 2, tmp_tuple_element_67);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__class_decl_dict);
            tmp_kwargs_value_33 = tmp_pyparsing_unicode$class_creation_12__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 295;
            tmp_assign_source_130 = CALL_FUNCTION(tmp_called_value_40, tmp_args_value_33, tmp_kwargs_value_33);
            Py_DECREF(tmp_args_value_33);
            if (tmp_assign_source_130 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto try_except_handler_55;
            }
            assert(outline_17_var___class__ == NULL);
            outline_17_var___class__ = tmp_assign_source_130;
        }
        CHECK_OBJECT(outline_17_var___class__);
        tmp_dictset_value = outline_17_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_55;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_55:;
        Py_DECREF(locals_pyparsing$unicode$$$class__18_Hebrew_295);
        locals_pyparsing$unicode$$$class__18_Hebrew_295 = NULL;
        goto try_return_handler_54;
        // Exception handler code:
        try_except_handler_55:;
        exception_keeper_type_50 = exception_type;
        exception_keeper_value_50 = exception_value;
        exception_keeper_tb_50 = exception_tb;
        exception_keeper_lineno_50 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__18_Hebrew_295);
        locals_pyparsing$unicode$$$class__18_Hebrew_295 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_50;
        exception_value = exception_keeper_value_50;
        exception_tb = exception_keeper_tb_50;
        exception_lineno = exception_keeper_lineno_50;

        goto try_except_handler_54;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_54:;
        CHECK_OBJECT(outline_17_var___class__);
        Py_DECREF(outline_17_var___class__);
        outline_17_var___class__ = NULL;
        goto outline_result_18;
        // Exception handler code:
        try_except_handler_54:;
        exception_keeper_type_51 = exception_type;
        exception_keeper_value_51 = exception_value;
        exception_keeper_tb_51 = exception_tb;
        exception_keeper_lineno_51 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_51;
        exception_value = exception_keeper_value_51;
        exception_tb = exception_keeper_tb_51;
        exception_lineno = exception_keeper_lineno_51;

        goto outline_exception_18;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_18:;
        exception_lineno = 295;
        goto try_except_handler_53;
        outline_result_18:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[142], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_2 = "o";
            goto try_except_handler_53;
        }
        goto try_end_18;
        // Exception handler code:
        try_except_handler_53:;
        exception_keeper_type_52 = exception_type;
        exception_keeper_value_52 = exception_value;
        exception_keeper_tb_52 = exception_tb;
        exception_keeper_lineno_52 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_12__bases_orig);
        tmp_pyparsing_unicode$class_creation_12__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_12__bases);
        tmp_pyparsing_unicode$class_creation_12__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_12__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_12__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_12__metaclass);
        tmp_pyparsing_unicode$class_creation_12__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_12__prepared);
        tmp_pyparsing_unicode$class_creation_12__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_52;
        exception_value = exception_keeper_value_52;
        exception_tb = exception_keeper_tb_52;
        exception_lineno = exception_keeper_lineno_52;

        goto frame_exception_exit_3;
        // End of try:
        try_end_18:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_12__bases_orig);
        tmp_pyparsing_unicode$class_creation_12__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_12__bases);
        tmp_pyparsing_unicode$class_creation_12__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_12__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_12__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_12__metaclass);
        tmp_pyparsing_unicode$class_creation_12__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_12__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_12__prepared);
        tmp_pyparsing_unicode$class_creation_12__prepared = NULL;
        // Tried code:
        {
            PyObject *tmp_assign_source_131;
            PyObject *tmp_tuple_element_68;
            tmp_tuple_element_68 = PyObject_GetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[10]);

            if (tmp_tuple_element_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_tuple_element_68 == NULL)) {
                        tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_tuple_element_68 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 309;
                        type_description_2 = "o";
                        goto try_except_handler_56;
                    }
                    Py_INCREF(tmp_tuple_element_68);
                } else {
                    goto try_except_handler_56;
                }
            }

            tmp_assign_source_131 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_131, 0, tmp_tuple_element_68);
            assert(tmp_pyparsing_unicode$class_creation_13__bases_orig == NULL);
            tmp_pyparsing_unicode$class_creation_13__bases_orig = tmp_assign_source_131;
        }
        {
            PyObject *tmp_assign_source_132;
            PyObject *tmp_dircall_arg1_17;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases_orig);
            tmp_dircall_arg1_17 = tmp_pyparsing_unicode$class_creation_13__bases_orig;
            Py_INCREF(tmp_dircall_arg1_17);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_17};
                tmp_assign_source_132 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
            }
            if (tmp_assign_source_132 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            assert(tmp_pyparsing_unicode$class_creation_13__bases == NULL);
            tmp_pyparsing_unicode$class_creation_13__bases = tmp_assign_source_132;
        }
        {
            PyObject *tmp_assign_source_133;
            tmp_assign_source_133 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_13__class_decl_dict == NULL);
            tmp_pyparsing_unicode$class_creation_13__class_decl_dict = tmp_assign_source_133;
        }
        {
            PyObject *tmp_assign_source_134;
            PyObject *tmp_metaclass_value_17;
            nuitka_bool tmp_condition_result_64;
            int tmp_truth_name_17;
            PyObject *tmp_type_arg_33;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_bases_value_17;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
            tmp_truth_name_17 = CHECK_IF_TRUE(tmp_pyparsing_unicode$class_creation_13__bases);
            if (tmp_truth_name_17 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            tmp_condition_result_64 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_17;
            } else {
                goto condexpr_false_17;
            }
            condexpr_true_17:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
            tmp_expression_value_86 = tmp_pyparsing_unicode$class_creation_13__bases;
            tmp_subscript_value_21 = mod_consts[15];
            tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_86, tmp_subscript_value_21, 0);
            if (tmp_type_arg_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
            Py_DECREF(tmp_type_arg_33);
            if (tmp_metaclass_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_17);
            condexpr_end_17:;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
            tmp_bases_value_17 = tmp_pyparsing_unicode$class_creation_13__bases;
            tmp_assign_source_134 = SELECT_METACLASS(tmp_metaclass_value_17, tmp_bases_value_17);
            Py_DECREF(tmp_metaclass_value_17);
            if (tmp_assign_source_134 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            assert(tmp_pyparsing_unicode$class_creation_13__metaclass == NULL);
            tmp_pyparsing_unicode$class_creation_13__metaclass = tmp_assign_source_134;
        }
        {
            nuitka_bool tmp_condition_result_65;
            PyObject *tmp_expression_value_87;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__metaclass);
            tmp_expression_value_87 = tmp_pyparsing_unicode$class_creation_13__metaclass;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_87, mod_consts[73]);
            tmp_condition_result_65 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_65 == NUITKA_BOOL_TRUE) {
                goto branch_yes_48;
            } else {
                goto branch_no_48;
            }
        }
        branch_yes_48:;
        {
            PyObject *tmp_assign_source_135;
            PyObject *tmp_called_value_41;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_args_value_34;
            PyObject *tmp_tuple_element_69;
            PyObject *tmp_kwargs_value_34;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__metaclass);
            tmp_expression_value_88 = tmp_pyparsing_unicode$class_creation_13__metaclass;
            tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[73]);
            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            tmp_tuple_element_69 = mod_consts[146];
            tmp_args_value_34 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_69);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
            tmp_tuple_element_69 = tmp_pyparsing_unicode$class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_69);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__class_decl_dict);
            tmp_kwargs_value_34 = tmp_pyparsing_unicode$class_creation_13__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 309;
            tmp_assign_source_135 = CALL_FUNCTION(tmp_called_value_41, tmp_args_value_34, tmp_kwargs_value_34);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_value_34);
            if (tmp_assign_source_135 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            assert(tmp_pyparsing_unicode$class_creation_13__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_13__prepared = tmp_assign_source_135;
        }
        {
            bool tmp_condition_result_66;
            PyObject *tmp_operand_value_17;
            PyObject *tmp_expression_value_89;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__prepared);
            tmp_expression_value_89 = tmp_pyparsing_unicode$class_creation_13__prepared;
            tmp_result = HAS_ATTR_BOOL(tmp_expression_value_89, mod_consts[75]);
            tmp_operand_value_17 = (tmp_result) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            tmp_condition_result_66 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_66 != false) {
                goto branch_yes_49;
            } else {
                goto branch_no_49;
            }
        }
        branch_yes_49:;
        {
            PyObject *tmp_raise_type_17;
            PyObject *tmp_raise_value_17;
            PyObject *tmp_mod_expr_left_17;
            PyObject *tmp_mod_expr_right_17;
            PyObject *tmp_tuple_element_70;
            PyObject *tmp_getattr_target_17;
            PyObject *tmp_getattr_attr_17;
            PyObject *tmp_getattr_default_17;
            tmp_raise_type_17 = PyExc_TypeError;
            tmp_mod_expr_left_17 = mod_consts[76];
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__metaclass);
            tmp_getattr_target_17 = tmp_pyparsing_unicode$class_creation_13__metaclass;
            tmp_getattr_attr_17 = mod_consts[2];
            tmp_getattr_default_17 = mod_consts[77];
            tmp_tuple_element_70 = BUILTIN_GETATTR(tmp_getattr_target_17, tmp_getattr_attr_17, tmp_getattr_default_17);
            if (tmp_tuple_element_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_90;
                PyObject *tmp_type_arg_34;
                PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_70);
                CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__prepared);
                tmp_type_arg_34 = tmp_pyparsing_unicode$class_creation_13__prepared;
                tmp_expression_value_90 = BUILTIN_TYPE1(tmp_type_arg_34);
                assert(!(tmp_expression_value_90 == NULL));
                tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[2]);
                Py_DECREF(tmp_expression_value_90);
                if (tmp_tuple_element_70 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 309;
                    type_description_2 = "o";
                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_70);
            }
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_mod_expr_right_17);
            goto try_except_handler_56;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_raise_value_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
            Py_DECREF(tmp_mod_expr_right_17);
            if (tmp_raise_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_56;
            }
            exception_type = tmp_raise_type_17;
            Py_INCREF(tmp_raise_type_17);
            exception_value = tmp_raise_value_17;
            exception_lineno = 309;
            RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_56;
        }
        branch_no_49:;
        goto branch_end_48;
        branch_no_48:;
        {
            PyObject *tmp_assign_source_136;
            tmp_assign_source_136 = MAKE_DICT_EMPTY();
            assert(tmp_pyparsing_unicode$class_creation_13__prepared == NULL);
            tmp_pyparsing_unicode$class_creation_13__prepared = tmp_assign_source_136;
        }
        branch_end_48:;
        {
            PyObject *tmp_set_locals_19;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__prepared);
            tmp_set_locals_19 = tmp_pyparsing_unicode$class_creation_13__prepared;
            locals_pyparsing$unicode$$$class__19_Devanagari_309 = tmp_set_locals_19;
            Py_INCREF(tmp_set_locals_19);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[51];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__19_Devanagari_309, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_2 = "o";
            goto try_except_handler_58;
        }
        tmp_dictset_value = mod_consts[147];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__19_Devanagari_309, mod_consts[1], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_2 = "o";
            goto try_except_handler_58;
        }
        tmp_dictset_value = mod_consts[148];
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__19_Devanagari_309, mod_consts[54], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_2 = "o";
            goto try_except_handler_58;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__19_Devanagari_309, mod_consts[62], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_2 = "o";
            goto try_except_handler_58;
        }
        frame_4ecc67404d53765ac5ef970eec1ecf6e_18 = MAKE_CLASS_FRAME(codeobj_4ecc67404d53765ac5ef970eec1ecf6e, module_pyparsing$unicode, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4ecc67404d53765ac5ef970eec1ecf6e_18);
        assert(Py_REFCNT(frame_4ecc67404d53765ac5ef970eec1ecf6e_18) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST2(mod_consts[149],mod_consts[150]);
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__19_Devanagari_309, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_3 = "o";
            goto frame_exception_exit_18;
        }
        {
            PyObject *tmp_ass_subvalue_17;
            PyObject *tmp_ass_subscribed_17;
            PyObject *tmp_ass_subscript_17;
            tmp_ass_subvalue_17 = PyObject_GetItem(locals_pyparsing$unicode$$$class__19_Devanagari_309, mod_consts[60]);

            if (tmp_ass_subvalue_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_17 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[60]);

                    if (unlikely(tmp_ass_subvalue_17 == NULL)) {
                        tmp_ass_subvalue_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
                    }

                    if (tmp_ass_subvalue_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 311;
                        type_description_3 = "o";
                        goto frame_exception_exit_18;
                    }
                    Py_INCREF(tmp_ass_subvalue_17);
                } else {
                    goto frame_exception_exit_18;
                }
            }

            tmp_ass_subscribed_17 = PyObject_GetItem(locals_pyparsing$unicode$$$class__19_Devanagari_309, mod_consts[62]);

            if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_17);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[62]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 311;
                type_description_3 = "o";
                goto frame_exception_exit_18;
            }

            if (tmp_ass_subscribed_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_17);

                exception_lineno = 311;
                type_description_3 = "o";
                goto frame_exception_exit_18;
            }
            tmp_ass_subscript_17 = mod_consts[11];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
            Py_DECREF(tmp_ass_subscribed_17);
            Py_DECREF(tmp_ass_subvalue_17);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_3 = "o";
                goto frame_exception_exit_18;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_16;
        frame_exception_exit_18:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4ecc67404d53765ac5ef970eec1ecf6e_18, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4ecc67404d53765ac5ef970eec1ecf6e_18->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4ecc67404d53765ac5ef970eec1ecf6e_18, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4ecc67404d53765ac5ef970eec1ecf6e_18,
            type_description_3,
            outline_18_var___class__
        );



        assertFrameObject(frame_4ecc67404d53765ac5ef970eec1ecf6e_18);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_17;
        frame_no_exception_16:;
        goto skip_nested_handling_16;
        nested_frame_exit_17:;
        type_description_2 = "o";
        goto try_except_handler_58;
        skip_nested_handling_16:;
        {
            nuitka_bool tmp_condition_result_67;
            PyObject *tmp_cmp_expr_left_16;
            PyObject *tmp_cmp_expr_right_16;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
            tmp_cmp_expr_left_16 = tmp_pyparsing_unicode$class_creation_13__bases;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases_orig);
            tmp_cmp_expr_right_16 = tmp_pyparsing_unicode$class_creation_13__bases_orig;
            tmp_condition_result_67 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
            if (tmp_condition_result_67 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_58;
            }
            if (tmp_condition_result_67 == NUITKA_BOOL_TRUE) {
                goto branch_yes_50;
            } else {
                goto branch_no_50;
            }
        }
        branch_yes_50:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases_orig);
        tmp_dictset_value = tmp_pyparsing_unicode$class_creation_13__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__19_Devanagari_309, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_2 = "o";
            goto try_except_handler_58;
        }
        branch_no_50:;
        {
            PyObject *tmp_assign_source_137;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_value_35;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_kwargs_value_35;
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__metaclass);
            tmp_called_value_42 = tmp_pyparsing_unicode$class_creation_13__metaclass;
            tmp_tuple_element_71 = mod_consts[146];
            tmp_args_value_35 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
            tmp_tuple_element_71 = tmp_pyparsing_unicode$class_creation_13__bases;
            PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_71);
            tmp_tuple_element_71 = locals_pyparsing$unicode$$$class__19_Devanagari_309;
            PyTuple_SET_ITEM0(tmp_args_value_35, 2, tmp_tuple_element_71);
            CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__class_decl_dict);
            tmp_kwargs_value_35 = tmp_pyparsing_unicode$class_creation_13__class_decl_dict;
            frame_29b85877417b6ac44a48f28511edcd54_3->m_frame.f_lineno = 309;
            tmp_assign_source_137 = CALL_FUNCTION(tmp_called_value_42, tmp_args_value_35, tmp_kwargs_value_35);
            Py_DECREF(tmp_args_value_35);
            if (tmp_assign_source_137 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 309;
                type_description_2 = "o";
                goto try_except_handler_58;
            }
            assert(outline_18_var___class__ == NULL);
            outline_18_var___class__ = tmp_assign_source_137;
        }
        CHECK_OBJECT(outline_18_var___class__);
        tmp_dictset_value = outline_18_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_58;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_58:;
        Py_DECREF(locals_pyparsing$unicode$$$class__19_Devanagari_309);
        locals_pyparsing$unicode$$$class__19_Devanagari_309 = NULL;
        goto try_return_handler_57;
        // Exception handler code:
        try_except_handler_58:;
        exception_keeper_type_53 = exception_type;
        exception_keeper_value_53 = exception_value;
        exception_keeper_tb_53 = exception_tb;
        exception_keeper_lineno_53 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__19_Devanagari_309);
        locals_pyparsing$unicode$$$class__19_Devanagari_309 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_53;
        exception_value = exception_keeper_value_53;
        exception_tb = exception_keeper_tb_53;
        exception_lineno = exception_keeper_lineno_53;

        goto try_except_handler_57;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_57:;
        CHECK_OBJECT(outline_18_var___class__);
        Py_DECREF(outline_18_var___class__);
        outline_18_var___class__ = NULL;
        goto outline_result_19;
        // Exception handler code:
        try_except_handler_57:;
        exception_keeper_type_54 = exception_type;
        exception_keeper_value_54 = exception_value;
        exception_keeper_tb_54 = exception_tb;
        exception_keeper_lineno_54 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_54;
        exception_value = exception_keeper_value_54;
        exception_tb = exception_keeper_tb_54;
        exception_lineno = exception_keeper_lineno_54;

        goto outline_exception_19;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_19:;
        exception_lineno = 309;
        goto try_except_handler_56;
        outline_result_19:;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[146], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_2 = "o";
            goto try_except_handler_56;
        }
        goto try_end_19;
        // Exception handler code:
        try_except_handler_56:;
        exception_keeper_type_55 = exception_type;
        exception_keeper_value_55 = exception_value;
        exception_keeper_tb_55 = exception_tb;
        exception_keeper_lineno_55 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_pyparsing_unicode$class_creation_13__bases_orig);
        tmp_pyparsing_unicode$class_creation_13__bases_orig = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_13__bases);
        tmp_pyparsing_unicode$class_creation_13__bases = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_13__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_13__class_decl_dict = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_13__metaclass);
        tmp_pyparsing_unicode$class_creation_13__metaclass = NULL;
        Py_XDECREF(tmp_pyparsing_unicode$class_creation_13__prepared);
        tmp_pyparsing_unicode$class_creation_13__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_55;
        exception_value = exception_keeper_value_55;
        exception_tb = exception_keeper_tb_55;
        exception_lineno = exception_keeper_lineno_55;

        goto frame_exception_exit_3;
        // End of try:
        try_end_19:;


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_17;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_29b85877417b6ac44a48f28511edcd54_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_29b85877417b6ac44a48f28511edcd54_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_29b85877417b6ac44a48f28511edcd54_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_29b85877417b6ac44a48f28511edcd54_3,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_29b85877417b6ac44a48f28511edcd54_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_17:;
        goto skip_nested_handling_17;
        nested_frame_exit_2:;

        goto try_except_handler_10;
        skip_nested_handling_17:;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases_orig);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_13__bases_orig);
        tmp_pyparsing_unicode$class_creation_13__bases_orig = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__bases);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_13__bases);
        tmp_pyparsing_unicode$class_creation_13__bases = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__class_decl_dict);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_13__class_decl_dict);
        tmp_pyparsing_unicode$class_creation_13__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__metaclass);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_13__metaclass);
        tmp_pyparsing_unicode$class_creation_13__metaclass = NULL;
        CHECK_OBJECT(tmp_pyparsing_unicode$class_creation_13__prepared);
        Py_DECREF(tmp_pyparsing_unicode$class_creation_13__prepared);
        tmp_pyparsing_unicode$class_creation_13__prepared = NULL;
        {
            nuitka_bool tmp_condition_result_68;
            PyObject *tmp_cmp_expr_left_17;
            PyObject *tmp_cmp_expr_right_17;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_17 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_17 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_68 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
            if (tmp_condition_result_68 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
                goto branch_yes_51;
            } else {
                goto branch_no_51;
            }
        }
        branch_yes_51:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118, mod_consts[86], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto try_except_handler_10;
        }
        branch_no_51:;
        {
            PyObject *tmp_assign_source_138;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_value_36;
            PyObject *tmp_tuple_element_72;
            PyObject *tmp_kwargs_value_36;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_43 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_72 = mod_consts[74];
            tmp_args_value_36 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_72);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_72 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_72);
            tmp_tuple_element_72 = locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118;
            PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_72);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_36 = tmp_class_creation_3__class_decl_dict;
            frame_8b4a836a4632cc61b40b2b4efada07fc->m_frame.f_lineno = 118;
            tmp_assign_source_138 = CALL_FUNCTION(tmp_called_value_43, tmp_args_value_36, tmp_kwargs_value_36);
            Py_DECREF(tmp_args_value_36);
            if (tmp_assign_source_138 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_138;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_25 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118);
        locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_56 = exception_type;
        exception_keeper_value_56 = exception_value;
        exception_keeper_tb_56 = exception_tb;
        exception_keeper_lineno_56 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118);
        locals_pyparsing$unicode$$$class__3_pyparsing_unicode_118 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_56;
        exception_value = exception_keeper_value_56;
        exception_tb = exception_keeper_tb_56;
        exception_lineno = exception_keeper_lineno_56;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_57 = exception_type;
        exception_keeper_value_57 = exception_value;
        exception_keeper_tb_57 = exception_tb;
        exception_keeper_lineno_57 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_57;
        exception_value = exception_keeper_value_57;
        exception_tb = exception_keeper_tb_57;
        exception_lineno = exception_keeper_lineno_57;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 118;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_25);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_58;
    exception_value = exception_keeper_value_58;
    exception_tb = exception_keeper_tb_58;
    exception_lineno = exception_keeper_lineno_58;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_100;
        tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_93 == NULL)) {
            tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[107]);
        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[110]);
        Py_DECREF(tmp_expression_value_92);
        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[11]);
        Py_DECREF(tmp_expression_value_91);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_96 == NULL)) {
            tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[107]);
        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[115]);
        Py_DECREF(tmp_expression_value_95);
        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[11]);
        Py_DECREF(tmp_expression_value_94);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[107]);
        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[119]);
        Py_DECREF(tmp_expression_value_98);
        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[11]);
        Py_DECREF(tmp_expression_value_97);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[107]);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[11], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[136]);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_4 == NULL)) {
            tmp_assattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[151], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_assattr_target_5;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[103]);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_5 == NULL)) {
            tmp_assattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_5);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[152], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_assattr_target_6;
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[99]);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_6 == NULL)) {
            tmp_assattr_target_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_6);

            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[153], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_assattr_target_7;
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[95]);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_7 == NULL)) {
            tmp_assattr_target_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_assattr_target_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_7);

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[154], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_assattr_target_8;
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[142]);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_8 == NULL)) {
            tmp_assattr_target_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_assattr_target_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_8);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[155], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_assattr_target_9;
        tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_106 == NULL)) {
            tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[107]);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_9 == NULL)) {
            tmp_assattr_target_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_assattr_target_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_9);

            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[156], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_assattr_target_10;
        PyObject *tmp_expression_value_109;
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[107]);
        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[110]);
        Py_DECREF(tmp_expression_value_107);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[107]);
        if (tmp_assattr_target_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_10);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[157], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_target_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_assattr_target_11;
        PyObject *tmp_expression_value_112;
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[107]);
        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[119]);
        Py_DECREF(tmp_expression_value_110);
        if (tmp_assattr_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[107]);
        if (tmp_assattr_target_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_11);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[158], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_target_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_assattr_target_12;
        PyObject *tmp_expression_value_115;
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_113 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[107]);
        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[115]);
        Py_DECREF(tmp_expression_value_113);
        if (tmp_assattr_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[107]);
        if (tmp_assattr_target_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_12);

            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[159], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_target_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_assattr_target_13;
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[127]);
        if (tmp_assattr_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_13 == NULL)) {
            tmp_assattr_target_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_assattr_target_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_13);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[160], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_assattr_target_14;
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[131]);
        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_14 == NULL)) {
            tmp_assattr_target_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_assattr_target_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_14);

            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[161], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_assattr_target_15;
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_assattr_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[146]);
        if (tmp_assattr_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_assattr_target_15 == NULL)) {
            tmp_assattr_target_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_assattr_target_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_15);

            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[162], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_18;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b4a836a4632cc61b40b2b4efada07fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b4a836a4632cc61b40b2b4efada07fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b4a836a4632cc61b40b2b4efada07fc, exception_lineno);
    }



    assertFrameObject(frame_8b4a836a4632cc61b40b2b4efada07fc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_18:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyparsing.unicode", false);

    Py_INCREF(module_pyparsing$unicode);
    return module_pyparsing$unicode;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyparsing$unicode, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pyparsing$unicode", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
