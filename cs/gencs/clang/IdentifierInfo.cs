using System.Runtime.InteropServices;
namespace gencs.clang;
public class IdentifierInfo
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.IdentifierInfo obj)
    {
        return obj.mObjectHandle;
    }
    public IdentifierInfo(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
}
