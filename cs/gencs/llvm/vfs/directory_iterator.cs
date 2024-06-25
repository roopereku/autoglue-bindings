using System.Runtime.InteropServices;
namespace gencs.llvm.vfs;
public class directory_iterator
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.vfs.directory_iterator obj)
    {
        return obj.mObjectHandle;
    }
    public directory_iterator(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_vfs_directory_iterator_directory_iterator0(IntPtr I);
    public directory_iterator(gencs.std.shared_ptrDirIterImpl I) : this(llvm_vfs_directory_iterator_directory_iterator0(gencs.std.shared_ptrDirIterImpl.AG_getObjectHandle(I)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_vfs_directory_iterator_directory_iterator1();
    public directory_iterator() : this(llvm_vfs_directory_iterator_directory_iterator1())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_vfs_directory_iterator_directory_iterator2(IntPtr param1);
    public directory_iterator(gencs.llvm.vfs.directory_iterator param1) : this(llvm_vfs_directory_iterator_directory_iterator2(gencs.llvm.vfs.directory_iterator.AG_getObjectHandle(param1)))
    {
    }
}
