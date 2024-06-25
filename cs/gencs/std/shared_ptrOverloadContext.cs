using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrOverloadContext : gencs.std.__shared_ptrOverloadContext_2
{
    public shared_ptrOverloadContext(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrOverloadContext_shared_ptr0();
    public shared_ptrOverloadContext() : this(std_shared_ptrOverloadContext_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrOverloadContext_shared_ptr1(IntPtr __r);
    public shared_ptrOverloadContext(gencs.std.shared_ptrOverloadContext __r) : this(std_shared_ptrOverloadContext_shared_ptr1(gencs.std.shared_ptrOverloadContext.AG_getObjectHandle(__r)))
    {
    }
}
