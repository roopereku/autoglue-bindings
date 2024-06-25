using System.Runtime.InteropServices;
namespace gencs.ag.csharp;
public class EntityContext : gencs.ag.EntityContext
{
    public EntityContext(IntPtr ObjectHandle) : base(ObjectHandle)
    {
    }
    public enum Type : int
    {
        Class = 0
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_csharp_EntityContext_getClass0(IntPtr ObjectHandle);
    public gencs.ag.csharp.ClassContext getClass()
    {
        return new gencs.ag.csharp.ClassContext(ag_csharp_EntityContext_getClass0(mObjectHandle));
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_csharp_EntityContext_EntityContext0(int type);
    protected EntityContext(gencs.ag.csharp.EntityContext.Type type) : this(ag_csharp_EntityContext_EntityContext0((int)type))
    {
    }
    [DllImport("libcppglue.so", CallingConvention = CallingConvention.Cdecl)]
    private static extern IntPtr ag_csharp_EntityContext_EntityContext1(IntPtr param1);
    public EntityContext(gencs.ag.csharp.EntityContext param1) : this(ag_csharp_EntityContext_EntityContext1(gencs.ag.csharp.EntityContext.AG_getObjectHandle(param1)))
    {
    }
}
