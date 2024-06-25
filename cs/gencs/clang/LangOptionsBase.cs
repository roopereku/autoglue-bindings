using System.Runtime.InteropServices;
namespace gencs.clang;
public class LangOptionsBase
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.clang.LangOptionsBase obj)
    {
        return obj.mObjectHandle;
    }
    public LangOptionsBase(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_LangOptionsBase_LangOptionsBase0(IntPtr param1);
    public LangOptionsBase(gencs.clang.LangOptionsBase param1) : this(clang_LangOptionsBase_LangOptionsBase0(gencs.clang.LangOptionsBase.AG_getObjectHandle(param1)))
    {
    }
}
