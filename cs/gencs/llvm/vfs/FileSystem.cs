using System.Runtime.InteropServices;
namespace gencs.llvm.vfs;
public abstract class FileSystem : gencs.llvm.ThreadSafeRefCountedBaseFileSystem
{
    public FileSystem(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_status0(IntPtr ObjectHandle, IntPtr Path);
    internal static IntPtr AG_intercept_status0(IntPtr ObjectHandle, IntPtr Path)
    {
        return gencs.llvm.ErrorOrStatus.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as FileSystem).status(new gencs.llvm.Twine(Path)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_openFileForRead0(IntPtr ObjectHandle, IntPtr Path);
    internal static IntPtr AG_intercept_openFileForRead0(IntPtr ObjectHandle, IntPtr Path)
    {
        return gencs.llvm.ErrorOrunique_ptrFile_default_deleteFile.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as FileSystem).openFileForRead(new gencs.llvm.Twine(Path)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_dir_begin0(IntPtr ObjectHandle, IntPtr Dir, IntPtr EC);
    internal static IntPtr AG_intercept_dir_begin0(IntPtr ObjectHandle, IntPtr Dir, IntPtr EC)
    {
        return gencs.llvm.vfs.directory_iterator.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as FileSystem).dir_begin(new gencs.llvm.Twine(Dir), new gencs.std.error_code(EC)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_setCurrentWorkingDirectory0(IntPtr ObjectHandle, IntPtr Path);
    internal static IntPtr AG_intercept_setCurrentWorkingDirectory0(IntPtr ObjectHandle, IntPtr Path)
    {
        return gencs.std.error_code.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as FileSystem).setCurrentWorkingDirectory(new gencs.llvm.Twine(Path)));
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_getCurrentWorkingDirectory0(IntPtr ObjectHandle);
    internal static IntPtr AG_intercept_getCurrentWorkingDirectory0(IntPtr ObjectHandle)
    {
        return gencs.llvm.ErrorOrbasic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as FileSystem).getCurrentWorkingDirectory());
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void llvm_vfs_FileSystem_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject, IntPtr AG_intercept_status0, IntPtr AG_intercept_openFileForRead0, IntPtr AG_intercept_dir_begin0, IntPtr AG_intercept_setCurrentWorkingDirectory0, IntPtr AG_intercept_getCurrentWorkingDirectory0);
    private void AG_initializeInterceptionContext()
    {
        llvm_vfs_FileSystem_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_status0(AG_intercept_status0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_openFileForRead0(AG_intercept_openFileForRead0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_dir_begin0(AG_intercept_dir_begin0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_setCurrentWorkingDirectory0(AG_intercept_setCurrentWorkingDirectory0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_getCurrentWorkingDirectory0(AG_intercept_getCurrentWorkingDirectory0)));
    }
    public abstract gencs.llvm.ErrorOrStatus status(gencs.llvm.Twine Path);
    public abstract gencs.llvm.ErrorOrunique_ptrFile_default_deleteFile openFileForRead(gencs.llvm.Twine Path);
    public abstract gencs.llvm.vfs.directory_iterator dir_begin(gencs.llvm.Twine Dir, gencs.std.error_code EC);
    public abstract gencs.std.error_code setCurrentWorkingDirectory(gencs.llvm.Twine Path);
    public abstract gencs.llvm.ErrorOrbasic_StringCharacter_char_traitsCharacter_allocatorCharacter getCurrentWorkingDirectory();
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr llvm_vfs_FileSystem_FileSystem0();
    public FileSystem() : this(llvm_vfs_FileSystem_FileSystem0())
    {
        AG_initializeInterceptionContext();
    }
    public class ConcreteType : gencs.llvm.vfs.FileSystem
    {
        public ConcreteType(IntPtr ObjectHandle) : base(ObjectHandle)
        {
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr llvm_vfs_FileSystem_ConcreteType_status0(IntPtr ObjectHandle, IntPtr Path);
        public override gencs.llvm.ErrorOrStatus status(gencs.llvm.Twine Path)
        {
            return new gencs.llvm.ErrorOrStatus(llvm_vfs_FileSystem_ConcreteType_status0(mObjectHandle, gencs.llvm.Twine.AG_getObjectHandle(Path)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr llvm_vfs_FileSystem_ConcreteType_openFileForRead0(IntPtr ObjectHandle, IntPtr Path);
        public override gencs.llvm.ErrorOrunique_ptrFile_default_deleteFile openFileForRead(gencs.llvm.Twine Path)
        {
            return new gencs.llvm.ErrorOrunique_ptrFile_default_deleteFile(llvm_vfs_FileSystem_ConcreteType_openFileForRead0(mObjectHandle, gencs.llvm.Twine.AG_getObjectHandle(Path)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr llvm_vfs_FileSystem_ConcreteType_dir_begin0(IntPtr ObjectHandle, IntPtr Dir, IntPtr EC);
        public override gencs.llvm.vfs.directory_iterator dir_begin(gencs.llvm.Twine Dir, gencs.std.error_code EC)
        {
            return new gencs.llvm.vfs.directory_iterator(llvm_vfs_FileSystem_ConcreteType_dir_begin0(mObjectHandle, gencs.llvm.Twine.AG_getObjectHandle(Dir), gencs.std.error_code.AG_getObjectHandle(EC)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr llvm_vfs_FileSystem_ConcreteType_setCurrentWorkingDirectory0(IntPtr ObjectHandle, IntPtr Path);
        public override gencs.std.error_code setCurrentWorkingDirectory(gencs.llvm.Twine Path)
        {
            return new gencs.std.error_code(llvm_vfs_FileSystem_ConcreteType_setCurrentWorkingDirectory0(mObjectHandle, gencs.llvm.Twine.AG_getObjectHandle(Path)));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr llvm_vfs_FileSystem_ConcreteType_getCurrentWorkingDirectory0(IntPtr ObjectHandle);
        public override gencs.llvm.ErrorOrbasic_StringCharacter_char_traitsCharacter_allocatorCharacter getCurrentWorkingDirectory()
        {
            return new gencs.llvm.ErrorOrbasic_StringCharacter_char_traitsCharacter_allocatorCharacter(llvm_vfs_FileSystem_ConcreteType_getCurrentWorkingDirectory0(mObjectHandle));
        }
    }
}
