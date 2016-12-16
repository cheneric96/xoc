/*@
XOC Release License

Copyright (c) 2013-2014, Alibaba Group, All rights reserved.

    compiler@aliexpress.com

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the Su Zhenyu nor the names of its contributors
      may be used to endorse or promote products derived from this software
      without specific prior written permission.

THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS
BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

author: Su Zhenyu
@*/
<<<<<<< HEAD:example/ex1/ex1.h
#ifndef _EX1_H_
#define _EX1_H_

class CVAR : public VAR {
public:
	virtual CHAR * dumpVARDecl(OUT CHAR * buf) { return NULL; }
};


class CVarMgr : public VarMgr {
public:
	CVarMgr(RegionMgr * mgr) : VarMgr(mgr) {}
	virtual ~CVarMgr() {}
	virtual VAR * newVar() { return new CVAR(); }
};
=======
#ifndef _DEX_PASS_MGR_H_
#define _DEX_PASS_MGR_H_

class DexPassMgr : public PassMgr {
public:
    DexPassMgr(Region * ru) : PassMgr(ru) {}
    virtual ~DexPassMgr() {}
>>>>>>> dfa247d68c664b4147d8f39632c66fd093ca9d64:dex/dex_pass_mgr.h

    virtual Pass * allocCFG();
    virtual Pass * allocDCE();
    virtual Pass * allocCopyProp();
    virtual Pass * allocRP();

<<<<<<< HEAD:example/ex1/ex1.h
class CDdxMgr : public DbxMgr {
public:
	//Append src file line into dump file.
	//Only print statement line.
	virtual void printSrcLine(IR const* ir) { return; }
=======
    virtual void performScalarOpt(OptCtx & oc);
>>>>>>> dfa247d68c664b4147d8f39632c66fd093ca9d64:dex/dex_pass_mgr.h
};

#endif