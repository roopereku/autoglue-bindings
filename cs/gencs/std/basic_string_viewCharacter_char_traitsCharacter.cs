using System.Runtime.InteropServices;
namespace gencs.std;
public class basic_String_viewCharacter_char_traitsCharacter
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.basic_String_viewCharacter_char_traitsCharacter obj)
    {
        return obj.mObjectHandle;
    }
    public basic_String_viewCharacter_char_traitsCharacter(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_basic_string_viewCharacter_char_traitsCharacter_basic_string_view0();
    public basic_String_viewCharacter_char_traitsCharacter() : this(std_basic_string_viewCharacter_char_traitsCharacter_basic_string_view0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_basic_string_viewCharacter_char_traitsCharacter_basic_string_view1(string __str);
    public basic_String_viewCharacter_char_traitsCharacter(string __str) : this(std_basic_string_viewCharacter_char_traitsCharacter_basic_string_view1(__str))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_basic_string_viewCharacter_char_traitsCharacter_basic_string_view2(string __str, int __len);
    public basic_String_viewCharacter_char_traitsCharacter(string __str, int __len) : this(std_basic_string_viewCharacter_char_traitsCharacter_basic_string_view2(__str, __len))
    {
    }
}
