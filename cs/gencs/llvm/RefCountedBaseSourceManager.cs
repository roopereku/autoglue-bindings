using System.Runtime.InteropServices;
namespace gencs.llvm;
public class RefCountedBaseSourceManager
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.RefCountedBaseSourceManager obj)
    {
        return obj.mObjectHandle;
    }
    public RefCountedBaseSourceManager(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_RefCountedBaseSourceManager_RefCountedBase0();
    protected RefCountedBaseSourceManager() : this(llvm_RefCountedBaseSourceManager_RefCountedBase0())
    {
    }
}
