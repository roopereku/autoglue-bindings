using System.Runtime.InteropServices;
namespace gencs.clang;
public class Qualifiers
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.Qualifiers obj)
    {
        return obj.mObjectHandle;
    }
    public Qualifiers(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_Qualifiers_Qualifiers0();
    public Qualifiers() : this(clang_Qualifiers_Qualifiers0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_Qualifiers_Qualifiers1(IntPtr param1);
    public Qualifiers(gencs.clang.Qualifiers param1) : this(clang_Qualifiers_Qualifiers1(gencs.clang.Qualifiers.AG_getObjectHandle(param1)))
    {
    }
}
