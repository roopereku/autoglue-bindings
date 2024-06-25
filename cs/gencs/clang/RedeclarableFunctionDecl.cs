using System.Runtime.InteropServices;
namespace gencs.clang;
public class RedeclarableFunctionDecl
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.RedeclarableFunctionDecl obj)
    {
        return obj.mObjectHandle;
    }
    public RedeclarableFunctionDecl(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_RedeclarableFunctionDecl_Redeclarable0(IntPtr Ctx);
    public RedeclarableFunctionDecl(gencs.clang.ASTContext Ctx) : this(clang_RedeclarableFunctionDecl_Redeclarable0(gencs.clang.ASTContext.AG_getObjectHandle(Ctx)))
    {
    }
}
