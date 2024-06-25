using System.Runtime.InteropServices;
namespace gencs.std;
public class weak_ptrClassEntity : gencs.std.__weak_ptrClassEntity_2
{
    public weak_ptrClassEntity(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_weak_ptrClassEntity_weak_ptr0();
    public weak_ptrClassEntity() : this(std_weak_ptrClassEntity_weak_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_weak_ptrClassEntity_weak_ptr1(IntPtr param1);
    public weak_ptrClassEntity(gencs.std.weak_ptrClassEntity param1) : this(std_weak_ptrClassEntity_weak_ptr1(gencs.std.weak_ptrClassEntity.AG_getObjectHandle(param1)))
    {
    }
}
