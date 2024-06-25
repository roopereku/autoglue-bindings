using System.Runtime.InteropServices;
namespace gencs.std;
public class _Vector_Basepath_allocatorpath
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std._Vector_Basepath_allocatorpath obj)
    {
        return obj.mObjectHandle;
    }
    public _Vector_Basepath_allocatorpath(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std__Vector_basepath_allocatorpath__Vector_base0();
    public _Vector_Basepath_allocatorpath() : this(std__Vector_basepath_allocatorpath__Vector_base0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std__Vector_basepath_allocatorpath__Vector_base1(IntPtr __a);
    public _Vector_Basepath_allocatorpath(gencs.std.allocatorpath __a) : this(std__Vector_basepath_allocatorpath__Vector_base1(gencs.std.allocatorpath.AG_getObjectHandle(__a)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std__Vector_basepath_allocatorpath__Vector_base2(int __n);
    public _Vector_Basepath_allocatorpath(int __n) : this(std__Vector_basepath_allocatorpath__Vector_base2(__n))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std__Vector_basepath_allocatorpath__Vector_base3(int __n, IntPtr __a);
    public _Vector_Basepath_allocatorpath(int __n, gencs.std.allocatorpath __a) : this(std__Vector_basepath_allocatorpath__Vector_base3(__n, gencs.std.allocatorpath.AG_getObjectHandle(__a)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std__Vector_basepath_allocatorpath__Vector_base4(IntPtr param1);
    public _Vector_Basepath_allocatorpath(gencs.std._Vector_Basepath_allocatorpath param1) : this(std__Vector_basepath_allocatorpath__Vector_base4(gencs.std._Vector_Basepath_allocatorpath.AG_getObjectHandle(param1)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std__Vector_basepath_allocatorpath__Vector_base5(IntPtr __x, IntPtr __a);
    public _Vector_Basepath_allocatorpath(gencs.std._Vector_Basepath_allocatorpath __x, gencs.std.allocatorpath __a) : this(std__Vector_basepath_allocatorpath__Vector_base5(gencs.std._Vector_Basepath_allocatorpath.AG_getObjectHandle(__x), gencs.std.allocatorpath.AG_getObjectHandle(__a)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std__Vector_basepath_allocatorpath__Vector_base6(IntPtr __a, IntPtr __x);
    public _Vector_Basepath_allocatorpath(gencs.std.allocatorpath __a, gencs.std._Vector_Basepath_allocatorpath __x) : this(std__Vector_basepath_allocatorpath__Vector_base6(gencs.std.allocatorpath.AG_getObjectHandle(__a), gencs.std._Vector_Basepath_allocatorpath.AG_getObjectHandle(__x)))
    {
    }
}
