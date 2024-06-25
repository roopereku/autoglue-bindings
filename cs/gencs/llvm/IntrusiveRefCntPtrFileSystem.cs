using System.Runtime.InteropServices;
namespace gencs.llvm;
public class IntrusiveRefCntPtrFileSystem
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.IntrusiveRefCntPtrFileSystem obj)
    {
        return obj.mObjectHandle;
    }
    public IntrusiveRefCntPtrFileSystem(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_IntrusiveRefCntPtrFileSystem_IntrusiveRefCntPtr0();
    public IntrusiveRefCntPtrFileSystem() : this(llvm_IntrusiveRefCntPtrFileSystem_IntrusiveRefCntPtr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_IntrusiveRefCntPtrFileSystem_IntrusiveRefCntPtr1(IntPtr obj);
    public IntrusiveRefCntPtrFileSystem(gencs.llvm.vfs.FileSystem obj) : this(llvm_IntrusiveRefCntPtrFileSystem_IntrusiveRefCntPtr1(gencs.llvm.vfs.FileSystem.AG_getObjectHandle(obj)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_IntrusiveRefCntPtrFileSystem_IntrusiveRefCntPtr2(IntPtr S);
    public IntrusiveRefCntPtrFileSystem(gencs.llvm.IntrusiveRefCntPtrFileSystem S) : this(llvm_IntrusiveRefCntPtrFileSystem_IntrusiveRefCntPtr2(gencs.llvm.IntrusiveRefCntPtrFileSystem.AG_getObjectHandle(S)))
    {
    }
}
