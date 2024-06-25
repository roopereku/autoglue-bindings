using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrTypeReferenceEntity : gencs.std.__shared_ptrTypeReferenceEntity_2
{
    public shared_ptrTypeReferenceEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrTypeReferenceEntity_shared_ptr0();
    public shared_ptrTypeReferenceEntity() : this(std_shared_ptrTypeReferenceEntity_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrTypeReferenceEntity_shared_ptr1(IntPtr __r);
    public shared_ptrTypeReferenceEntity(gencs.std.shared_ptrTypeReferenceEntity __r) : this(std_shared_ptrTypeReferenceEntity_shared_ptr1(gencs.std.shared_ptrTypeReferenceEntity.AG_getObjectHandle(__r)))
    {
    }
}
