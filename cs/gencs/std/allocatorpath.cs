using System.Runtime.InteropServices;
namespace gencs.std;
public class allocatorpath
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.allocatorpath obj)
    {
        return obj.mObjectHandle;
    }
    public allocatorpath(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_allocatorpath_allocator0();
    public allocatorpath() : this(std_allocatorpath_allocator0())
    {
    }
}
