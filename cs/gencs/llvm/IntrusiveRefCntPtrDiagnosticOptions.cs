using System.Runtime.InteropServices;
namespace gencs.llvm;
public class IntrusiveRefCntPtrDiagnosticOptions
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.IntrusiveRefCntPtrDiagnosticOptions obj)
    {
        return obj.mObjectHandle;
    }
    public IntrusiveRefCntPtrDiagnosticOptions(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_IntrusiveRefCntPtrDiagnosticOptions_IntrusiveRefCntPtr0();
    public IntrusiveRefCntPtrDiagnosticOptions() : this(llvm_IntrusiveRefCntPtrDiagnosticOptions_IntrusiveRefCntPtr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_IntrusiveRefCntPtrDiagnosticOptions_IntrusiveRefCntPtr1(IntPtr obj);
    public IntrusiveRefCntPtrDiagnosticOptions(gencs.clang.DiagnosticOptions obj) : this(llvm_IntrusiveRefCntPtrDiagnosticOptions_IntrusiveRefCntPtr1(gencs.clang.DiagnosticOptions.AG_getObjectHandle(obj)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_IntrusiveRefCntPtrDiagnosticOptions_IntrusiveRefCntPtr2(IntPtr S);
    public IntrusiveRefCntPtrDiagnosticOptions(gencs.llvm.IntrusiveRefCntPtrDiagnosticOptions S) : this(llvm_IntrusiveRefCntPtrDiagnosticOptions_IntrusiveRefCntPtr2(gencs.llvm.IntrusiveRefCntPtrDiagnosticOptions.AG_getObjectHandle(S)))
    {
    }
}
