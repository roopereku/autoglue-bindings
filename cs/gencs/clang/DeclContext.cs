using System.Runtime.InteropServices;
namespace gencs.clang;
public class DeclContext
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.DeclContext obj)
    {
        return obj.mObjectHandle;
    }
    public DeclContext(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_DeclContext_DeclContext0(int K);
    protected DeclContext(gencs.clang.Decl.Kind K) : this(clang_DeclContext_DeclContext0((int)K))
    {
    }
}
