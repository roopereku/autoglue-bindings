using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrTyperefContext : gencs.std.__shared_ptrTyperefContext_2
{
    public shared_ptrTyperefContext(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrTyperefContext_shared_ptr0();
    public shared_ptrTyperefContext() : this(std_shared_ptrTyperefContext_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrTyperefContext_shared_ptr1(IntPtr __r);
    public shared_ptrTyperefContext(gencs.std.shared_ptrTyperefContext __r) : this(std_shared_ptrTyperefContext_shared_ptr1(gencs.std.shared_ptrTyperefContext.AG_getObjectHandle(__r)))
    {
    }
}
