using System.Runtime.InteropServices;
namespace gencs.llvm;
public class formatv_Object_Base
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.formatv_Object_Base obj)
    {
        return obj.mObjectHandle;
    }
    public formatv_Object_Base(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
}
