/*
 * Copyright © 2018-NOW Synapse Research Innovation
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

/**
 * \file ctype.h
 * \brief Character handling.
 * 
 * \author Srikanth Anantharam
 * \date 14-01-2018
 * \copyright Apache License
 */

#pragma once

/**
 * \brief tests for any alphanumeric character.
 * 
 * \param[in] c a character.
 * \return \c true: if \p c is an alphanumeric character, \c false: otherwise.
 * 
 * The \c isalnum function tests for any character for which \c isalpha or
 * \c isdigit is true.
 */
int isalnum(int c);

/** 
 * \brief tests for any alphabetic character.
 * 
 * \param[in] c a character.
 * \return \c true: if \p c is an alphabetic character, \c false: otherwise.
 * 
 * The \c isalpha function tests for any character for which \c isupper or
 * \c islower is true, or any character that is one of a locale-specific set of
 * alphabetic characters for which none of \c iscntrl, \c isdigit, \c ispunct,
 * or \c isspace is \c true. In the \c "C" locale, \c isalpha returns true only
 * for the characters for which \c isupper or \c islower is true.
 */
int isalpha(int c);

/**
 * \brief tests for any blank character.
 * 
 * \param[in] c a character.
 * \return \c true: if \p c is \c ' ' or \c '\\t', \c false: otherwise.
 *
 * The \c isblank function tests for any character that is a standard blank
 * character or is one of a locale-specific set of characters for which
 * \c isspace is \c true and that is used to separate words within a line of
 * text. The standard blank characters are the following: space (\c ' '), and
 * horizontal tab (\c '\\t'). In the \c "C" locale, \c isblank returns \c true
 * only for the standard blank characters.
 */
int isblank(int c);

/** 
 * \brief tests for any control character.
 * 
 * \param[in] c a character.
 * \return \c true: if \p c is a control character, \c false: otherwise.
 */
int iscntrl(int c);

/** 
 * \brief tests for any decimal-digit character.
 * 
 * \param[in] c a character.
 * \return \c true: if \p c is a decimal-digit character, \c false: otherwise.
 */
int isdigit(int c);

/** 
 * \brief tests for any printing character except space (\c ' ').
 * 
 * \param[in] c a character.
 * \return \c true: if \p c is a printing character other than space, \c false:
 *         otherwise.
 */
int isgraph(int c);

/** 
 * \brief tests for any character that is a lowercase letter.
 * 
 * \param[in] c a character.
 * \return \c true: if \p c is a lowercase letter character, \c false: otherwise.
 *  
 * The \c islower function tests for any character that is a lowercase letter
 * or is one of a locale-specific set of characters for which none of \c iscntrl
 * , \c isdigit, \c ispunct, or \c isspace is \c true. In the \c "C" locale,
 * \c islower returns \c true only for the lowercase letters.
 */
int islower(int c);

/** 
 * \brief tests for any printing character including space (\c ' ').
 * 
 * \param[in] c a character.
 * \return \c true: if \p c is a printing character including space, \c false:
 *         otherwise.
 */
int isprint(int c);

/** 
 * \brief tests for any punctuation character.
 * 
 * \param[in] c a character.
 * \return \c true: if \p c is a punctuation character, \c false: otherwise.
 *
 * The \c ispunct function tests for any printing character that is one of a
 * locale-specific set of punctuation characters for which neither \c isspace
 * nor \c isalnum is \c true. In the \c "C" locale, \c ispunct returns \c true
 * for every printing character for which neither \c isspace nor \c isalnum is
 * \c true.
 */
int ispunct(int c);

/**
 * \brief tests for any white-space character.
 * 
 * \param[in] c a character.
 * \return \c true: if \p c is a white-space character, \c false: otherwise.
 * 
 * The \c isspace function tests for any character that is a standard white-
 * space character or is one of a locale-specific set of characters for which
 * \c isalnum is \c false. The standard white-space characters are the following
 * : space (\c ' '), form feed (\c '\\f'), new-line(\c '\\n'), carriage return
 * (\c '\\r'), horizontal tab (\c '\\t'), and vertical tab (\c '\\v'). In the
 * \c "C" locale, \c isspace returns \c true only for the standard white-space
 * characters.
 */
int isspace(int c);

/**
 * \brief tests for any character that is an uppercase letter.
 * 
 * \param[in] c a character.
 * \return \c true: if \p c is an uppercase letter, \c false: otherwise.
 * 
 * The \c isupper function tests for any character that is an uppercase letter
 * or is one of a locale-specific set of characters for which none of \c iscntrl
 * , \c isdigit, \c ispunct, or \c isspace is \c true. In the \c "C" locale,
 * \c isupper returns \c true only for the uppercase letters.
 */
int isupper(int c);

/**
 * \brief tests for any hexadecimal-digit character.
 * 
 * \param[in] c a character.
 * \return \c true: if \p c is a hexadecimal-digit character, \c false:
 *         otherwise.
 * 
 * 
 */
int isxdigit(int c);

/**
 * \brief converts an uppercase letter to a corresponding lowercase letter.
 * 
 * \param[in] c a character.
 * \return lowercase letter if \p c is a uppercase letter (\c isupper is \c
 *         true) and a corresponfing lowercase letter exists, otherwise the
 *         argument is returned unchanged.
 */
int tolower(int c);

/**
 * \brief converts a lowercase letter to corresponding uppercase letter.
 * 
 * \param[in] c a character.
 * \return uppercase letter if \p c is a lowercase letter (\c islower is \c
 *         true) and a corresponfing uppercase letter exists, otherwise the
 *         argument is returned unchanged.
 */
int toupper(int c);
