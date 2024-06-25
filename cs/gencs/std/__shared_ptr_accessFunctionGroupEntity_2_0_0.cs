using System.Runtime.InteropServices;
namespace gencs.std;
public class __shared_ptr_accessFunctionGroupEntity_2_0_0
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.__shared_ptr_accessFunctionGroupEntity_2_0_0 obj)
    {
        return obj.mObjectHandle;
    }
    public __shared_ptr_accessFunctionGroupEntity_2_0_0(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std___shared_ptr_accessFunctionGroupEntity_2_0_0___shared_ptr_access0(IntPtr param1);
    public __shared_ptr_accessFunctionGroupEntity_2_0_0(gencs.std.__shared_ptr_accessFunctionGroupEntity_2_0_0 param1) : this(std___shared_ptr_accessFunctionGroupEntity_2_0_0___shared_ptr_access0(gencs.std.__shared_ptr_accessFunctionGroupEntity_2_0_0.AG_getObjectHandle(param1)))
    {
    }
}
