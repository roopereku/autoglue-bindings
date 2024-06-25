using System.Runtime.InteropServices;
namespace gencs.std;
public class __weak_ptrEntity_2
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.__weak_ptrEntity_2 obj)
    {
        return obj.mObjectHandle;
    }
    public __weak_ptrEntity_2(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
}
