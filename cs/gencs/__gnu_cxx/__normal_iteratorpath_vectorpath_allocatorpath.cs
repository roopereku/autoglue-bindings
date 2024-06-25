using System.Runtime.InteropServices;
namespace gencs.__gnu_cxx;
public class __normal_iteratorpath_vectorpath_allocatorpath
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.__gnu_cxx.__normal_iteratorpath_vectorpath_allocatorpath obj)
    {
        return obj.mObjectHandle;
    }
    public __normal_iteratorpath_vectorpath_allocatorpath(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr __gnu_cxx___normal_iteratorpath_vectorpath_allocatorpath___normal_iterator0();
    public __normal_iteratorpath_vectorpath_allocatorpath() : this(__gnu_cxx___normal_iteratorpath_vectorpath_allocatorpath___normal_iterator0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr __gnu_cxx___normal_iteratorpath_vectorpath_allocatorpath___normal_iterator1(IntPtr __i);
    public __normal_iteratorpath_vectorpath_allocatorpath(gencs.std.filesystem.path __i) : this(__gnu_cxx___normal_iteratorpath_vectorpath_allocatorpath___normal_iterator1(gencs.std.filesystem.path.AG_getObjectHandle(__i)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr __gnu_cxx___normal_iteratorpath_vectorpath_allocatorpath___normal_iterator2(IntPtr param1);
    public __normal_iteratorpath_vectorpath_allocatorpath(gencs.__gnu_cxx.__normal_iteratorpath_vectorpath_allocatorpath param1) : this(__gnu_cxx___normal_iteratorpath_vectorpath_allocatorpath___normal_iterator2(gencs.__gnu_cxx.__normal_iteratorpath_vectorpath_allocatorpath.AG_getObjectHandle(param1)))
    {
    }
}
