#include "facade.h"
#include "subsystem.h"

void Facade::Compile(){
        CSyntaxParser syntaxParser;
        CGenMidCode genMidCode;
        CGenAssemblyCode genAssemblyCode;
        CLinkSystem linkSystem;
        syntaxParser.SyntaxParser();
        genMidCode.GenMidCode();
        genAssemblyCode.GenAssemblyCode();
        linkSystem.LinkSystem();
}