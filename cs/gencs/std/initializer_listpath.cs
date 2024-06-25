using System.Runtime.InteropServices;
namespace gencs.std;
public class initializer_listpath
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.initializer_listpath obj)
    {
        return obj.mObjectHandle;
    }
    public initializer_listpath(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
}
