using System.Runtime.InteropServices;
namespace gencs.std;
public class enable_shared_from_thisClassEntity
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.enable_shared_from_thisClassEntity obj)
    {
        return obj.mObjectHandle;
    }
    public enable_shared_from_thisClassEntity(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_enable_shared_from_thisClassEntity_enable_shared_from_this0();
    protected enable_shared_from_thisClassEntity() : this(std_enable_shared_from_thisClassEntity_enable_shared_from_this0())
    {
    }
}
