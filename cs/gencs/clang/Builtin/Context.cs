using System.Runtime.InteropServices;
namespace gencs.clang.Builtin;
public class Context
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.Builtin.Context obj)
    {
        return obj.mObjectHandle;
    }
    public Context(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
}
