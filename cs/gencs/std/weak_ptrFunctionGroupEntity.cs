using System.Runtime.InteropServices;
namespace gencs.std;
public class weak_ptrFunctionGroupEntity : gencs.std.__weak_ptrFunctionGroupEntity_2
{
    public weak_ptrFunctionGroupEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_weak_ptrFunctionGroupEntity_weak_ptr0();
    public weak_ptrFunctionGroupEntity() : this(std_weak_ptrFunctionGroupEntity_weak_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_weak_ptrFunctionGroupEntity_weak_ptr1(IntPtr param1);
    public weak_ptrFunctionGroupEntity(gencs.std.weak_ptrFunctionGroupEntity param1) : this(std_weak_ptrFunctionGroupEntity_weak_ptr1(gencs.std.weak_ptrFunctionGroupEntity.AG_getObjectHandle(param1)))
    {
    }
}
