/*
 * Copyright (c) 1993-2009, 2013-2014 Paul Mattes.
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
 *	nvt_gui.c
 *		X11-specific functions for NVT mode.
 */

#include "globals.h"
#include "xglobals.h"

#include <X11/Shell.h>

#include "appres.h"
#include "nvt_gui.h"
#include "screen.h"
#include "xscreen.h"

/**
 * X11 version of the xterm text escape
 *
 * @param[in] opcode	Operation to perform
 * @param[in] text	Associated text
 */
void
xterm_text_gui(int code, const char *text)
{
    switch (code) {
    case 0:	/* icon name and window title */
	XtVaSetValues(toplevel, XtNiconName, text, NULL);
	XtVaSetValues(toplevel, XtNtitle, text, NULL);
	break;
    case 1:	/* icon name */
	XtVaSetValues(toplevel, XtNiconName, text, NULL);
	break;
    case 2:	/* window_title */
	XtVaSetValues(toplevel, XtNtitle, text, NULL);
	break;
    case 50:	/* font */
	screen_newfont(text, False, False);
	break;
    default:
	break;
    }
}
