using System.Runtime.InteropServices;
namespace gencs.clang;
public class DiagnosticsEngine : gencs.llvm.RefCountedBaseDiagnosticsEngine
{
    public DiagnosticsEngine(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_DiagnosticsEngine_DiagnosticsEngine0(IntPtr Diags, IntPtr DiagOpts, IntPtr client, bool ShouldOwnClient);
    public DiagnosticsEngine(gencs.llvm.IntrusiveRefCntPtrDiagnosticIDs Diags, gencs.llvm.IntrusiveRefCntPtrDiagnosticOptions DiagOpts, gencs.clang.DiagnosticConsumer client, bool ShouldOwnClient) : this(clang_DiagnosticsEngine_DiagnosticsEngine0(gencs.llvm.IntrusiveRefCntPtrDiagnosticIDs.AG_getObjectHandle(Diags), gencs.llvm.IntrusiveRefCntPtrDiagnosticOptions.AG_getObjectHandle(DiagOpts), gencs.clang.DiagnosticConsumer.AG_getObjectHandle(client), ShouldOwnClient))
    {
    }
}
