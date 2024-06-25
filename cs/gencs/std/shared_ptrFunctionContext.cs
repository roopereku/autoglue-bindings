using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrFunctionContext : gencs.std.__shared_ptrFunctionContext_2
{
    public shared_ptrFunctionContext(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrFunctionContext_shared_ptr0();
    public shared_ptrFunctionContext() : this(std_shared_ptrFunctionContext_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrFunctionContext_shared_ptr1(IntPtr __r);
    public shared_ptrFunctionContext(gencs.std.shared_ptrFunctionContext __r) : this(std_shared_ptrFunctionContext_shared_ptr1(gencs.std.shared_ptrFunctionContext.AG_getObjectHandle(__r)))
    {
    }
}
