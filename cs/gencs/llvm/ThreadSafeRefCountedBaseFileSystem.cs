using System.Runtime.InteropServices;
namespace gencs.llvm;
public class ThreadSafeRefCountedBaseFileSystem
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.ThreadSafeRefCountedBaseFileSystem obj)
    {
        return obj.mObjectHandle;
    }
    public ThreadSafeRefCountedBaseFileSystem(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_ThreadSafeRefCountedBaseFileSystem_ThreadSafeRefCountedBase0();
    protected ThreadSafeRefCountedBaseFileSystem() : this(llvm_ThreadSafeRefCountedBaseFileSystem_ThreadSafeRefCountedBase0())
    {
    }
}
