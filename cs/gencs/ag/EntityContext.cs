using System.Runtime.InteropServices;
namespace gencs.ag;
public class EntityContext
{
    protected IntPtr mObjectHandle;
    public static IntPtr AG_getObjectHandle(gencs.ag.EntityContext obj)
    {
        return obj.mObjectHandle;
    }
    public EntityContext(IntPtr ObjectHandle)
    {
        mObjectHandle = ObjectHandle;
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_EntityContext_EntityContext0(IntPtr param1);
    public EntityContext(gencs.ag.EntityContext param1) : this(ag_EntityContext_EntityContext0(gencs.ag.EntityContext.AG_getObjectHandle(param1)))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_EntityContext_EntityContext1();
    public EntityContext() : this(ag_EntityContext_EntityContext1())
    {
    }
}
