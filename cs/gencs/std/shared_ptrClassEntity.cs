using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrClassEntity : gencs.std.__shared_ptrClassEntity_2
{
    public shared_ptrClassEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrClassEntity_shared_ptr0();
    public shared_ptrClassEntity() : this(std_shared_ptrClassEntity_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrClassEntity_shared_ptr1(IntPtr __r);
    public shared_ptrClassEntity(gencs.std.shared_ptrClassEntity __r) : this(std_shared_ptrClassEntity_shared_ptr1(gencs.std.shared_ptrClassEntity.AG_getObjectHandle(__r)))
    {
    }
}
