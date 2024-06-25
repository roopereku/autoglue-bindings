using System.Runtime.InteropServices;
namespace gencs.std;
public class nothrow_t
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.nothrow_t obj)
    {
        return obj.mObjectHandle;
    }
    public nothrow_t(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_nothrow_t_nothrow_t0();
    public nothrow_t() : this(std_nothrow_t_nothrow_t0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_nothrow_t_nothrow_t1(IntPtr param1);
    public nothrow_t(gencs.std.nothrow_t param1) : this(std_nothrow_t_nothrow_t1(gencs.std.nothrow_t.AG_getObjectHandle(param1)))
    {
    }
}
