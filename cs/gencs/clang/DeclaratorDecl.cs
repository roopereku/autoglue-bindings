using System.Runtime.InteropServices;
namespace gencs.clang;
public class DeclaratorDecl : gencs.clang.ValueDecl
{
    public DeclaratorDecl(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void clang_DeclaratorDecl_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject);
    private void AG_initializeInterceptionContext()
    {
        clang_DeclaratorDecl_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this));
    }
}
