/******************************************************************************
*******************************************************************************
**
**  Copyright (C) Sistina Software, Inc.  1997-2003  All rights reserved.
**  Copyright (C) 2004 Red Hat, Inc.  All rights reserved.
**  
**  This copyrighted material is made available to anyone wishing to use,
**  modify, copy, or redistribute it subject to the terms and conditions
**  of the GNU General Public License v.2.
**
*******************************************************************************
******************************************************************************/

#ifndef __UTIL_DOT_H__
#define __UTIL_DOT_H__

uint32_t dlm_hash(const char *data, int len);

void dlm_message_out(struct dlm_message *ms);
void dlm_message_in(struct dlm_message *ms);
void dlm_rcom_out(struct dlm_rcom *rc);
void dlm_rcom_in(struct dlm_rcom *rc);

#endif
