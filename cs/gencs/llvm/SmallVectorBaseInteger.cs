using System.Runtime.InteropServices;
namespace gencs.llvm;
public class SmallVectorBaseInteger
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.SmallVectorBaseInteger obj)
    {
        return obj.mObjectHandle;
    }
    public SmallVectorBaseInteger(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_SmallVectorBaseInteger_SmallVectorBase0(IntPtr param1);
    public SmallVectorBaseInteger(gencs.llvm.SmallVectorBaseInteger param1) : this(llvm_SmallVectorBaseInteger_SmallVectorBase0(gencs.llvm.SmallVectorBaseInteger.AG_getObjectHandle(param1)))
    {
    }
}
