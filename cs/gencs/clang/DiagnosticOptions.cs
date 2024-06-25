using System.Runtime.InteropServices;
namespace gencs.clang;
public class DiagnosticOptions : gencs.llvm.RefCountedBaseDiagnosticOptions
{
    public DiagnosticOptions(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_DiagnosticOptions_DiagnosticOptions0();
    public DiagnosticOptions() : this(clang_DiagnosticOptions_DiagnosticOptions0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_DiagnosticOptions_DiagnosticOptions1(IntPtr param1);
    public DiagnosticOptions(gencs.clang.DiagnosticOptions param1) : this(clang_DiagnosticOptions_DiagnosticOptions1(gencs.clang.DiagnosticOptions.AG_getObjectHandle(param1)))
    {
    }
}
