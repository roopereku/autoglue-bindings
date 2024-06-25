using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrEnumEntryEntity : gencs.std.__shared_ptrEnumEntryEntity_2
{
    public shared_ptrEnumEntryEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrEnumEntryEntity_shared_ptr0();
    public shared_ptrEnumEntryEntity() : this(std_shared_ptrEnumEntryEntity_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrEnumEntryEntity_shared_ptr1(IntPtr __r);
    public shared_ptrEnumEntryEntity(gencs.std.shared_ptrEnumEntryEntity __r) : this(std_shared_ptrEnumEntryEntity_shared_ptr1(gencs.std.shared_ptrEnumEntryEntity.AG_getObjectHandle(__r)))
    {
    }
}
