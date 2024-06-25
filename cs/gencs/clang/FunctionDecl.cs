using System.Runtime.InteropServices;
namespace gencs.clang;
public class FunctionDecl : gencs.clang.DeclaratorDecl
{
    public FunctionDecl(IntPtr ObjectHandle) : base(ObjectHandle)
    {
        baseDeclContext = createBase_DeclContext();
        baseRedeclarableFunctionDecl = createBase_RedeclarableFunctionDecl();
    }
    public readonly gencs.clang.DeclContext baseDeclContext;
    protected virtual gencs.clang.DeclContext createBase_DeclContext()
    {
        return new gencs.clang.DeclContext(mObjectHandle);
    }
    public readonly gencs.clang.RedeclarableFunctionDecl baseRedeclarableFunctionDecl;
    protected virtual gencs.clang.RedeclarableFunctionDecl createBase_RedeclarableFunctionDecl()
    {
        return new gencs.clang.RedeclarableFunctionDecl(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void clang_FunctionDecl_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject);
    private void AG_initializeInterceptionContext()
    {
        clang_FunctionDecl_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this));
    }
}
