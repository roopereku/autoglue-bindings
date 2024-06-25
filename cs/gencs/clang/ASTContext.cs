using System.Runtime.InteropServices;
namespace gencs.clang;
public class ASTContext : gencs.llvm.RefCountedBaseASTContext
{
    public ASTContext(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_ASTContext_ASTContext0(IntPtr LOpts, IntPtr SM, IntPtr idents, IntPtr sels, IntPtr builtins, int TUKind);
    public ASTContext(gencs.clang.LangOptions LOpts, gencs.clang.SourceManager SM, gencs.clang.IdentifierTable idents, gencs.clang.SelectorTable sels, gencs.clang.Builtin.Context builtins, gencs.clang.TranslationUnitKind TUKind) : this(clang_ASTContext_ASTContext0(gencs.clang.LangOptions.AG_getObjectHandle(LOpts), gencs.clang.SourceManager.AG_getObjectHandle(SM), gencs.clang.IdentifierTable.AG_getObjectHandle(idents), gencs.clang.SelectorTable.AG_getObjectHandle(sels), gencs.clang.Builtin.Context.AG_getObjectHandle(builtins), (int)TUKind))
    {
    }
}
