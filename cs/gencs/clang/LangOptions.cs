using System.Runtime.InteropServices;
namespace gencs.clang;
public class LangOptions : gencs.clang.LangOptionsBase
{
    public LangOptions(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_LangOptions_LangOptions0();
    public LangOptions() : this(clang_LangOptions_LangOptions0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_LangOptions_LangOptions1(IntPtr param1);
    public LangOptions(gencs.clang.LangOptions param1) : this(clang_LangOptions_LangOptions1(gencs.clang.LangOptions.AG_getObjectHandle(param1)))
    {
    }
}
