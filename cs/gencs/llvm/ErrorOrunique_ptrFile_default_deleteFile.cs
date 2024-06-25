using System.Runtime.InteropServices;
namespace gencs.llvm;
public class ErrorOrunique_ptrFile_default_deleteFile
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.llvm.ErrorOrunique_ptrFile_default_deleteFile obj)
    {
        return obj.mObjectHandle;
    }
    public ErrorOrunique_ptrFile_default_deleteFile(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_ErrorOrunique_ptrFile_default_deleteFile_ErrorOr0(IntPtr EC);
    public ErrorOrunique_ptrFile_default_deleteFile(gencs.std.error_code EC) : this(llvm_ErrorOrunique_ptrFile_default_deleteFile_ErrorOr0(gencs.std.error_code.AG_getObjectHandle(EC)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_ErrorOrunique_ptrFile_default_deleteFile_ErrorOr1(IntPtr Other);
    public ErrorOrunique_ptrFile_default_deleteFile(gencs.llvm.ErrorOrunique_ptrFile_default_deleteFile Other) : this(llvm_ErrorOrunique_ptrFile_default_deleteFile_ErrorOr1(gencs.llvm.ErrorOrunique_ptrFile_default_deleteFile.AG_getObjectHandle(Other)))
    {
    }
}
