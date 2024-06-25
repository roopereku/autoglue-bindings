using System.Runtime.InteropServices;
namespace gencs.std;
public class allocatorCharacter
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.allocatorCharacter obj)
    {
        return obj.mObjectHandle;
    }
    public allocatorCharacter(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_allocatorCharacter_allocator0();
    public allocatorCharacter() : this(std_allocatorCharacter_allocator0())
    {
    }
}
