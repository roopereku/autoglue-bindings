using System.Runtime.InteropServices;
namespace gencs.clang;
public class DiagnosticIDs : gencs.llvm.RefCountedBaseDiagnosticIDs
{
    public DiagnosticIDs(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_DiagnosticIDs_DiagnosticIDs0();
    public DiagnosticIDs() : this(clang_DiagnosticIDs_DiagnosticIDs0())
    {
    }
}
