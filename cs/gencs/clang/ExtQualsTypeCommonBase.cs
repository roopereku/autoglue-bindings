using System.Runtime.InteropServices;
namespace gencs.clang;
public class ExtQualsTypeCommonBase
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.ExtQualsTypeCommonBase obj)
    {
        return obj.mObjectHandle;
    }
    public ExtQualsTypeCommonBase(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_ExtQualsTypeCommonBase_ExtQualsTypeCommonBase0(IntPtr param1);
    public ExtQualsTypeCommonBase(gencs.clang.ExtQualsTypeCommonBase param1) : this(clang_ExtQualsTypeCommonBase_ExtQualsTypeCommonBase0(gencs.clang.ExtQualsTypeCommonBase.AG_getObjectHandle(param1)))
    {
    }
}
