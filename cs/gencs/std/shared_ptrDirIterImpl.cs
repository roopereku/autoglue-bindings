using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrDirIterImpl : gencs.std.__shared_ptrDirIterImpl_2
{
    public shared_ptrDirIterImpl(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrDirIterImpl_shared_ptr0();
    public shared_ptrDirIterImpl() : this(std_shared_ptrDirIterImpl_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrDirIterImpl_shared_ptr1(IntPtr __r);
    public shared_ptrDirIterImpl(gencs.std.shared_ptrDirIterImpl __r) : this(std_shared_ptrDirIterImpl_shared_ptr1(gencs.std.shared_ptrDirIterImpl.AG_getObjectHandle(__r)))
    {
    }
}
