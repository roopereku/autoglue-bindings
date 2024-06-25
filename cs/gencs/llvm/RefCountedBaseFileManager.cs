using System.Runtime.InteropServices;
namespace gencs.llvm;
public class RefCountedBaseFileManager
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.RefCountedBaseFileManager obj)
    {
        return obj.mObjectHandle;
    }
    public RefCountedBaseFileManager(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_RefCountedBaseFileManager_RefCountedBase0();
    protected RefCountedBaseFileManager() : this(llvm_RefCountedBaseFileManager_RefCountedBase0())
    {
    }
}
