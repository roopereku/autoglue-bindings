using System.Runtime.InteropServices;
namespace gencs.clang;
public class SourceManager : gencs.llvm.RefCountedBaseSourceManager
{
    public SourceManager(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr clang_SourceManager_SourceManager0(IntPtr Diag, IntPtr FileMgr, bool UserFilesAreVolatile);
    public SourceManager(gencs.clang.DiagnosticsEngine Diag, gencs.clang.FileManager FileMgr, bool UserFilesAreVolatile) : this(clang_SourceManager_SourceManager0(gencs.clang.DiagnosticsEngine.AG_getObjectHandle(Diag), gencs.clang.FileManager.AG_getObjectHandle(FileMgr), UserFilesAreVolatile))
    {
    }
}
