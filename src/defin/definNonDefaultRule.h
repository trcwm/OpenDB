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

#ifndef ADS_DEFIN_NON_DEFAULT_RULE_H
#define ADS_DEFIN_NON_DEFAULT_RULE_H

#ifndef ADS_H
#include "ads.h"
#endif

#ifndef ADS_GEOM_H
#include "geom.h"
#endif

#ifndef ADS_DEFIN_INON_DEFAULT_RULE_H
#include "definINonDefaultRule.h"
#endif

#ifndef ADS_DEFIN_BASE_H
#include "definBase.h"
#endif

namespace odb {

class dbTechNonDefaultRule;
class dbTechLayerRule;
 
class definNonDefaultRule : public definINonDefaultRule, public definBase
{
    dbTechNonDefaultRule * _cur_rule;
    dbTechLayerRule *      _cur_layer_rule;
    
    virtual void beginRules(int n);
    virtual void beginRule( const char * name );
    virtual void hardSpacing();
    virtual void via( const char * name );
    virtual void viaRule( const char * rule );
    virtual void minCuts( const char * layer, int count );
    virtual void beginLayerRule( const char * layer, int width );
    virtual void spacing(int s);
    virtual void wireExt(int e);
    virtual void endLayerRule();
    virtual void property( const char * name, const char * value );
    virtual void property( const char * name, int value );
    virtual void property( const char * name, double value );
    virtual void endRule();
    virtual void endRules();

  public:
    definNonDefaultRule();
    virtual ~definNonDefaultRule();
    void init();
};
    
} // namespace

#endif
