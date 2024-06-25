using System.Runtime.InteropServices;
namespace gencs.std;
public class enable_shared_from_thisEntityContext
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.enable_shared_from_thisEntityContext obj)
    {
        return obj.mObjectHandle;
    }
    public enable_shared_from_thisEntityContext(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_enable_shared_from_thisEntityContext_enable_shared_from_this0();
    protected enable_shared_from_thisEntityContext() : this(std_enable_shared_from_thisEntityContext_enable_shared_from_this0())
    {
    }
}
