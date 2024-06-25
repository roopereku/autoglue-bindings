using System.Runtime.InteropServices;
namespace gencs.std;
public abstract class error_category
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.std.error_category obj)
    {
        return obj.mObjectHandle;
    }
    public error_category(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate string AG_delegate_intercept_name0(IntPtr ObjectHandle);
    internal static string AG_intercept_name0(IntPtr ObjectHandle)
    {
        return ((((GCHandle)ObjectHandle).Target) as error_category).name();
    }
    [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
    private delegate IntPtr AG_delegate_intercept_message0(IntPtr ObjectHandle, int param1);
    internal static IntPtr AG_intercept_message0(IntPtr ObjectHandle, int param1)
    {
        return gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(((((GCHandle)ObjectHandle).Target) as error_category).message(param1));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void std_error_category_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject, IntPtr AG_intercept_name0, IntPtr AG_intercept_message0);
    private void AG_initializeInterceptionContext()
    {
        std_error_category_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_name0(AG_intercept_name0)), Marshal.GetFunctionPointerForDelegate(new AG_delegate_intercept_message0(AG_intercept_message0)));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr std_error_category_error_category0();
    public error_category() : this(std_error_category_error_category0())
    {
        AG_initializeInterceptionContext();
    }
    public abstract string name();
    public abstract gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter message(int param1);
    public class ConcreteType : gencs.std.error_category
    {
        public ConcreteType(IntPtr ObjectHandle) : base(ObjectHandle)
        {
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr std_error_category_ConcreteType_name0(IntPtr ObjectHandle);
        public override string name()
        {
            return Marshal.PtrToStringAnsi(std_error_category_ConcreteType_name0(mObjectHandle));
        }
        [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr std_error_category_ConcreteType_message0(IntPtr ObjectHandle, int param1);
        public override gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter message(int param1)
        {
            return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(std_error_category_ConcreteType_message0(mObjectHandle, param1));
        }
    }
}
