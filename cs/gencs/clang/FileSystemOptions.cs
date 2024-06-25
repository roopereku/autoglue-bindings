using System.Runtime.InteropServices;
namespace gencs.clang;
public class FileSystemOptions
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.FileSystemOptions obj)
    {
        return obj.mObjectHandle;
    }
    public FileSystemOptions(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_FileSystemOptions_FileSystemOptions0(IntPtr param1);
    public FileSystemOptions(gencs.clang.FileSystemOptions param1) : this(clang_FileSystemOptions_FileSystemOptions0(gencs.clang.FileSystemOptions.AG_getObjectHandle(param1)))
    {
    }
}
