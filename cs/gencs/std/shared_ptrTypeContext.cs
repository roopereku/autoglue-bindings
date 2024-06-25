using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrTypeContext : gencs.std.__shared_ptrTypeContext_2
{
    public shared_ptrTypeContext(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrTypeContext_shared_ptr0();
    public shared_ptrTypeContext() : this(std_shared_ptrTypeContext_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrTypeContext_shared_ptr1(IntPtr __r);
    public shared_ptrTypeContext(gencs.std.shared_ptrTypeContext __r) : this(std_shared_ptrTypeContext_shared_ptr1(gencs.std.shared_ptrTypeContext.AG_getObjectHandle(__r)))
    {
    }
}
