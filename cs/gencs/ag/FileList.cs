using System.Runtime.InteropServices;
namespace gencs.ag;
public class FileList
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.ag.FileList obj)
    {
        return obj.mObjectHandle;
    }
    public FileList(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FileList_FileList0(IntPtr rootDirectory, IntPtr extension);
    public FileList(gencs.std.filesystem.path rootDirectory, gencs.std.basic_String_viewCharacter_char_traitsCharacter extension) : this(ag_FileList_FileList0(gencs.std.filesystem.path.AG_getObjectHandle(rootDirectory), gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(extension)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FileList_FileList1(IntPtr param1);
    public FileList(gencs.ag.FileList param1) : this(ag_FileList_FileList1(gencs.ag.FileList.AG_getObjectHandle(param1)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FileList_begin0(IntPtr ObjectHandle);
    public gencs.__gnu_cxx.__normal_iteratorpath_vectorpath_allocatorpath begin()
    {
        return new gencs.__gnu_cxx.__normal_iteratorpath_vectorpath_allocatorpath(ag_FileList_begin0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_FileList_end0(IntPtr ObjectHandle);
    public gencs.__gnu_cxx.__normal_iteratorpath_vectorpath_allocatorpath end()
    {
        return new gencs.__gnu_cxx.__normal_iteratorpath_vectorpath_allocatorpath(ag_FileList_end0(mObjectHandle));
    }
}
