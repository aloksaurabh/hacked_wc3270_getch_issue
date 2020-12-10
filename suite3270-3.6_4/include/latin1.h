/*
 * Copyright (c) 2015 Paul Mattes.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the names of Paul Mattes nor the names of his contributors
 *       may be used to endorse or promote products derived from this software
 *       without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY PAUL MATTES "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 * EVENT SHALL PAUL MATTES BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *	latin1.h
 *		Symbolic names for ISO 8859-1 Latin-1 characters.
 */

/*
 * With the addition of nul, [0-9a-fA-F] and del, these are the standard HTML
 * entity names.
 */
typedef enum {
    latin1_nul    = 0x00,
    latin1_sp     = 0x20,
    latin1_excl   = 0x21,
    latin1_quot   = 0x22,
    latin1_num    = 0x23,
    latin1_dollar = 0x24,
    latin1_percnt = 0x25,
    latin1_amp    = 0x26,
    latin1_apos   = 0x27,
    latin1_lpar   = 0x28,
    latin1_rpar   = 0x29,
    latin1_ast    = 0x2a,
    latin1_plus   = 0x2b,
    latin1_comma  = 0x2c,
    latin1_minus  = 0x2d,
    latin1_period = 0x2e,
    latin1_sol    = 0x2f,
    latin1_0      = 0x30,
    latin1_1      = 0x31,
    latin1_2      = 0x32,
    latin1_3      = 0x33,
    latin1_4      = 0x34,
    latin1_5      = 0x35,
    latin1_6      = 0x36,
    latin1_7      = 0x37,
    latin1_8      = 0x38,
    latin1_9      = 0x39,
    latin1_colon  = 0x3a,
    latin1_semi   = 0x3b,
    latin1_lt     = 0x3c,
    latin1_equals = 0x3d,
    latin1_gt     = 0x3e,
    latin1_quest  = 0x3f,
    latin1_commat = 0x40,
    latin1_A      = 0x41,
    latin1_B      = 0x42,
    latin1_C      = 0x43,
    latin1_D      = 0x44,
    latin1_E      = 0x45,
    latin1_F      = 0x46,
    latin1_G      = 0x47,
    latin1_H      = 0x48,
    latin1_I      = 0x49,
    latin1_J      = 0x4a,
    latin1_K      = 0x4b,
    latin1_L      = 0x4c,
    latin1_M      = 0x4d,
    latin1_N      = 0x4e,
    latin1_O      = 0x4f,
    latin1_P      = 0x50,
    latin1_Q      = 0x51,
    latin1_R      = 0x52,
    latin1_S      = 0x53,
    latin1_T      = 0x54,
    latin1_U      = 0x55,
    latin1_V      = 0x56,
    latin1_W      = 0x57,
    latin1_X      = 0x58,
    latin1_Y      = 0x59,
    latin1_Z      = 0x5a,
    latin1_lsqb   = 0x5b,
    latin1_bsol   = 0x5c,
    latin1_rsqb   = 0x5d,
    latin1_circ   = 0x5e,
    latin1_lowbar = 0x5f,
    latin1_grave  = 0x60,
    latin1_a      = 0x61,
    latin1_b      = 0x62,
    latin1_c      = 0x63,
    latin1_d      = 0x64,
    latin1_e      = 0x65,
    latin1_f      = 0x66,
    latin1_g      = 0x67,
    latin1_h      = 0x68,
    latin1_i      = 0x69,
    latin1_j      = 0x6a,
    latin1_k      = 0x6b,
    latin1_l      = 0x6c,
    latin1_m      = 0x6d,
    latin1_n      = 0x6e,
    latin1_o      = 0x6f,
    latin1_p      = 0x70,
    latin1_q      = 0x71,
    latin1_r      = 0x72,
    latin1_s      = 0x73,
    latin1_t      = 0x74,
    latin1_u      = 0x75,
    latin1_v      = 0x76,
    latin1_w      = 0x77,
    latin1_x      = 0x78,
    latin1_y      = 0x79,
    latin1_z      = 0x7a,
    latin1_lcub   = 0x7b,
    latin1_verbar = 0x7c,
    latin1_rcub   = 0x7d,
    latin1_tilde  = 0x7e,
    latin1_del    = 0x7f,
    latin1_nbsp   = 0xa0,
    latin1_iexcl  = 0xa1,
    latin1_cent   = 0xa2,
    latin1_pound  = 0xa3,
    latin1_curren = 0xa4,
    latin1_yen    = 0xa5,
    latin1_brkbar = 0xa6,
    latin1_sect   = 0xa7,
    latin1_uml    = 0xa8,
    latin1_copy   = 0xa9,
    latin1_ordf   = 0xaa,
    latin1_laquo  = 0xab,
    latin1_not    = 0xac,
    latin1_shy    = 0xad,
    latin1_reg    = 0xae,
    latin1_macr   = 0xaf,
    latin1_deg    = 0xb0,
    latin1_plusmn = 0xb1,
    latin1_sup2   = 0xb2,
    latin1_sup3   = 0xb3,
    latin1_acute  = 0xb4,
    latin1_micro  = 0xb5,
    latin1_para   = 0xb6,
    latin1_middot = 0xb7,
    latin1_cedil  = 0xb8,
    latin1_sup1   = 0xb9,
    latin1_ordm   = 0xba,
    latin1_raquo  = 0xbb,
    latin1_frac14 = 0xbc,
    latin1_frac12 = 0xbd,
    latin1_frac34 = 0xbe,
    latin1_iquest = 0xbf,
    latin1_Agrave = 0xc0,
    latin1_Aacute = 0xc1,
    latin1_Acirc  = 0xc2,
    latin1_Atilde = 0xc3,
    latin1_Auml   = 0xc4,
    latin1_Aring  = 0xc5,
    latin1_AElig  = 0xc6,
    latin1_Ccedil = 0xc7,
    latin1_Egrave = 0xc8,
    latin1_Eacute = 0xc9,
    latin1_Ecirc  = 0xca,
    latin1_Euml   = 0xcb,
    latin1_Igrave = 0xcc,
    latin1_Iacute = 0xcd,
    latin1_Icirc  = 0xce,
    latin1_Iuml   = 0xcf,
    latin1_ETH    = 0xd0,
    latin1_Ntilde = 0xd1,
    latin1_Ograve = 0xd2,
    latin1_Oacute = 0xd3,
    latin1_Ocirc  = 0xd4,
    latin1_Otilde = 0xd5,
    latin1_Ouml   = 0xd6,
    latin1_times  = 0xd7,
    latin1_Oslash = 0xd8,
    latin1_Ugrave = 0xd9,
    latin1_Uacute = 0xda,
    latin1_Ucirc  = 0xdb,
    latin1_Uuml   = 0xdc,
    latin1_Yacute = 0xdd,
    latin1_THORN  = 0xde,
    latin1_szlig  = 0xdf,
    latin1_agrave = 0xe0,
    latin1_aacute = 0xe1,
    latin1_acirc  = 0xe2,
    latin1_atilde = 0xe3,
    latin1_auml   = 0xe4,
    latin1_aring  = 0xe5,
    latin1_aelig  = 0xe6,
    latin1_ccedil = 0xe7,
    latin1_egrave = 0xe8,
    latin1_eacute = 0xe9,
    latin1_ecirc  = 0xea,
    latin1_euml   = 0xeb,
    latin1_igrave = 0xec,
    latin1_iacute = 0xed,
    latin1_icirc  = 0xee,
    latin1_iuml   = 0xef,
    latin1_eth    = 0xf0,
    latin1_ntilde = 0xf1,
    latin1_ograve = 0xf2,
    latin1_oacute = 0xf3,
    latin1_ocirc  = 0xf4,
    latin1_otilde = 0xf5,
    latin1_ouml   = 0xf6,
    latin1_divide = 0xf7,
    latin1_oslash = 0xf8,
    latin1_ugrave = 0xf9,
    latin1_uacute = 0xfa,
    latin1_ucirc  = 0xfb,
    latin1_uuml   = 0xfc,
    latin1_yacute = 0xfd,
    latin1_thorn  = 0xfe,
    latin1_yuml   = 0xff
} latin1_symbol_t;
