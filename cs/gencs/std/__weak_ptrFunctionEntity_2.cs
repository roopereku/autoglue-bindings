using System.Runtime.InteropServices;
namespace gencs.std;
public class __weak_ptrFunctionEntity_2
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.__weak_ptrFunctionEntity_2 obj)
    {
        return obj.mObjectHandle;
    }
    public __weak_ptrFunctionEntity_2(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std___weak_ptrFunctionEntity_2___weak_ptr0();
    public __weak_ptrFunctionEntity_2() : this(std___weak_ptrFunctionEntity_2___weak_ptr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std___weak_ptrFunctionEntity_2___weak_ptr1(IntPtr __r);
    public __weak_ptrFunctionEntity_2(gencs.std.__weak_ptrFunctionEntity_2 __r) : this(std___weak_ptrFunctionEntity_2___weak_ptr1(gencs.std.__weak_ptrFunctionEntity_2.AG_getObjectHandle(__r)))
    {
    }
}
