///////////////////////////////////////////////////////////////////////////////
// BSD 3-Clause License
//
// Copyright (c) 2019, Nefelus Inc
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef _PARSE_H
#define _PARSE_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "tcl.h"
#include "globals.h"
#include "debug.h"
#include "tagManager.h"
#include "layerset.h"
#include "dataset.h"
#include "b100.h"


char * skiptokval(char *s);
void readList(char *list, DataSet *ds, tagManager &tm, LayerSet &ls);
void readChannel(char *channel, Tcl_Interp *interp, DataSet *ds, tagManager& tm, LayerSet &ls);
void readStream(char *channel, Tcl_Interp *interp, DataSet *ds, tagManager& tm, LayerSet &ls);
void readStreamz(char *channel, Tcl_Interp *interp, DataSet *ds, tagManager& tm, LayerSet &ls);
void readStream2(char *channel, Tcl_Interp *interp, DataSet *ds, tagManager& tm, LayerSet &ls);
//void addObject(char *line, int len, DataSet *ds, tagManager& tm, LayerSet &ls);
void init_idx(tagManager &tm);
void addObject(char *line, DataSet *ds, tagManager& tm, LayerSet &ls);
void addObject2(char *line, DataSet *ds, tagManager& tm, LayerSet &ls);
void addObjectFixed(char *line, DataSet *ds, tagManager& tm, LayerSet &ls);
void addObjectFixedI(char *line, DataSet *ds, tagManager& tm, LayerSet &ls);
void addObjectFixedtest(char *line, DataSet *ds, tagManager& tm, LayerSet &ls);

int lower(int x0, int x1);

void pool_init();
RenderBox *pool_alloc();
void pool_free(RenderBox *rb);


#endif