using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrEntity : gencs.std.__shared_ptrEntity_2
{
    public shared_ptrEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrEntity_shared_ptr0();
    public shared_ptrEntity() : this(std_shared_ptrEntity_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrEntity_shared_ptr1(IntPtr __r);
    public shared_ptrEntity(gencs.std.shared_ptrEntity __r) : this(std_shared_ptrEntity_shared_ptr1(gencs.std.shared_ptrEntity.AG_getObjectHandle(__r)))
    {
    }
}
