using System.Runtime.InteropServices;
namespace gencs.std;
public class enable_shared_from_thisFunctionEntity
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.enable_shared_from_thisFunctionEntity obj)
    {
        return obj.mObjectHandle;
    }
    public enable_shared_from_thisFunctionEntity(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_enable_shared_from_thisFunctionEntity_enable_shared_from_this0();
    protected enable_shared_from_thisFunctionEntity() : this(std_enable_shared_from_thisFunctionEntity_enable_shared_from_this0())
    {
    }
}
