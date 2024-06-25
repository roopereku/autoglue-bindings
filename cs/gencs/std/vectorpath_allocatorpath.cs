using System.Runtime.InteropServices;
namespace gencs.std;
public class vectorpath_allocatorpath : gencs.std._Vector_Basepath_allocatorpath
{
    public vectorpath_allocatorpath(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_vectorpath_allocatorpath_vector0();
    public vectorpath_allocatorpath() : this(std_vectorpath_allocatorpath_vector0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_vectorpath_allocatorpath_vector1(IntPtr __a);
    public vectorpath_allocatorpath(gencs.std.allocatorpath __a) : this(std_vectorpath_allocatorpath_vector1(gencs.std.allocatorpath.AG_getObjectHandle(__a)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_vectorpath_allocatorpath_vector2(int __n, IntPtr __a);
    public vectorpath_allocatorpath(int __n, gencs.std.allocatorpath __a) : this(std_vectorpath_allocatorpath_vector2(__n, gencs.std.allocatorpath.AG_getObjectHandle(__a)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_vectorpath_allocatorpath_vector3(int __n, IntPtr __value, IntPtr __a);
    public vectorpath_allocatorpath(int __n, gencs.std.filesystem.path __value, gencs.std.allocatorpath __a) : this(std_vectorpath_allocatorpath_vector3(__n, gencs.std.filesystem.path.AG_getObjectHandle(__value), gencs.std.allocatorpath.AG_getObjectHandle(__a)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_vectorpath_allocatorpath_vector4(IntPtr param1);
    public vectorpath_allocatorpath(gencs.std.vectorpath_allocatorpath param1) : this(std_vectorpath_allocatorpath_vector4(gencs.std.vectorpath_allocatorpath.AG_getObjectHandle(param1)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_vectorpath_allocatorpath_vector5(IntPtr __x, IntPtr __a);
    public vectorpath_allocatorpath(gencs.std.vectorpath_allocatorpath __x, gencs.std.allocatorpath __a) : this(std_vectorpath_allocatorpath_vector5(gencs.std.vectorpath_allocatorpath.AG_getObjectHandle(__x), gencs.std.allocatorpath.AG_getObjectHandle(__a)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_vectorpath_allocatorpath_vector6(IntPtr __l, IntPtr __a);
    public vectorpath_allocatorpath(gencs.std.initializer_listpath __l, gencs.std.allocatorpath __a) : this(std_vectorpath_allocatorpath_vector6(gencs.std.initializer_listpath.AG_getObjectHandle(__l), gencs.std.allocatorpath.AG_getObjectHandle(__a)))
    {
    }
}
