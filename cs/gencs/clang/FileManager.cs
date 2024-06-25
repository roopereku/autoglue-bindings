using System.Runtime.InteropServices;
namespace gencs.clang;
public class FileManager : gencs.llvm.RefCountedBaseFileManager
{
    public FileManager(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_FileManager_FileManager0(IntPtr FileSystemOpts, IntPtr FS);
    public FileManager(gencs.clang.FileSystemOptions FileSystemOpts, gencs.llvm.IntrusiveRefCntPtrFileSystem FS) : this(clang_FileManager_FileManager0(gencs.clang.FileSystemOptions.AG_getObjectHandle(FileSystemOpts), gencs.llvm.IntrusiveRefCntPtrFileSystem.AG_getObjectHandle(FS)))
    {
    }
}
