using System.Runtime.InteropServices;
namespace gencs.ag.clang;
public class Backend : gencs.ag.Backend
{
    public Backend(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_clang_Backend_AG_initializeInterceptionContext(IntPtr ObjectHandle, IntPtr AG_foreignObject);
    private void AG_initializeInterceptionContext()
    {
        ag_clang_Backend_AG_initializeInterceptionContext(mObjectHandle, (IntPtr)GCHandle.Alloc(this));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_Backend_Backend0(IntPtr compilationDataBasePath);
    public Backend(gencs.std.basic_String_viewCharacter_char_traitsCharacter compilationDataBasePath) : this(ag_clang_Backend_Backend0(gencs.std.basic_String_viewCharacter_char_traitsCharacter.AG_getObjectHandle(compilationDataBasePath)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_Backend_Backend1(IntPtr param1);
    public Backend(gencs.ag.clang.Backend param1) : this(ag_clang_Backend_Backend1(gencs.ag.clang.Backend.AG_getObjectHandle(param1)))
    {
        AG_initializeInterceptionContext();
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern bool ag_clang_Backend_generateHierarchy0(IntPtr ObjectHandle);
    public override bool generateHierarchy()
    {
        return ag_clang_Backend_generateHierarchy0(mObjectHandle);
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_clang_Backend_getInclusion0(IntPtr ObjectHandle, IntPtr path);
    public gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter getInclusion(gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter path)
    {
        return new gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter(ag_clang_Backend_getInclusion0(mObjectHandle, gencs.std.basic_StringCharacter_char_traitsCharacter_allocatorCharacter.AG_getObjectHandle(path)));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern void ag_clang_Backend_generateGlue0(IntPtr ObjectHandle);
    protected override void generateGlue()
    {
        ag_clang_Backend_generateGlue0(mObjectHandle);
    }
}
