using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrFunctionEntity : gencs.std.__shared_ptrFunctionEntity_2
{
    public shared_ptrFunctionEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrFunctionEntity_shared_ptr0();
    public shared_ptrFunctionEntity() : this(std_shared_ptrFunctionEntity_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrFunctionEntity_shared_ptr1(IntPtr __r);
    public shared_ptrFunctionEntity(gencs.std.shared_ptrFunctionEntity __r) : this(std_shared_ptrFunctionEntity_shared_ptr1(gencs.std.shared_ptrFunctionEntity.AG_getObjectHandle(__r)))
    {
    }
}
