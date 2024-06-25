using System.Runtime.InteropServices;
namespace gencs.llvm;
public class IntrusiveRefCntPtrDiagnosticIDs
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.IntrusiveRefCntPtrDiagnosticIDs obj)
    {
        return obj.mObjectHandle;
    }
    public IntrusiveRefCntPtrDiagnosticIDs(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_IntrusiveRefCntPtrDiagnosticIDs_IntrusiveRefCntPtr0();
    public IntrusiveRefCntPtrDiagnosticIDs() : this(llvm_IntrusiveRefCntPtrDiagnosticIDs_IntrusiveRefCntPtr0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_IntrusiveRefCntPtrDiagnosticIDs_IntrusiveRefCntPtr1(IntPtr obj);
    public IntrusiveRefCntPtrDiagnosticIDs(gencs.clang.DiagnosticIDs obj) : this(llvm_IntrusiveRefCntPtrDiagnosticIDs_IntrusiveRefCntPtr1(gencs.clang.DiagnosticIDs.AG_getObjectHandle(obj)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_IntrusiveRefCntPtrDiagnosticIDs_IntrusiveRefCntPtr2(IntPtr S);
    public IntrusiveRefCntPtrDiagnosticIDs(gencs.llvm.IntrusiveRefCntPtrDiagnosticIDs S) : this(llvm_IntrusiveRefCntPtrDiagnosticIDs_IntrusiveRefCntPtr2(gencs.llvm.IntrusiveRefCntPtrDiagnosticIDs.AG_getObjectHandle(S)))
    {
    }
}
