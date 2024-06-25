using System.Runtime.InteropServices;
namespace gencs.std;
public class __shared_ptrEntity_2 : gencs.std.__shared_ptr_accessEntity_2_0_0
{
    public __shared_ptrEntity_2(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std___shared_ptrEntity_2___shared_ptr0();
    public __shared_ptrEntity_2() : this(std___shared_ptrEntity_2___shared_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std___shared_ptrEntity_2___shared_ptr1(IntPtr __r);
    public __shared_ptrEntity_2(gencs.std.__shared_ptrEntity_2 __r) : this(std___shared_ptrEntity_2___shared_ptr1(gencs.std.__shared_ptrEntity_2.AG_getObjectHandle(__r)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std___shared_ptrEntity_2___shared_ptr2(IntPtr __r, IntPtr param2);
    protected __shared_ptrEntity_2(gencs.std.__weak_ptrEntity_2 __r, gencs.std.nothrow_t param2) : this(std___shared_ptrEntity_2___shared_ptr2(gencs.std.__weak_ptrEntity_2.AG_getObjectHandle(__r), gencs.std.nothrow_t.AG_getObjectHandle(param2)))
    {
    }
}
