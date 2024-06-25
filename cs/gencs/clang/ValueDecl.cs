using System.Runtime.InteropServices;
namespace gencs.clang;
public class ValueDecl : gencs.clang.NamedDecl
{
    public ValueDecl(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void clang_ValueDecl_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject);
    private void AG_initializeInterceptionContext()
    {
        clang_ValueDecl_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this));
    }
}
