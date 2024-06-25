using System.Runtime.InteropServices;
namespace gencs.std;
public class shared_ptrFunctionGroupEntity : gencs.std.__shared_ptrFunctionGroupEntity_2
{
    public shared_ptrFunctionGroupEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrFunctionGroupEntity_shared_ptr0();
    public shared_ptrFunctionGroupEntity() : this(std_shared_ptrFunctionGroupEntity_shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_shared_ptrFunctionGroupEntity_shared_ptr1(IntPtr __r);
    public shared_ptrFunctionGroupEntity(gencs.std.shared_ptrFunctionGroupEntity __r) : this(std_shared_ptrFunctionGroupEntity_shared_ptr1(gencs.std.shared_ptrFunctionGroupEntity.AG_getObjectHandle(__r)))
    {
    }
}
