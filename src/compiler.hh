#pragma once
#include "fsa_anno.hh"
#include "syntax.hh"

void print_assoc(const FsaAnno& anno);
void print_automaton(const Fsa& fsa);
void compile(DefineStmt*);
void compile_export(DefineStmt* stmt);
void generate_cxx(Module* mo);
void generate_graphviz(Module* mo);
extern map<DefineStmt*, FsaAnno> compiled;
