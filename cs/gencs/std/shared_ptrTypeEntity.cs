using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrTypeEntity : gencs.std.__shared_ptrTypeEntity_2
{
    public shared_ptrTypeEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrTypeEntity_shared_ptr0();
    public shared_ptrTypeEntity() : this(std_shared_ptrTypeEntity_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrTypeEntity_shared_ptr1(IntPtr __r);
    public shared_ptrTypeEntity(gencs.std.shared_ptrTypeEntity __r) : this(std_shared_ptrTypeEntity_shared_ptr1(gencs.std.shared_ptrTypeEntity.AG_getObjectHandle(__r)))
    {
    }
}
