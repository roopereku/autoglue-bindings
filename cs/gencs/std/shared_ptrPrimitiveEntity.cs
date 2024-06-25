using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrPrimitiveEntity : gencs.std.__shared_ptrPrimitiveEntity_2
{
    public shared_ptrPrimitiveEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrPrimitiveEntity_shared_ptr0();
    public shared_ptrPrimitiveEntity() : this(std_shared_ptrPrimitiveEntity_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrPrimitiveEntity_shared_ptr1(IntPtr __r);
    public shared_ptrPrimitiveEntity(gencs.std.shared_ptrPrimitiveEntity __r) : this(std_shared_ptrPrimitiveEntity_shared_ptr1(gencs.std.shared_ptrPrimitiveEntity.AG_getObjectHandle(__r)))
    {
    }
}
