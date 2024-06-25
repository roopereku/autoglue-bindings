using System.Runtime.InteropServices;
namespace gencs.std;
public class error_code
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.error_code obj)
    {
        return obj.mObjectHandle;
    }
    public error_code(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_error_code_error_code0();
    public error_code() : this(std_error_code_error_code0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_error_code_error_code1(int __v, IntPtr __cat);
    public error_code(int __v, gencs.std.error_category __cat) : this(std_error_code_error_code1(__v, gencs.std.error_category.AG_getObjectHandle(__cat)))
    {
    }
}
