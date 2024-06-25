using System.Runtime.InteropServices;
namespace gencs.std.filesystem;
public class path
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.filesystem.path obj)
    {
        return obj.mObjectHandle;
    }
    public path(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    public enum format : int
    {
        native_format = 0,
        generic_format = 1,
        auto_format = 2
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_filesystem_path_path0();
    public path() : this(std_filesystem_path_path0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_filesystem_path_path1(IntPtr __p);
    public path(gencs.std.filesystem.path __p) : this(std_filesystem_path_path1(gencs.std.filesystem.path.AG_getObjectHandle(__p)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_filesystem_path_path2(IntPtr __source, int param2);
    public path(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter __source, gencs.std.filesystem.path.format param2) : this(std_filesystem_path_path2(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(__source), (int)param2))
    {
    }
}
