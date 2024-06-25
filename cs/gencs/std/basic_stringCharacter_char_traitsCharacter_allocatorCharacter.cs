using System.Runtime.InteropServices;
namespace gencs.std;
public class basic_StringCharacter_char_traitsCharacter_allocatorCharacter
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter obj)
    {
        return obj.mObjectHandle;
    }
    public basic_StringCharacter_char_traitsCharacter_allocatorCharacter(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string0();
    public basic_StringCharacter_char_traitsCharacter_allocatorCharacter() : this(std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string1(IntPtr __a);
    public basic_StringCharacter_char_traitsCharacter_allocatorCharacter(gencs.std.allocatorCharacter __a) : this(std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string1(gencs.std.allocatorCharacter.AG_getObjectHandle(__a)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string2(IntPtr __str, int __pos, IntPtr __a);
    public basic_StringCharacter_char_traitsCharacter_allocatorCharacter(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter __str, int __pos, gencs.std.allocatorCharacter __a) : this(std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string2(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(__str), __pos, gencs.std.allocatorCharacter.AG_getObjectHandle(__a)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string3(IntPtr __str, int __pos, int __n);
    public basic_StringCharacter_char_traitsCharacter_allocatorCharacter(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter __str, int __pos, int __n) : this(std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string3(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(__str), __pos, __n))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string4(IntPtr __str, int __pos, int __n, IntPtr __a);
    public basic_StringCharacter_char_traitsCharacter_allocatorCharacter(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter __str, int __pos, int __n, gencs.std.allocatorCharacter __a) : this(std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string4(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(__str), __pos, __n, gencs.std.allocatorCharacter.AG_getObjectHandle(__a)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string5(string __s, int __n, IntPtr __a);
    public basic_StringCharacter_char_traitsCharacter_allocatorCharacter(string __s, int __n, gencs.std.allocatorCharacter __a) : this(std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string5(__s, __n, gencs.std.allocatorCharacter.AG_getObjectHandle(__a)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string6(IntPtr __str);
    public basic_StringCharacter_char_traitsCharacter_allocatorCharacter(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter __str) : this(std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string6(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(__str)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string7(IntPtr __l, IntPtr __a);
    public basic_StringCharacter_char_traitsCharacter_allocatorCharacter(gencs.std.initializer_listCharacter __l, gencs.std.allocatorCharacter __a) : this(std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string7(gencs.std.initializer_listCharacter.AG_getObjectHandle(__l), gencs.std.allocatorCharacter.AG_getObjectHandle(__a)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string8(IntPtr __str, IntPtr __a);
    public basic_StringCharacter_char_traitsCharacter_allocatorCharacter(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter __str, gencs.std.allocatorCharacter __a) : this(std_basic_stringCharacter_char_traitsCharacter_allocatorCharacter_basic_string8(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(__str), gencs.std.allocatorCharacter.AG_getObjectHandle(__a)))
    {
    }
}
