using System.Runtime.InteropServices;
namespace gencs.std;
public class initializer_listCharacter
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.initializer_listCharacter obj)
    {
        return obj.mObjectHandle;
    }
    public initializer_listCharacter(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_initializer_listCharacter_initializer_list0();
    public initializer_listCharacter() : this(std_initializer_listCharacter_initializer_list0())
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_initializer_listCharacter_initializer_list1(IntPtr param1);
    public initializer_listCharacter(gencs.std.initializer_listCharacter param1) : this(std_initializer_listCharacter_initializer_list1(gencs.std.initializer_listCharacter.AG_getObjectHandle(param1)))
    {
    }
}
