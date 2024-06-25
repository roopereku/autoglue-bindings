using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrEntityContext : gencs.std.__shared_ptrEntityContext_2
{
    public shared_ptrEntityContext(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrEntityContext_shared_ptr0();
    public shared_ptrEntityContext() : this(std_shared_ptrEntityContext_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrEntityContext_shared_ptr1(IntPtr __r);
    public shared_ptrEntityContext(gencs.std.shared_ptrEntityContext __r) : this(std_shared_ptrEntityContext_shared_ptr1(gencs.std.shared_ptrEntityContext.AG_getObjectHandle(__r)))
    {
    }
}
