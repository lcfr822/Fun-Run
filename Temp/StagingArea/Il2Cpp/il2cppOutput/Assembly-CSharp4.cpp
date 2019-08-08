#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// GameController
struct GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09;
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12;
// GooglePlayGames.BasicApi.IPlayGamesClient
struct IPlayGamesClient_tB929CAE947C17CC89A2E2AB9ADC60C827B6825A8;
// GooglePlayGames.BasicApi.InvitationReceivedDelegate
struct InvitationReceivedDelegate_tAD1E7C276309F52D6F14E0F359E0B3AD66712F00;
// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_tF68593A18A4B18F7A28EA92C569C41B938E21C56;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient
struct INearbyConnectionClient_tFC9F9B977C3E67864982A1D1CBCE4A81B9C88D9F;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t39A19028C1B13325D8CB22B8899631F97CD6461B;
// GooglePlayGames.PlayGamesAchievement
struct PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244;
// GooglePlayGames.PlayGamesLeaderboard
struct PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F;
// GooglePlayGames.PlayGamesLocalUser
struct PlayGamesLocalUser_t7F234076C5B693B9CBF6049455634BDD9F019EFA;
// GooglePlayGames.PlayGamesPlatform
struct PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_t63D6B41AFB9887EECDF02A2C93C337C87E445B63;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass37_0
struct U3CU3Ec__DisplayClass37_0_t4402CB4921709DCECAFEE5A246DAF26FAA5FF9D0;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_t62C4C9E596B45600D31041CD589AF94AF22AD284;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t7CF81519D12B515BBF0301F331BDCDF15FC8342F;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t89565AF840CEEB8341D44B2550EA97CAAB6DF4D8;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_t17DA5222E9852F293C41B6063A8A9EEEB2077D91;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass62_0
struct U3CU3Ec__DisplayClass62_0_t014D9BB400C950A8CC98731687BCAD9C16D20E96;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass74_0
struct U3CU3Ec__DisplayClass74_0_t177A778562DE6C03568B1FD6D00BF77063951E0F;
// GooglePlayGames.PlayGamesPlatform/<>c__DisplayClass77_0
struct U3CU3Ec__DisplayClass77_0_tF533F2032DAAE876E577DBF1FFCF94A82D26B73E;
// GooglePlayGames.PlayGamesScore
struct PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD;
// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A;
// GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19
struct U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57;
// GooglePlayGames.PluginVersion
struct PluginVersion_tB0E519E7845CD35129B206E909BC0EF6A24D6BE9;
// GooglePlayGames.ReportProgress
struct ReportProgress_t9005E71F3F2926AA8F3AACA34E376CD5254022BD;
// ImageButton
struct ImageButton_t99868748211E38672C8630E7BA340D9B333EA228;
// ObstacleController
struct ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374;
// ObstacleController/<SpawnProtection>d__14
struct U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800;
// ObstacleFlip
struct ObstacleFlip_t7AA8DC62C0ADD6136191C85A05986C55A16A7878;
// PlayerController
struct PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85;
// PlayerController/<ClearJumpPowerBar>d__13
struct U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9;
// PlayerController/<IncreaseJumpForce>d__12
struct U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA;
// RepeatingObjectController
struct RepeatingObjectController_t1828C6BAE63A1910AB583F7A2908A0EB7B5D7148;
// ScoreDetector
struct ScoreDetector_tAD5BB67AC0160069A3D0A8FBAA2B1077E8597C2D;
// ScrollingObjectController
struct ScrollingObjectController_tFCF317A2D7546A0AFD816DE525D5CF9D5CC1A96C;
// Singleton`1<ObstacleController>
struct Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C;
// Singleton`1<PlayerController>
struct Singleton_1_tEA12A543EBA23A76CB1BF6954851783525A5AF77;
// Singleton`1<System.Object>
struct Singleton_1_tED9082D93E67F632D3487C3E0A91F16140913550;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>
struct Action_1_tB5B054B813AD8569E849DE94D5861CAD1D2CBFDA;
// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_tF84E5DFA81F5CE1FC0CE0E80ED769E6C1242FB9E;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t3D4152882C54B77C712688E910390D5C8E030463;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Animator
struct Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasGroup
struct CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider2D
struct Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE;
// UnityEngine.Collision2D
struct Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_tB173AC5659F7F584EAC1883D6CCA72F750215EF0;
// UnityEngine.SocialPlatforms.IAchievementDescription
struct IAchievementDescription_tEE6425D0EB6C5DC5215A3692C2A44674F606A0D5;
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C;
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t7071592562FA847344065DBB0352B1DE4937671A;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t8EC2280EF29BB961820B7DF6D14E28EEE6CCF315;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;

IL2CPP_EXTERN_C RuntimeClass* Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayGamesClient_tB929CAE947C17CC89A2E2AB9ADC60C827B6825A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t3E750EF4B5D1A8799801389FCD60CD6336A82C1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesHelperObject_tD1050B62E48DADEEC8592DB770B2E997921FD18F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tBE2C6914C0452E17EFB5BFC36236C7083639A9E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_tEA12A543EBA23A76CB1BF6954851783525A5AF77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0837EB2E6C27BCBDCF831341740CD09AB5362A;
IL2CPP_EXTERN_C String_t* _stringLiteral12D7948F6A3F9300B064A719814E82CA34E4A5CA;
IL2CPP_EXTERN_C String_t* _stringLiteral16823976FDE6BD558ACAA28E731C6AABDADFAA8F;
IL2CPP_EXTERN_C String_t* _stringLiteral36A883E762D4A1748155C266A886E7DBB18EDF8A;
IL2CPP_EXTERN_C String_t* _stringLiteral39A1D38061AA77B4A79B46886DFD569D9C2D1281;
IL2CPP_EXTERN_C String_t* _stringLiteral750A16582AAF833F1109CB1D1CF5C918619D5063;
IL2CPP_EXTERN_C String_t* _stringLiteral851CCF432FDDA32757C16391AEFAA7F77A683408;
IL2CPP_EXTERN_C String_t* _stringLiteral9235AFD3E98802411861A961AA9CF61E90C1C977;
IL2CPP_EXTERN_C String_t* _stringLiteralA1B024190473A15BBF80FBD244257996F3D8B436;
IL2CPP_EXTERN_C String_t* _stringLiteralA8ACC887501AAE667B7DD99B8035876606121208;
IL2CPP_EXTERN_C String_t* _stringLiteralB692C108018DFA4D7440FEF397D0CCA8C678E070;
IL2CPP_EXTERN_C String_t* _stringLiteralC5024F3031E029718EA095EE1A8D30D214C2E012;
IL2CPP_EXTERN_C String_t* _stringLiteralC837A43528CC5B0BE6EC554F2990669ECDF370F6;
IL2CPP_EXTERN_C String_t* _stringLiteralE07B915FC8AA3BFF558846E6D7E1018D477E6BC7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2993E3BA8E949129120C8B951DD861D638A86B5;
IL2CPP_EXTERN_C String_t* _stringLiteralECF6120DE188550139F123682DCBA1D92BB018E6;
IL2CPP_EXTERN_C String_t* _stringLiteralEE94E3AAD2CF31058A38FDBC06701327E3A18760;
IL2CPP_EXTERN_C String_t* _stringLiteralF235F22D8E81D65DBC3BAAC227B59ACE629D0FFF;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m5C7A22095E708452C272C2BBC5CE4F6E72236861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6D94201F6F60C71FD959534E58DC5F2E0534C16D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mE3A21ED777AB89C3D7028E12C9FFC737AD5214EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mFE16CD4BDEDFE680B174E7380FA78E7EB5200780_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m4B932677A7C359EDFFC4D1647AA5AFBB267E3421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m5604B8EA633CE177B97BE705AE69E9CEC33C0CB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m5A838E74F27646695C921997228C24A7D6DB6D09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m90A79C19E9B4B829F681CE86F9C4C972BA05E191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CClearJumpPowerBarU3Ed__13_System_Collections_IEnumerator_Reset_m5D2FBFBA73AA1134F39C44F2106D358984DF5744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIncreaseJumpForceU3Ed__12_System_Collections_IEnumerator_Reset_mA6E5C4E0539B01AEF7A36B518D28D9149B2FBC1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadImageU3Ed__19_System_Collections_IEnumerator_Reset_mEB5DE10876A8396F24F82102B639953CF8465460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnProtectionU3Ed__14_System_Collections_IEnumerator_Reset_m67C0BA24AD780738CA9D33F77F1FD9556270A4D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ImageButton_OnPointerDown_mA72EC84C155614417383C260E804B968141A244C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ImageButton_OnPointerUp_m51FEFAA6FE33BE6683895D52AE03F41A760A4F85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ImageButton_OnValidate_mB999CA0E393EA34C004974CE6FFF28550BF859E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ImageButton_set_Interactive_m2EF1F97F989694762F2FE513DE2F02B811966A3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObstacleController_ChanceBasedSpawn_mE5C3BDDD9D69156167DC73EF93A0B43AB85D0224_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObstacleController_SpawnProtection_mE059161ECBC4645CF4DA10E1FFDC2094E9359C41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObstacleController__ctor_m8B394085520686A6A26C92ED422071455E422D23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObstacleFlip_Start_mD598A8594FC7A245EC16B252CEAFC2C44F0B16A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObstacleFlip_Update_m8546D9CCC816C3CBFAD9E51851687852BC28B999_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesScore_ReportScore_m2BF5A23981253056C97A5E8A860D96D26658E412_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesScore__ctor_m18FBC0A8EA7603F5760481BFD338F7B643377ACB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesUserProfile_Equals_m2652936326265547E0B694AC5BF0D7F8AE62FDFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesUserProfile_GetHashCode_mA7883CB96B1D03563B62B325A3A0FD202D2EE48D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesUserProfile_LoadImage_m35F861C72C561C981A97ACF7502570213E6BADFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesUserProfile_ToString_mDCB410AE7A195790EB929AC63A59EE2B04CC2A1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayGamesUserProfile_get_image_m631FAB918D3DCC702DAA4D3469FC7BD93E8222E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_ClearJumpPowerBar_mC3BE30E707421A60C4A88B5ECE2638A3DC0D72D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_IncreaseJumpForce_m8A72D2B104A503CD4D855DF9B7A39B099561BF9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_OnCollisionEnter2D_m2FB7FDCCF04D10F2634F3B03BCAD0008E7F182BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_Start_mC0C9B9461D0BDAC48EC43715818A4BA63C4F45EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController_Update_m38903EF1C8F12B9388303741F8040EE26C33DC33_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerController__ctor_m648E40092E37395F4307411E855445886113CD60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RepeatingObjectController_Awake_m589B1F1D5F9431AD872E58B283CBBA501B03290B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RepeatingObjectController_RepositionBackground_mF172E93A6B797F4D0E6AE3969F0A4CC4B18F86E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReportProgress_BeginInvoke_mE00000758478E8F36ACF71DCC2CC8C3712E21AAA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScoreDetector_OnTriggerEnter2D_mC70C1E8183931E607F53E8871CDAE9FBACCE56F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScrollingObjectController_Start_m997B3215ECF65FEDFA44032C7CD1B95DCBF2ABDD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScrollingObjectController_Update_m24F05C5B1E345CD04D2A92C0043F334DAACC470C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringComparer_get_Ordinal_m1F38FBAB170DF80D33FE2A849D30FF2E314D9FDBAssemblyU2DCSharp4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CClearJumpPowerBarU3Ed__13_System_Collections_IEnumerator_Reset_m5D2FBFBA73AA1134F39C44F2106D358984DF5744_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CIncreaseJumpForceU3Ed__12_MoveNext_m3B360BAB874AE94B41DC24107D01840B845B6C3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CIncreaseJumpForceU3Ed__12_System_Collections_IEnumerator_Reset_mA6E5C4E0539B01AEF7A36B518D28D9149B2FBC1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadImageU3Ed__19_MoveNext_m1EA976F7481F7FD2EE3D2208A52E243B28BCA1EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadImageU3Ed__19_System_Collections_IEnumerator_Reset_mEB5DE10876A8396F24F82102B639953CF8465460_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSpawnProtectionU3Ed__14_MoveNext_mFA8F577EEED9492B88CF71ADBAA47A70E6B50878_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CSpawnProtectionU3Ed__14_System_Collections_IEnumerator_Reset_m67C0BA24AD780738CA9D33F77F1FD9556270A4D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass30_0_U3CInitializeNearbyU3Eb__0_m0867C19359B6F9B8427595E91B8BBDC4D87856D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass37_0_U3CAuthenticateU3Eb__0_mF439199396515BF928A465425D2A3D10A69418D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass47_0_U3CGetAnotherServerAuthCodeU3Eb__0_m741293D5EDCCD16EF2ED0928989FC769098F332D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass52_0_U3CReportProgressU3Eb__0_m176103EF3D863BE83AB2E49AFB819122833ECD56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass57_0_U3CLoadAchievementDescriptionsU3Eb__0_mF6C512C1D22E4A821C8F8FCA75CE4E2235E0AA7F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass58_0_U3CLoadAchievementsU3Eb__0_m1DD7DFBAE34CA2D9B17958A402C6C88A7C363FC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass62_0_U3CLoadScoresU3Eb__0_mF028966B9D39A016E3C4C02D9ED4A1738771C387_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass74_0_U3CLoadScoresU3Eb__0_mEF4C49EDD51A56399203EB5BF1B9F3AD1C40E007_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;

struct AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE;
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
struct IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C;
struct IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002;
struct IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass30_0
struct  U3CU3Ec__DisplayClass30_0_t63D6B41AFB9887EECDF02A2C93C337C87E445B63  : public RuntimeObject
{
public:
	// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient> GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass30_0::callback
	Action_1_tB5B054B813AD8569E849DE94D5861CAD1D2CBFDA * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_t63D6B41AFB9887EECDF02A2C93C337C87E445B63, ___callback_0)); }
	inline Action_1_tB5B054B813AD8569E849DE94D5861CAD1D2CBFDA * get_callback_0() const { return ___callback_0; }
	inline Action_1_tB5B054B813AD8569E849DE94D5861CAD1D2CBFDA ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tB5B054B813AD8569E849DE94D5861CAD1D2CBFDA * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass37_0
struct  U3CU3Ec__DisplayClass37_0_t4402CB4921709DCECAFEE5A246DAF26FAA5FF9D0  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass37_0::callback
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass37_0_t4402CB4921709DCECAFEE5A246DAF26FAA5FF9D0, ___callback_0)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_callback_0() const { return ___callback_0; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass47_0
struct  U3CU3Ec__DisplayClass47_0_t62C4C9E596B45600D31041CD589AF94AF22AD284  : public RuntimeObject
{
public:
	// System.Action`1<System.String> GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass47_0::callback
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___callback_0;
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass47_0::<>4__this
	PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t62C4C9E596B45600D31041CD589AF94AF22AD284, ___callback_0)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t62C4C9E596B45600D31041CD589AF94AF22AD284, ___U3CU3E4__this_1)); }
	inline PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass52_0
struct  U3CU3Ec__DisplayClass52_0_t7CF81519D12B515BBF0301F331BDCDF15FC8342F  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass52_0::callback
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback_0;
	// System.String GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass52_0::achievementID
	String_t* ___achievementID_1;
	// System.Double GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass52_0::progress
	double ___progress_2;
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass52_0::<>4__this
	PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * ___U3CU3E4__this_3;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t7CF81519D12B515BBF0301F331BDCDF15FC8342F, ___callback_0)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_callback_0() const { return ___callback_0; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}

	inline static int32_t get_offset_of_achievementID_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t7CF81519D12B515BBF0301F331BDCDF15FC8342F, ___achievementID_1)); }
	inline String_t* get_achievementID_1() const { return ___achievementID_1; }
	inline String_t** get_address_of_achievementID_1() { return &___achievementID_1; }
	inline void set_achievementID_1(String_t* value)
	{
		___achievementID_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___achievementID_1), (void*)value);
	}

	inline static int32_t get_offset_of_progress_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t7CF81519D12B515BBF0301F331BDCDF15FC8342F, ___progress_2)); }
	inline double get_progress_2() const { return ___progress_2; }
	inline double* get_address_of_progress_2() { return &___progress_2; }
	inline void set_progress_2(double value)
	{
		___progress_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t7CF81519D12B515BBF0301F331BDCDF15FC8342F, ___U3CU3E4__this_3)); }
	inline PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass57_0
struct  U3CU3Ec__DisplayClass57_0_t89565AF840CEEB8341D44B2550EA97CAAB6DF4D8  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]> GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass57_0::callback
	Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t89565AF840CEEB8341D44B2550EA97CAAB6DF4D8, ___callback_0)); }
	inline Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * get_callback_0() const { return ___callback_0; }
	inline Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass58_0
struct  U3CU3Ec__DisplayClass58_0_t17DA5222E9852F293C41B6063A8A9EEEB2077D91  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]> GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass58_0::callback
	Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_t17DA5222E9852F293C41B6063A8A9EEEB2077D91, ___callback_0)); }
	inline Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass62_0
struct  U3CU3Ec__DisplayClass62_0_t014D9BB400C950A8CC98731687BCAD9C16D20E96  : public RuntimeObject
{
public:
	// System.Action`1<UnityEngine.SocialPlatforms.IScore[]> GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass62_0::callback
	Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass62_0_t014D9BB400C950A8CC98731687BCAD9C16D20E96, ___callback_0)); }
	inline Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C * get_callback_0() const { return ___callback_0; }
	inline Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_0), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass74_0
struct  U3CU3Ec__DisplayClass74_0_t177A778562DE6C03568B1FD6D00BF77063951E0F  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass74_0::<>4__this
	PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * ___U3CU3E4__this_0;
	// UnityEngine.SocialPlatforms.ILeaderboard GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass74_0::board
	RuntimeObject* ___board_1;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass74_0::callback
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_t177A778562DE6C03568B1FD6D00BF77063951E0F, ___U3CU3E4__this_0)); }
	inline PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_board_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_t177A778562DE6C03568B1FD6D00BF77063951E0F, ___board_1)); }
	inline RuntimeObject* get_board_1() const { return ___board_1; }
	inline RuntimeObject** get_address_of_board_1() { return &___board_1; }
	inline void set_board_1(RuntimeObject* value)
	{
		___board_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___board_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_t177A778562DE6C03568B1FD6D00BF77063951E0F, ___callback_2)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_callback_2() const { return ___callback_2; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass77_0
struct  U3CU3Ec__DisplayClass77_0_tF533F2032DAAE876E577DBF1FFCF94A82D26B73E  : public RuntimeObject
{
public:
	// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass77_0::<>4__this
	PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * ___U3CU3E4__this_0;
	// GooglePlayGames.PlayGamesLeaderboard GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass77_0::board
	PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F * ___board_1;
	// System.Action`1<System.Boolean> GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass77_0::callback
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback_2;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_tF533F2032DAAE876E577DBF1FFCF94A82D26B73E, ___U3CU3E4__this_0)); }
	inline PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_board_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_tF533F2032DAAE876E577DBF1FFCF94A82D26B73E, ___board_1)); }
	inline PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F * get_board_1() const { return ___board_1; }
	inline PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F ** get_address_of_board_1() { return &___board_1; }
	inline void set_board_1(PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F * value)
	{
		___board_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___board_1), (void*)value);
	}

	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass77_0_tF533F2032DAAE876E577DBF1FFCF94A82D26B73E, ___callback_2)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_callback_2() const { return ___callback_2; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesUserProfile_<LoadImage>d__19
struct  U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57  : public RuntimeObject
{
public:
	// System.Int32 GooglePlayGames.PlayGamesUserProfile_<LoadImage>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GooglePlayGames.PlayGamesUserProfile_<LoadImage>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GooglePlayGames.PlayGamesUserProfile GooglePlayGames.PlayGamesUserProfile_<LoadImage>d__19::<>4__this
	PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest GooglePlayGames.PlayGamesUserProfile_<LoadImage>d__19::<www>5__2
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57, ___U3CU3E4__this_2)); }
	inline PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57, ___U3CwwwU3E5__2_3)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// GooglePlayGames.PluginVersion
struct  PluginVersion_tB0E519E7845CD35129B206E909BC0EF6A24D6BE9  : public RuntimeObject
{
public:

public:
};


// ObstacleController_<SpawnProtection>d__14
struct  U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800  : public RuntimeObject
{
public:
	// System.Int32 ObstacleController_<SpawnProtection>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ObstacleController_<SpawnProtection>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ObstacleController ObstacleController_<SpawnProtection>d__14::<>4__this
	ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800, ___U3CU3E4__this_2)); }
	inline ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// PlayerController_<ClearJumpPowerBar>d__13
struct  U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9  : public RuntimeObject
{
public:
	// System.Int32 PlayerController_<ClearJumpPowerBar>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController_<ClearJumpPowerBar>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerController PlayerController_<ClearJumpPowerBar>d__13::<>4__this
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9, ___U3CU3E4__this_2)); }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.StringComparer
struct  StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_StaticFields
{
public:
	// System.StringComparer System.StringComparer::_invariantCulture
	StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * ____invariantCulture_0;
	// System.StringComparer System.StringComparer::_invariantCultureIgnoreCase
	StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * ____invariantCultureIgnoreCase_1;
	// System.StringComparer System.StringComparer::_ordinal
	StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * ____ordinal_2;
	// System.StringComparer System.StringComparer::_ordinalIgnoreCase
	StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * ____ordinalIgnoreCase_3;

public:
	inline static int32_t get_offset_of__invariantCulture_0() { return static_cast<int32_t>(offsetof(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_StaticFields, ____invariantCulture_0)); }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * get__invariantCulture_0() const { return ____invariantCulture_0; }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE ** get_address_of__invariantCulture_0() { return &____invariantCulture_0; }
	inline void set__invariantCulture_0(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * value)
	{
		____invariantCulture_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCulture_0), (void*)value);
	}

	inline static int32_t get_offset_of__invariantCultureIgnoreCase_1() { return static_cast<int32_t>(offsetof(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_StaticFields, ____invariantCultureIgnoreCase_1)); }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * get__invariantCultureIgnoreCase_1() const { return ____invariantCultureIgnoreCase_1; }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE ** get_address_of__invariantCultureIgnoreCase_1() { return &____invariantCultureIgnoreCase_1; }
	inline void set__invariantCultureIgnoreCase_1(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * value)
	{
		____invariantCultureIgnoreCase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____invariantCultureIgnoreCase_1), (void*)value);
	}

	inline static int32_t get_offset_of__ordinal_2() { return static_cast<int32_t>(offsetof(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_StaticFields, ____ordinal_2)); }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * get__ordinal_2() const { return ____ordinal_2; }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE ** get_address_of__ordinal_2() { return &____ordinal_2; }
	inline void set__ordinal_2(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * value)
	{
		____ordinal_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinal_2), (void*)value);
	}

	inline static int32_t get_offset_of__ordinalIgnoreCase_3() { return static_cast<int32_t>(offsetof(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_StaticFields, ____ordinalIgnoreCase_3)); }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * get__ordinalIgnoreCase_3() const { return ____ordinalIgnoreCase_3; }
	inline StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE ** get_address_of__ordinalIgnoreCase_3() { return &____ordinalIgnoreCase_3; }
	inline void set__ordinalIgnoreCase_3(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * value)
	{
		____ordinalIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ordinalIgnoreCase_3), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TypeName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// UnityEngineExtensions
struct  UnityEngineExtensions_t45C05DEAB7127E82536F516A1D1019A29E490BD9  : public RuntimeObject
{
public:

public:
};


// GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct  PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mEnableSavedGames
	bool ___mEnableSavedGames_1;
	// System.String[] GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mScopes
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___mScopes_2;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestAuthCode
	bool ___mRequestAuthCode_3;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mForceRefresh
	bool ___mForceRefresh_4;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mHidePopups
	bool ___mHidePopups_5;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestEmail
	bool ___mRequestEmail_6;
	// System.Boolean GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mRequestIdToken
	bool ___mRequestIdToken_7;
	// System.String GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mAccountName
	String_t* ___mAccountName_8;
	// GooglePlayGames.BasicApi.InvitationReceivedDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mInvitationDelegate
	InvitationReceivedDelegate_tAD1E7C276309F52D6F14E0F359E0B3AD66712F00 * ___mInvitationDelegate_9;
	// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate GooglePlayGames.BasicApi.PlayGamesClientConfiguration::mMatchDelegate
	MatchDelegate_tF68593A18A4B18F7A28EA92C569C41B938E21C56 * ___mMatchDelegate_10;

public:
	inline static int32_t get_offset_of_mEnableSavedGames_1() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90, ___mEnableSavedGames_1)); }
	inline bool get_mEnableSavedGames_1() const { return ___mEnableSavedGames_1; }
	inline bool* get_address_of_mEnableSavedGames_1() { return &___mEnableSavedGames_1; }
	inline void set_mEnableSavedGames_1(bool value)
	{
		___mEnableSavedGames_1 = value;
	}

	inline static int32_t get_offset_of_mScopes_2() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90, ___mScopes_2)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_mScopes_2() const { return ___mScopes_2; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_mScopes_2() { return &___mScopes_2; }
	inline void set_mScopes_2(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___mScopes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScopes_2), (void*)value);
	}

	inline static int32_t get_offset_of_mRequestAuthCode_3() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90, ___mRequestAuthCode_3)); }
	inline bool get_mRequestAuthCode_3() const { return ___mRequestAuthCode_3; }
	inline bool* get_address_of_mRequestAuthCode_3() { return &___mRequestAuthCode_3; }
	inline void set_mRequestAuthCode_3(bool value)
	{
		___mRequestAuthCode_3 = value;
	}

	inline static int32_t get_offset_of_mForceRefresh_4() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90, ___mForceRefresh_4)); }
	inline bool get_mForceRefresh_4() const { return ___mForceRefresh_4; }
	inline bool* get_address_of_mForceRefresh_4() { return &___mForceRefresh_4; }
	inline void set_mForceRefresh_4(bool value)
	{
		___mForceRefresh_4 = value;
	}

	inline static int32_t get_offset_of_mHidePopups_5() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90, ___mHidePopups_5)); }
	inline bool get_mHidePopups_5() const { return ___mHidePopups_5; }
	inline bool* get_address_of_mHidePopups_5() { return &___mHidePopups_5; }
	inline void set_mHidePopups_5(bool value)
	{
		___mHidePopups_5 = value;
	}

	inline static int32_t get_offset_of_mRequestEmail_6() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90, ___mRequestEmail_6)); }
	inline bool get_mRequestEmail_6() const { return ___mRequestEmail_6; }
	inline bool* get_address_of_mRequestEmail_6() { return &___mRequestEmail_6; }
	inline void set_mRequestEmail_6(bool value)
	{
		___mRequestEmail_6 = value;
	}

	inline static int32_t get_offset_of_mRequestIdToken_7() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90, ___mRequestIdToken_7)); }
	inline bool get_mRequestIdToken_7() const { return ___mRequestIdToken_7; }
	inline bool* get_address_of_mRequestIdToken_7() { return &___mRequestIdToken_7; }
	inline void set_mRequestIdToken_7(bool value)
	{
		___mRequestIdToken_7 = value;
	}

	inline static int32_t get_offset_of_mAccountName_8() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90, ___mAccountName_8)); }
	inline String_t* get_mAccountName_8() const { return ___mAccountName_8; }
	inline String_t** get_address_of_mAccountName_8() { return &___mAccountName_8; }
	inline void set_mAccountName_8(String_t* value)
	{
		___mAccountName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAccountName_8), (void*)value);
	}

	inline static int32_t get_offset_of_mInvitationDelegate_9() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90, ___mInvitationDelegate_9)); }
	inline InvitationReceivedDelegate_tAD1E7C276309F52D6F14E0F359E0B3AD66712F00 * get_mInvitationDelegate_9() const { return ___mInvitationDelegate_9; }
	inline InvitationReceivedDelegate_tAD1E7C276309F52D6F14E0F359E0B3AD66712F00 ** get_address_of_mInvitationDelegate_9() { return &___mInvitationDelegate_9; }
	inline void set_mInvitationDelegate_9(InvitationReceivedDelegate_tAD1E7C276309F52D6F14E0F359E0B3AD66712F00 * value)
	{
		___mInvitationDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInvitationDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_mMatchDelegate_10() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90, ___mMatchDelegate_10)); }
	inline MatchDelegate_tF68593A18A4B18F7A28EA92C569C41B938E21C56 * get_mMatchDelegate_10() const { return ___mMatchDelegate_10; }
	inline MatchDelegate_tF68593A18A4B18F7A28EA92C569C41B938E21C56 ** get_address_of_mMatchDelegate_10() { return &___mMatchDelegate_10; }
	inline void set_mMatchDelegate_10(MatchDelegate_tF68593A18A4B18F7A28EA92C569C41B938E21C56 * value)
	{
		___mMatchDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMatchDelegate_10), (void*)value);
	}
};

struct PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90_StaticFields
{
public:
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.BasicApi.PlayGamesClientConfiguration::DefaultConfiguration
	PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90  ___DefaultConfiguration_0;

public:
	inline static int32_t get_offset_of_DefaultConfiguration_0() { return static_cast<int32_t>(offsetof(PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90_StaticFields, ___DefaultConfiguration_0)); }
	inline PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90  get_DefaultConfiguration_0() const { return ___DefaultConfiguration_0; }
	inline PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90 * get_address_of_DefaultConfiguration_0() { return &___DefaultConfiguration_0; }
	inline void set_DefaultConfiguration_0(PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90  value)
	{
		___DefaultConfiguration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultConfiguration_0))->___mScopes_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultConfiguration_0))->___mAccountName_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultConfiguration_0))->___mInvitationDelegate_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___DefaultConfiguration_0))->___mMatchDelegate_10), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90_marshaled_pinvoke
{
	int32_t ___mEnableSavedGames_1;
	char** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	char* ___mAccountName_8;
	Il2CppMethodPointer ___mInvitationDelegate_9;
	Il2CppMethodPointer ___mMatchDelegate_10;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.PlayGamesClientConfiguration
struct PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90_marshaled_com
{
	int32_t ___mEnableSavedGames_1;
	Il2CppChar** ___mScopes_2;
	int32_t ___mRequestAuthCode_3;
	int32_t ___mForceRefresh_4;
	int32_t ___mHidePopups_5;
	int32_t ___mRequestEmail_6;
	int32_t ___mRequestIdToken_7;
	Il2CppChar* ___mAccountName_8;
	Il2CppMethodPointer ___mInvitationDelegate_9;
	Il2CppMethodPointer ___mMatchDelegate_10;
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5  : public AbstractEventData_t636F385820C291DAE25897BCEB4FBCADDA3B75F6
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5, ___m_EventSystem_1)); }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t06ACEF1C8D95D44D3A7F57ED4BAA577101B4EA77 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SocialPlatforms.Range
struct  Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// GooglePlayGames.BasicApi.Achievement
struct  Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.Achievement::mId
	String_t* ___mId_1;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsIncremental
	bool ___mIsIncremental_2;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsRevealed
	bool ___mIsRevealed_3;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsUnlocked
	bool ___mIsUnlocked_4;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mCurrentSteps
	int32_t ___mCurrentSteps_5;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mTotalSteps
	int32_t ___mTotalSteps_6;
	// System.String GooglePlayGames.BasicApi.Achievement::mDescription
	String_t* ___mDescription_7;
	// System.String GooglePlayGames.BasicApi.Achievement::mName
	String_t* ___mName_8;
	// System.Int64 GooglePlayGames.BasicApi.Achievement::mLastModifiedTime
	int64_t ___mLastModifiedTime_9;
	// System.UInt64 GooglePlayGames.BasicApi.Achievement::mPoints
	uint64_t ___mPoints_10;
	// System.String GooglePlayGames.BasicApi.Achievement::mRevealedImageUrl
	String_t* ___mRevealedImageUrl_11;
	// System.String GooglePlayGames.BasicApi.Achievement::mUnlockedImageUrl
	String_t* ___mUnlockedImageUrl_12;

public:
	inline static int32_t get_offset_of_mId_1() { return static_cast<int32_t>(offsetof(Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09, ___mId_1)); }
	inline String_t* get_mId_1() const { return ___mId_1; }
	inline String_t** get_address_of_mId_1() { return &___mId_1; }
	inline void set_mId_1(String_t* value)
	{
		___mId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mIsIncremental_2() { return static_cast<int32_t>(offsetof(Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09, ___mIsIncremental_2)); }
	inline bool get_mIsIncremental_2() const { return ___mIsIncremental_2; }
	inline bool* get_address_of_mIsIncremental_2() { return &___mIsIncremental_2; }
	inline void set_mIsIncremental_2(bool value)
	{
		___mIsIncremental_2 = value;
	}

	inline static int32_t get_offset_of_mIsRevealed_3() { return static_cast<int32_t>(offsetof(Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09, ___mIsRevealed_3)); }
	inline bool get_mIsRevealed_3() const { return ___mIsRevealed_3; }
	inline bool* get_address_of_mIsRevealed_3() { return &___mIsRevealed_3; }
	inline void set_mIsRevealed_3(bool value)
	{
		___mIsRevealed_3 = value;
	}

	inline static int32_t get_offset_of_mIsUnlocked_4() { return static_cast<int32_t>(offsetof(Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09, ___mIsUnlocked_4)); }
	inline bool get_mIsUnlocked_4() const { return ___mIsUnlocked_4; }
	inline bool* get_address_of_mIsUnlocked_4() { return &___mIsUnlocked_4; }
	inline void set_mIsUnlocked_4(bool value)
	{
		___mIsUnlocked_4 = value;
	}

	inline static int32_t get_offset_of_mCurrentSteps_5() { return static_cast<int32_t>(offsetof(Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09, ___mCurrentSteps_5)); }
	inline int32_t get_mCurrentSteps_5() const { return ___mCurrentSteps_5; }
	inline int32_t* get_address_of_mCurrentSteps_5() { return &___mCurrentSteps_5; }
	inline void set_mCurrentSteps_5(int32_t value)
	{
		___mCurrentSteps_5 = value;
	}

	inline static int32_t get_offset_of_mTotalSteps_6() { return static_cast<int32_t>(offsetof(Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09, ___mTotalSteps_6)); }
	inline int32_t get_mTotalSteps_6() const { return ___mTotalSteps_6; }
	inline int32_t* get_address_of_mTotalSteps_6() { return &___mTotalSteps_6; }
	inline void set_mTotalSteps_6(int32_t value)
	{
		___mTotalSteps_6 = value;
	}

	inline static int32_t get_offset_of_mDescription_7() { return static_cast<int32_t>(offsetof(Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09, ___mDescription_7)); }
	inline String_t* get_mDescription_7() const { return ___mDescription_7; }
	inline String_t** get_address_of_mDescription_7() { return &___mDescription_7; }
	inline void set_mDescription_7(String_t* value)
	{
		___mDescription_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDescription_7), (void*)value);
	}

	inline static int32_t get_offset_of_mName_8() { return static_cast<int32_t>(offsetof(Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09, ___mName_8)); }
	inline String_t* get_mName_8() const { return ___mName_8; }
	inline String_t** get_address_of_mName_8() { return &___mName_8; }
	inline void set_mName_8(String_t* value)
	{
		___mName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mName_8), (void*)value);
	}

	inline static int32_t get_offset_of_mLastModifiedTime_9() { return static_cast<int32_t>(offsetof(Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09, ___mLastModifiedTime_9)); }
	inline int64_t get_mLastModifiedTime_9() const { return ___mLastModifiedTime_9; }
	inline int64_t* get_address_of_mLastModifiedTime_9() { return &___mLastModifiedTime_9; }
	inline void set_mLastModifiedTime_9(int64_t value)
	{
		___mLastModifiedTime_9 = value;
	}

	inline static int32_t get_offset_of_mPoints_10() { return static_cast<int32_t>(offsetof(Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09, ___mPoints_10)); }
	inline uint64_t get_mPoints_10() const { return ___mPoints_10; }
	inline uint64_t* get_address_of_mPoints_10() { return &___mPoints_10; }
	inline void set_mPoints_10(uint64_t value)
	{
		___mPoints_10 = value;
	}

	inline static int32_t get_offset_of_mRevealedImageUrl_11() { return static_cast<int32_t>(offsetof(Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09, ___mRevealedImageUrl_11)); }
	inline String_t* get_mRevealedImageUrl_11() const { return ___mRevealedImageUrl_11; }
	inline String_t** get_address_of_mRevealedImageUrl_11() { return &___mRevealedImageUrl_11; }
	inline void set_mRevealedImageUrl_11(String_t* value)
	{
		___mRevealedImageUrl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRevealedImageUrl_11), (void*)value);
	}

	inline static int32_t get_offset_of_mUnlockedImageUrl_12() { return static_cast<int32_t>(offsetof(Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09, ___mUnlockedImageUrl_12)); }
	inline String_t* get_mUnlockedImageUrl_12() const { return ___mUnlockedImageUrl_12; }
	inline String_t** get_address_of_mUnlockedImageUrl_12() { return &___mUnlockedImageUrl_12; }
	inline void set_mUnlockedImageUrl_12(String_t* value)
	{
		___mUnlockedImageUrl_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUnlockedImageUrl_12), (void*)value);
	}
};

struct Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09_StaticFields
{
public:
	// System.DateTime GooglePlayGames.BasicApi.Achievement::UnixEpoch
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___UnixEpoch_0;

public:
	inline static int32_t get_offset_of_UnixEpoch_0() { return static_cast<int32_t>(offsetof(Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09_StaticFields, ___UnixEpoch_0)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_UnixEpoch_0() const { return ___UnixEpoch_0; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_UnixEpoch_0() { return &___UnixEpoch_0; }
	inline void set_UnixEpoch_0(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___UnixEpoch_0 = value;
	}
};


// GooglePlayGames.BasicApi.ResponseStatus
struct  ResponseStatus_t3F5F0C363FB0B0BF385D682390EEB710870DF87E 
{
public:
	// System.Int32 GooglePlayGames.BasicApi.ResponseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResponseStatus_t3F5F0C363FB0B0BF385D682390EEB710870DF87E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.PlayGamesAchievement
struct  PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244  : public RuntimeObject
{
public:
	// GooglePlayGames.ReportProgress GooglePlayGames.PlayGamesAchievement::mProgressCallback
	ReportProgress_t9005E71F3F2926AA8F3AACA34E376CD5254022BD * ___mProgressCallback_0;
	// System.String GooglePlayGames.PlayGamesAchievement::mId
	String_t* ___mId_1;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mIsIncremental
	bool ___mIsIncremental_2;
	// System.Int32 GooglePlayGames.PlayGamesAchievement::mCurrentSteps
	int32_t ___mCurrentSteps_3;
	// System.Int32 GooglePlayGames.PlayGamesAchievement::mTotalSteps
	int32_t ___mTotalSteps_4;
	// System.Double GooglePlayGames.PlayGamesAchievement::mPercentComplete
	double ___mPercentComplete_5;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mCompleted
	bool ___mCompleted_6;
	// System.Boolean GooglePlayGames.PlayGamesAchievement::mHidden
	bool ___mHidden_7;
	// System.DateTime GooglePlayGames.PlayGamesAchievement::mLastModifiedTime
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___mLastModifiedTime_8;
	// System.String GooglePlayGames.PlayGamesAchievement::mTitle
	String_t* ___mTitle_9;
	// System.String GooglePlayGames.PlayGamesAchievement::mRevealedImageUrl
	String_t* ___mRevealedImageUrl_10;
	// System.String GooglePlayGames.PlayGamesAchievement::mUnlockedImageUrl
	String_t* ___mUnlockedImageUrl_11;
	// UnityEngine.Networking.UnityWebRequest GooglePlayGames.PlayGamesAchievement::mImageFetcher
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___mImageFetcher_12;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesAchievement::mImage
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mImage_13;
	// System.String GooglePlayGames.PlayGamesAchievement::mDescription
	String_t* ___mDescription_14;
	// System.UInt64 GooglePlayGames.PlayGamesAchievement::mPoints
	uint64_t ___mPoints_15;

public:
	inline static int32_t get_offset_of_mProgressCallback_0() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mProgressCallback_0)); }
	inline ReportProgress_t9005E71F3F2926AA8F3AACA34E376CD5254022BD * get_mProgressCallback_0() const { return ___mProgressCallback_0; }
	inline ReportProgress_t9005E71F3F2926AA8F3AACA34E376CD5254022BD ** get_address_of_mProgressCallback_0() { return &___mProgressCallback_0; }
	inline void set_mProgressCallback_0(ReportProgress_t9005E71F3F2926AA8F3AACA34E376CD5254022BD * value)
	{
		___mProgressCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mProgressCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_mId_1() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mId_1)); }
	inline String_t* get_mId_1() const { return ___mId_1; }
	inline String_t** get_address_of_mId_1() { return &___mId_1; }
	inline void set_mId_1(String_t* value)
	{
		___mId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mIsIncremental_2() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mIsIncremental_2)); }
	inline bool get_mIsIncremental_2() const { return ___mIsIncremental_2; }
	inline bool* get_address_of_mIsIncremental_2() { return &___mIsIncremental_2; }
	inline void set_mIsIncremental_2(bool value)
	{
		___mIsIncremental_2 = value;
	}

	inline static int32_t get_offset_of_mCurrentSteps_3() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mCurrentSteps_3)); }
	inline int32_t get_mCurrentSteps_3() const { return ___mCurrentSteps_3; }
	inline int32_t* get_address_of_mCurrentSteps_3() { return &___mCurrentSteps_3; }
	inline void set_mCurrentSteps_3(int32_t value)
	{
		___mCurrentSteps_3 = value;
	}

	inline static int32_t get_offset_of_mTotalSteps_4() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mTotalSteps_4)); }
	inline int32_t get_mTotalSteps_4() const { return ___mTotalSteps_4; }
	inline int32_t* get_address_of_mTotalSteps_4() { return &___mTotalSteps_4; }
	inline void set_mTotalSteps_4(int32_t value)
	{
		___mTotalSteps_4 = value;
	}

	inline static int32_t get_offset_of_mPercentComplete_5() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mPercentComplete_5)); }
	inline double get_mPercentComplete_5() const { return ___mPercentComplete_5; }
	inline double* get_address_of_mPercentComplete_5() { return &___mPercentComplete_5; }
	inline void set_mPercentComplete_5(double value)
	{
		___mPercentComplete_5 = value;
	}

	inline static int32_t get_offset_of_mCompleted_6() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mCompleted_6)); }
	inline bool get_mCompleted_6() const { return ___mCompleted_6; }
	inline bool* get_address_of_mCompleted_6() { return &___mCompleted_6; }
	inline void set_mCompleted_6(bool value)
	{
		___mCompleted_6 = value;
	}

	inline static int32_t get_offset_of_mHidden_7() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mHidden_7)); }
	inline bool get_mHidden_7() const { return ___mHidden_7; }
	inline bool* get_address_of_mHidden_7() { return &___mHidden_7; }
	inline void set_mHidden_7(bool value)
	{
		___mHidden_7 = value;
	}

	inline static int32_t get_offset_of_mLastModifiedTime_8() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mLastModifiedTime_8)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_mLastModifiedTime_8() const { return ___mLastModifiedTime_8; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_mLastModifiedTime_8() { return &___mLastModifiedTime_8; }
	inline void set_mLastModifiedTime_8(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___mLastModifiedTime_8 = value;
	}

	inline static int32_t get_offset_of_mTitle_9() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mTitle_9)); }
	inline String_t* get_mTitle_9() const { return ___mTitle_9; }
	inline String_t** get_address_of_mTitle_9() { return &___mTitle_9; }
	inline void set_mTitle_9(String_t* value)
	{
		___mTitle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_9), (void*)value);
	}

	inline static int32_t get_offset_of_mRevealedImageUrl_10() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mRevealedImageUrl_10)); }
	inline String_t* get_mRevealedImageUrl_10() const { return ___mRevealedImageUrl_10; }
	inline String_t** get_address_of_mRevealedImageUrl_10() { return &___mRevealedImageUrl_10; }
	inline void set_mRevealedImageUrl_10(String_t* value)
	{
		___mRevealedImageUrl_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mRevealedImageUrl_10), (void*)value);
	}

	inline static int32_t get_offset_of_mUnlockedImageUrl_11() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mUnlockedImageUrl_11)); }
	inline String_t* get_mUnlockedImageUrl_11() const { return ___mUnlockedImageUrl_11; }
	inline String_t** get_address_of_mUnlockedImageUrl_11() { return &___mUnlockedImageUrl_11; }
	inline void set_mUnlockedImageUrl_11(String_t* value)
	{
		___mUnlockedImageUrl_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mUnlockedImageUrl_11), (void*)value);
	}

	inline static int32_t get_offset_of_mImageFetcher_12() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mImageFetcher_12)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_mImageFetcher_12() const { return ___mImageFetcher_12; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_mImageFetcher_12() { return &___mImageFetcher_12; }
	inline void set_mImageFetcher_12(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___mImageFetcher_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImageFetcher_12), (void*)value);
	}

	inline static int32_t get_offset_of_mImage_13() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mImage_13)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_mImage_13() const { return ___mImage_13; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_mImage_13() { return &___mImage_13; }
	inline void set_mImage_13(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___mImage_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImage_13), (void*)value);
	}

	inline static int32_t get_offset_of_mDescription_14() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mDescription_14)); }
	inline String_t* get_mDescription_14() const { return ___mDescription_14; }
	inline String_t** get_address_of_mDescription_14() { return &___mDescription_14; }
	inline void set_mDescription_14(String_t* value)
	{
		___mDescription_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDescription_14), (void*)value);
	}

	inline static int32_t get_offset_of_mPoints_15() { return static_cast<int32_t>(offsetof(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244, ___mPoints_15)); }
	inline uint64_t get_mPoints_15() const { return ___mPoints_15; }
	inline uint64_t* get_address_of_mPoints_15() { return &___mPoints_15; }
	inline void set_mPoints_15(uint64_t value)
	{
		___mPoints_15 = value;
	}
};


// GooglePlayGames.PlayGamesPlatform
struct  PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A  : public RuntimeObject
{
public:
	// GooglePlayGames.BasicApi.PlayGamesClientConfiguration GooglePlayGames.PlayGamesPlatform::mConfiguration
	PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90  ___mConfiguration_3;
	// GooglePlayGames.PlayGamesLocalUser GooglePlayGames.PlayGamesPlatform::mLocalUser
	PlayGamesLocalUser_t7F234076C5B693B9CBF6049455634BDD9F019EFA * ___mLocalUser_4;
	// GooglePlayGames.BasicApi.IPlayGamesClient GooglePlayGames.PlayGamesPlatform::mClient
	RuntimeObject* ___mClient_5;
	// System.String GooglePlayGames.PlayGamesPlatform::mDefaultLbUi
	String_t* ___mDefaultLbUi_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GooglePlayGames.PlayGamesPlatform::mIdMap
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___mIdMap_7;

public:
	inline static int32_t get_offset_of_mConfiguration_3() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A, ___mConfiguration_3)); }
	inline PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90  get_mConfiguration_3() const { return ___mConfiguration_3; }
	inline PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90 * get_address_of_mConfiguration_3() { return &___mConfiguration_3; }
	inline void set_mConfiguration_3(PlayGamesClientConfiguration_t1FE2DF2361256318A7F90713592C84471FA16A90  value)
	{
		___mConfiguration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mConfiguration_3))->___mScopes_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mConfiguration_3))->___mAccountName_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mConfiguration_3))->___mInvitationDelegate_9), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___mConfiguration_3))->___mMatchDelegate_10), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_mLocalUser_4() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A, ___mLocalUser_4)); }
	inline PlayGamesLocalUser_t7F234076C5B693B9CBF6049455634BDD9F019EFA * get_mLocalUser_4() const { return ___mLocalUser_4; }
	inline PlayGamesLocalUser_t7F234076C5B693B9CBF6049455634BDD9F019EFA ** get_address_of_mLocalUser_4() { return &___mLocalUser_4; }
	inline void set_mLocalUser_4(PlayGamesLocalUser_t7F234076C5B693B9CBF6049455634BDD9F019EFA * value)
	{
		___mLocalUser_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalUser_4), (void*)value);
	}

	inline static int32_t get_offset_of_mClient_5() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A, ___mClient_5)); }
	inline RuntimeObject* get_mClient_5() const { return ___mClient_5; }
	inline RuntimeObject** get_address_of_mClient_5() { return &___mClient_5; }
	inline void set_mClient_5(RuntimeObject* value)
	{
		___mClient_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mClient_5), (void*)value);
	}

	inline static int32_t get_offset_of_mDefaultLbUi_6() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A, ___mDefaultLbUi_6)); }
	inline String_t* get_mDefaultLbUi_6() const { return ___mDefaultLbUi_6; }
	inline String_t** get_address_of_mDefaultLbUi_6() { return &___mDefaultLbUi_6; }
	inline void set_mDefaultLbUi_6(String_t* value)
	{
		___mDefaultLbUi_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDefaultLbUi_6), (void*)value);
	}

	inline static int32_t get_offset_of_mIdMap_7() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A, ___mIdMap_7)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_mIdMap_7() const { return ___mIdMap_7; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_mIdMap_7() { return &___mIdMap_7; }
	inline void set_mIdMap_7(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___mIdMap_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mIdMap_7), (void*)value);
	}
};

struct PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A_StaticFields
{
public:
	// GooglePlayGames.PlayGamesPlatform modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sInstance
	PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * ___sInstance_0;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyInitializePending
	bool ___sNearbyInitializePending_1;
	// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesPlatform::sNearbyConnectionClient
	RuntimeObject* ___sNearbyConnectionClient_2;

public:
	inline static int32_t get_offset_of_sInstance_0() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A_StaticFields, ___sInstance_0)); }
	inline PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * get_sInstance_0() const { return ___sInstance_0; }
	inline PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A ** get_address_of_sInstance_0() { return &___sInstance_0; }
	inline void set_sInstance_0(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * value)
	{
		___sInstance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sInstance_0), (void*)value);
	}

	inline static int32_t get_offset_of_sNearbyInitializePending_1() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A_StaticFields, ___sNearbyInitializePending_1)); }
	inline bool get_sNearbyInitializePending_1() const { return ___sNearbyInitializePending_1; }
	inline bool* get_address_of_sNearbyInitializePending_1() { return &___sNearbyInitializePending_1; }
	inline void set_sNearbyInitializePending_1(bool value)
	{
		___sNearbyInitializePending_1 = value;
	}

	inline static int32_t get_offset_of_sNearbyConnectionClient_2() { return static_cast<int32_t>(offsetof(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A_StaticFields, ___sNearbyConnectionClient_2)); }
	inline RuntimeObject* get_sNearbyConnectionClient_2() const { return ___sNearbyConnectionClient_2; }
	inline RuntimeObject** get_address_of_sNearbyConnectionClient_2() { return &___sNearbyConnectionClient_2; }
	inline void set_sNearbyConnectionClient_2(RuntimeObject* value)
	{
		___sNearbyConnectionClient_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sNearbyConnectionClient_2), (void*)value);
	}
};


// GooglePlayGames.PlayGamesScore
struct  PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesScore::mLbId
	String_t* ___mLbId_0;
	// System.Int64 GooglePlayGames.PlayGamesScore::mValue
	int64_t ___mValue_1;
	// System.UInt64 GooglePlayGames.PlayGamesScore::mRank
	uint64_t ___mRank_2;
	// System.String GooglePlayGames.PlayGamesScore::mPlayerId
	String_t* ___mPlayerId_3;
	// System.String GooglePlayGames.PlayGamesScore::mMetadata
	String_t* ___mMetadata_4;
	// System.DateTime GooglePlayGames.PlayGamesScore::mDate
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___mDate_5;

public:
	inline static int32_t get_offset_of_mLbId_0() { return static_cast<int32_t>(offsetof(PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD, ___mLbId_0)); }
	inline String_t* get_mLbId_0() const { return ___mLbId_0; }
	inline String_t** get_address_of_mLbId_0() { return &___mLbId_0; }
	inline void set_mLbId_0(String_t* value)
	{
		___mLbId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLbId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mValue_1() { return static_cast<int32_t>(offsetof(PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD, ___mValue_1)); }
	inline int64_t get_mValue_1() const { return ___mValue_1; }
	inline int64_t* get_address_of_mValue_1() { return &___mValue_1; }
	inline void set_mValue_1(int64_t value)
	{
		___mValue_1 = value;
	}

	inline static int32_t get_offset_of_mRank_2() { return static_cast<int32_t>(offsetof(PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD, ___mRank_2)); }
	inline uint64_t get_mRank_2() const { return ___mRank_2; }
	inline uint64_t* get_address_of_mRank_2() { return &___mRank_2; }
	inline void set_mRank_2(uint64_t value)
	{
		___mRank_2 = value;
	}

	inline static int32_t get_offset_of_mPlayerId_3() { return static_cast<int32_t>(offsetof(PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD, ___mPlayerId_3)); }
	inline String_t* get_mPlayerId_3() const { return ___mPlayerId_3; }
	inline String_t** get_address_of_mPlayerId_3() { return &___mPlayerId_3; }
	inline void set_mPlayerId_3(String_t* value)
	{
		___mPlayerId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerId_3), (void*)value);
	}

	inline static int32_t get_offset_of_mMetadata_4() { return static_cast<int32_t>(offsetof(PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD, ___mMetadata_4)); }
	inline String_t* get_mMetadata_4() const { return ___mMetadata_4; }
	inline String_t** get_address_of_mMetadata_4() { return &___mMetadata_4; }
	inline void set_mMetadata_4(String_t* value)
	{
		___mMetadata_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mMetadata_4), (void*)value);
	}

	inline static int32_t get_offset_of_mDate_5() { return static_cast<int32_t>(offsetof(PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD, ___mDate_5)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_mDate_5() const { return ___mDate_5; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_mDate_5() { return &___mDate_5; }
	inline void set_mDate_5(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___mDate_5 = value;
	}
};


// GooglePlayGames.PlayGamesUserProfile
struct  PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesUserProfile::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.PlayGamesUserProfile::mPlayerId
	String_t* ___mPlayerId_1;
	// System.String GooglePlayGames.PlayGamesUserProfile::mAvatarUrl
	String_t* ___mAvatarUrl_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesUserProfile::mImageLoading
	bool ___mImageLoading_3;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::mImage
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___mImage_4;

public:
	inline static int32_t get_offset_of_mDisplayName_0() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A, ___mDisplayName_0)); }
	inline String_t* get_mDisplayName_0() const { return ___mDisplayName_0; }
	inline String_t** get_address_of_mDisplayName_0() { return &___mDisplayName_0; }
	inline void set_mDisplayName_0(String_t* value)
	{
		___mDisplayName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mDisplayName_0), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayerId_1() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A, ___mPlayerId_1)); }
	inline String_t* get_mPlayerId_1() const { return ___mPlayerId_1; }
	inline String_t** get_address_of_mPlayerId_1() { return &___mPlayerId_1; }
	inline void set_mPlayerId_1(String_t* value)
	{
		___mPlayerId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerId_1), (void*)value);
	}

	inline static int32_t get_offset_of_mAvatarUrl_2() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A, ___mAvatarUrl_2)); }
	inline String_t* get_mAvatarUrl_2() const { return ___mAvatarUrl_2; }
	inline String_t** get_address_of_mAvatarUrl_2() { return &___mAvatarUrl_2; }
	inline void set_mAvatarUrl_2(String_t* value)
	{
		___mAvatarUrl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mAvatarUrl_2), (void*)value);
	}

	inline static int32_t get_offset_of_mImageLoading_3() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A, ___mImageLoading_3)); }
	inline bool get_mImageLoading_3() const { return ___mImageLoading_3; }
	inline bool* get_address_of_mImageLoading_3() { return &___mImageLoading_3; }
	inline void set_mImageLoading_3(bool value)
	{
		___mImageLoading_3 = value;
	}

	inline static int32_t get_offset_of_mImage_4() { return static_cast<int32_t>(offsetof(PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A, ___mImage_4)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_mImage_4() const { return ___mImage_4; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_mImage_4() { return &___mImage_4; }
	inline void set_mImage_4(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___mImage_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mImage_4), (void*)value);
	}
};


// ObstacleController_ObstacleType
struct  ObstacleType_t8E3763B22320192BCA371F429D38F0346B306FE5 
{
public:
	// System.Int32 ObstacleController_ObstacleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObstacleType_t8E3763B22320192BCA371F429D38F0346B306FE5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PlayerController_<IncreaseJumpForce>d__12
struct  U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA  : public RuntimeObject
{
public:
	// System.Int32 PlayerController_<IncreaseJumpForce>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerController_<IncreaseJumpForce>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// PlayerController PlayerController_<IncreaseJumpForce>d__12::<>4__this
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * ___U3CU3E4__this_2;
	// System.Single PlayerController_<IncreaseJumpForce>d__12::<currentHold>5__2
	float ___U3CcurrentHoldU3E5__2_3;
	// UnityEngine.Vector2 PlayerController_<IncreaseJumpForce>d__12::<jump>5__3
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CjumpU3E5__3_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA, ___U3CU3E4__this_2)); }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcurrentHoldU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA, ___U3CcurrentHoldU3E5__2_3)); }
	inline float get_U3CcurrentHoldU3E5__2_3() const { return ___U3CcurrentHoldU3E5__2_3; }
	inline float* get_address_of_U3CcurrentHoldU3E5__2_3() { return &___U3CcurrentHoldU3E5__2_3; }
	inline void set_U3CcurrentHoldU3E5__2_3(float value)
	{
		___U3CcurrentHoldU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CjumpU3E5__3_4() { return static_cast<int32_t>(offsetof(U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA, ___U3CjumpU3E5__3_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CjumpU3E5__3_4() const { return ___U3CjumpU3E5__3_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CjumpU3E5__3_4() { return &___U3CjumpU3E5__3_4; }
	inline void set_U3CjumpU3E5__3_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CjumpU3E5__3_4 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*INT*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Collision2D
struct  Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_RelativeVelocity_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t390B6CBF0673E9C408A97BC093462A33516F2C32* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_ReusedContacts_7;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_ReusedContacts_7;
	ContactPoint2D_t7DE4097DD62E4240F4629EBB41F4BF089141E2C0 * ___m_LegacyContacts_8;
};

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventSystems.PointerEventData_InputButton
struct  InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData_InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tCC7470F9FD2AFE525243394F0215B47D4BF86AB0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___m_GameObject_0)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___module_1)); }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldPosition_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___worldNormal_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91, ___screenPosition_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___screenPosition_9 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_pinvoke
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91_marshaled_com
{
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_GameObject_0;
	BaseRaycaster_tC7F6105A89F54A38FBFC2659901855FDBB0E3966 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPosition_7;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldNormal_8;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPosition_9;
};

// UnityEngine.ForceMode2D
struct  ForceMode2D_t80F82E2BBC1733F0B88593968BA9CE9BC96A7E36 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode2D_t80F82E2BBC1733F0B88593968BA9CE9BC96A7E36, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RigidbodyConstraints2D
struct  RigidbodyConstraints2D_t9F8A12BA11523342B3AD28EFEEDD1AFFF61EFDAA 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyConstraints2D_t9F8A12BA11523342B3AD28EFEEDD1AFFF61EFDAA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.TimeScope
struct  TimeScope_t33ED9CE3541B951879D86F5AE6A8D9389E7A2369 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeScope_t33ED9CE3541B951879D86F5AE6A8D9389E7A2369, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.UserScope
struct  UserScope_t85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserScope_t85B1CA855A894226BDE6A19B4CBE7EC9F02D16E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SocialPlatforms.UserState
struct  UserState_t84B00958348DD8A2B8778416E393E229DACA5871 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserState_t84B00958348DD8A2B8778416E393E229DACA5871, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_FillMethod
struct  FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5 
{
public:
	// System.Int32 UnityEngine.UI.Image_FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_t0DB7332683118B7C7D2748BE74CFBF19CD19F8C5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_Type
struct  Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A 
{
public:
	// System.Int32 UnityEngine.UI.Image_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t96B8A259B84ADA5E7D3B1F13AEAE22175937F38A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// GooglePlayGames.BasicApi.LeaderboardScoreData
struct  LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mId
	String_t* ___mId_0;
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::mStatus
	int32_t ___mStatus_1;
	// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::mApproxCount
	uint64_t ___mApproxCount_2;
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mTitle
	String_t* ___mTitle_3;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::mPlayerScore
	RuntimeObject* ___mPlayerScore_4;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mPrevPage
	ScorePageToken_t39A19028C1B13325D8CB22B8899631F97CD6461B * ___mPrevPage_5;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mNextPage
	ScorePageToken_t39A19028C1B13325D8CB22B8899631F97CD6461B * ___mNextPage_6;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.BasicApi.LeaderboardScoreData::mScores
	List_1_tF84E5DFA81F5CE1FC0CE0E80ED769E6C1242FB9E * ___mScores_7;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mStatus_1() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED, ___mStatus_1)); }
	inline int32_t get_mStatus_1() const { return ___mStatus_1; }
	inline int32_t* get_address_of_mStatus_1() { return &___mStatus_1; }
	inline void set_mStatus_1(int32_t value)
	{
		___mStatus_1 = value;
	}

	inline static int32_t get_offset_of_mApproxCount_2() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED, ___mApproxCount_2)); }
	inline uint64_t get_mApproxCount_2() const { return ___mApproxCount_2; }
	inline uint64_t* get_address_of_mApproxCount_2() { return &___mApproxCount_2; }
	inline void set_mApproxCount_2(uint64_t value)
	{
		___mApproxCount_2 = value;
	}

	inline static int32_t get_offset_of_mTitle_3() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED, ___mTitle_3)); }
	inline String_t* get_mTitle_3() const { return ___mTitle_3; }
	inline String_t** get_address_of_mTitle_3() { return &___mTitle_3; }
	inline void set_mTitle_3(String_t* value)
	{
		___mTitle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_3), (void*)value);
	}

	inline static int32_t get_offset_of_mPlayerScore_4() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED, ___mPlayerScore_4)); }
	inline RuntimeObject* get_mPlayerScore_4() const { return ___mPlayerScore_4; }
	inline RuntimeObject** get_address_of_mPlayerScore_4() { return &___mPlayerScore_4; }
	inline void set_mPlayerScore_4(RuntimeObject* value)
	{
		___mPlayerScore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPlayerScore_4), (void*)value);
	}

	inline static int32_t get_offset_of_mPrevPage_5() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED, ___mPrevPage_5)); }
	inline ScorePageToken_t39A19028C1B13325D8CB22B8899631F97CD6461B * get_mPrevPage_5() const { return ___mPrevPage_5; }
	inline ScorePageToken_t39A19028C1B13325D8CB22B8899631F97CD6461B ** get_address_of_mPrevPage_5() { return &___mPrevPage_5; }
	inline void set_mPrevPage_5(ScorePageToken_t39A19028C1B13325D8CB22B8899631F97CD6461B * value)
	{
		___mPrevPage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPrevPage_5), (void*)value);
	}

	inline static int32_t get_offset_of_mNextPage_6() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED, ___mNextPage_6)); }
	inline ScorePageToken_t39A19028C1B13325D8CB22B8899631F97CD6461B * get_mNextPage_6() const { return ___mNextPage_6; }
	inline ScorePageToken_t39A19028C1B13325D8CB22B8899631F97CD6461B ** get_address_of_mNextPage_6() { return &___mNextPage_6; }
	inline void set_mNextPage_6(ScorePageToken_t39A19028C1B13325D8CB22B8899631F97CD6461B * value)
	{
		___mNextPage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mNextPage_6), (void*)value);
	}

	inline static int32_t get_offset_of_mScores_7() { return static_cast<int32_t>(offsetof(LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED, ___mScores_7)); }
	inline List_1_tF84E5DFA81F5CE1FC0CE0E80ED769E6C1242FB9E * get_mScores_7() const { return ___mScores_7; }
	inline List_1_tF84E5DFA81F5CE1FC0CE0E80ED769E6C1242FB9E ** get_address_of_mScores_7() { return &___mScores_7; }
	inline void set_mScores_7(List_1_tF84E5DFA81F5CE1FC0CE0E80ED769E6C1242FB9E * value)
	{
		___mScores_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScores_7), (void*)value);
	}
};


// GooglePlayGames.PlayGamesLeaderboard
struct  PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F  : public RuntimeObject
{
public:
	// System.String GooglePlayGames.PlayGamesLeaderboard::mId
	String_t* ___mId_0;
	// UnityEngine.SocialPlatforms.UserScope GooglePlayGames.PlayGamesLeaderboard::mUserScope
	int32_t ___mUserScope_1;
	// UnityEngine.SocialPlatforms.Range GooglePlayGames.PlayGamesLeaderboard::mRange
	Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  ___mRange_2;
	// UnityEngine.SocialPlatforms.TimeScope GooglePlayGames.PlayGamesLeaderboard::mTimeScope
	int32_t ___mTimeScope_3;
	// System.String[] GooglePlayGames.PlayGamesLeaderboard::mFilteredUserIds
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___mFilteredUserIds_4;
	// System.Boolean GooglePlayGames.PlayGamesLeaderboard::mLoading
	bool ___mLoading_5;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.PlayGamesLeaderboard::mLocalUserScore
	RuntimeObject* ___mLocalUserScore_6;
	// System.UInt32 GooglePlayGames.PlayGamesLeaderboard::mMaxRange
	uint32_t ___mMaxRange_7;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.PlayGamesLeaderboard::mScoreList
	List_1_tF84E5DFA81F5CE1FC0CE0E80ED769E6C1242FB9E * ___mScoreList_8;
	// System.String GooglePlayGames.PlayGamesLeaderboard::mTitle
	String_t* ___mTitle_9;

public:
	inline static int32_t get_offset_of_mId_0() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F, ___mId_0)); }
	inline String_t* get_mId_0() const { return ___mId_0; }
	inline String_t** get_address_of_mId_0() { return &___mId_0; }
	inline void set_mId_0(String_t* value)
	{
		___mId_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mId_0), (void*)value);
	}

	inline static int32_t get_offset_of_mUserScope_1() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F, ___mUserScope_1)); }
	inline int32_t get_mUserScope_1() const { return ___mUserScope_1; }
	inline int32_t* get_address_of_mUserScope_1() { return &___mUserScope_1; }
	inline void set_mUserScope_1(int32_t value)
	{
		___mUserScope_1 = value;
	}

	inline static int32_t get_offset_of_mRange_2() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F, ___mRange_2)); }
	inline Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  get_mRange_2() const { return ___mRange_2; }
	inline Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC * get_address_of_mRange_2() { return &___mRange_2; }
	inline void set_mRange_2(Range_t2332F6C6E1E19A355F5C1A93FF4434B92FBDBABC  value)
	{
		___mRange_2 = value;
	}

	inline static int32_t get_offset_of_mTimeScope_3() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F, ___mTimeScope_3)); }
	inline int32_t get_mTimeScope_3() const { return ___mTimeScope_3; }
	inline int32_t* get_address_of_mTimeScope_3() { return &___mTimeScope_3; }
	inline void set_mTimeScope_3(int32_t value)
	{
		___mTimeScope_3 = value;
	}

	inline static int32_t get_offset_of_mFilteredUserIds_4() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F, ___mFilteredUserIds_4)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_mFilteredUserIds_4() const { return ___mFilteredUserIds_4; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_mFilteredUserIds_4() { return &___mFilteredUserIds_4; }
	inline void set_mFilteredUserIds_4(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___mFilteredUserIds_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mFilteredUserIds_4), (void*)value);
	}

	inline static int32_t get_offset_of_mLoading_5() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F, ___mLoading_5)); }
	inline bool get_mLoading_5() const { return ___mLoading_5; }
	inline bool* get_address_of_mLoading_5() { return &___mLoading_5; }
	inline void set_mLoading_5(bool value)
	{
		___mLoading_5 = value;
	}

	inline static int32_t get_offset_of_mLocalUserScore_6() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F, ___mLocalUserScore_6)); }
	inline RuntimeObject* get_mLocalUserScore_6() const { return ___mLocalUserScore_6; }
	inline RuntimeObject** get_address_of_mLocalUserScore_6() { return &___mLocalUserScore_6; }
	inline void set_mLocalUserScore_6(RuntimeObject* value)
	{
		___mLocalUserScore_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mLocalUserScore_6), (void*)value);
	}

	inline static int32_t get_offset_of_mMaxRange_7() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F, ___mMaxRange_7)); }
	inline uint32_t get_mMaxRange_7() const { return ___mMaxRange_7; }
	inline uint32_t* get_address_of_mMaxRange_7() { return &___mMaxRange_7; }
	inline void set_mMaxRange_7(uint32_t value)
	{
		___mMaxRange_7 = value;
	}

	inline static int32_t get_offset_of_mScoreList_8() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F, ___mScoreList_8)); }
	inline List_1_tF84E5DFA81F5CE1FC0CE0E80ED769E6C1242FB9E * get_mScoreList_8() const { return ___mScoreList_8; }
	inline List_1_tF84E5DFA81F5CE1FC0CE0E80ED769E6C1242FB9E ** get_address_of_mScoreList_8() { return &___mScoreList_8; }
	inline void set_mScoreList_8(List_1_tF84E5DFA81F5CE1FC0CE0E80ED769E6C1242FB9E * value)
	{
		___mScoreList_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScoreList_8), (void*)value);
	}

	inline static int32_t get_offset_of_mTitle_9() { return static_cast<int32_t>(offsetof(PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F, ___mTitle_9)); }
	inline String_t* get_mTitle_9() const { return ___mTitle_9; }
	inline String_t** get_address_of_mTitle_9() { return &___mTitle_9; }
	inline void set_mTitle_9(String_t* value)
	{
		___mTitle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mTitle_9), (void*)value);
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63  : public BaseEventData_t46C9D2AE3183A742EDE89944AF64A23DBF1B80A5
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t3D4152882C54B77C712688E910390D5C8E030463 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData_InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___m_PointerPress_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_7))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t991BCED43A91EDD8580F39631DA07B1F88C58B91  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___hovered_9)); }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t3D4152882C54B77C712688E910390D5C8E030463 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t3D4152882C54B77C712688E910390D5C8E030463 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Sprite
struct  Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// GooglePlayGames.ReportProgress
struct  ReportProgress_t9005E71F3F2926AA8F3AACA34E376CD5254022BD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>
struct  Action_1_tB5B054B813AD8569E849DE94D5861CAD1D2CBFDA  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Boolean>
struct  Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.String>
struct  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct  Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct  Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct  Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Collider2D
struct  Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// ImageButton
struct  ImageButton_t99868748211E38672C8630E7BA340D9B333EA228  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean ImageButton::interactive
	bool ___interactive_4;
	// UnityEngine.Sprite ImageButton::depressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___depressedSprite_5;
	// UnityEngine.Sprite ImageButton::pressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___pressedSprite_6;
	// UnityEngine.Events.UnityEvent ImageButton::onPress
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onPress_7;
	// UnityEngine.Events.UnityEvent ImageButton::onDepress
	UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * ___onDepress_8;

public:
	inline static int32_t get_offset_of_interactive_4() { return static_cast<int32_t>(offsetof(ImageButton_t99868748211E38672C8630E7BA340D9B333EA228, ___interactive_4)); }
	inline bool get_interactive_4() const { return ___interactive_4; }
	inline bool* get_address_of_interactive_4() { return &___interactive_4; }
	inline void set_interactive_4(bool value)
	{
		___interactive_4 = value;
	}

	inline static int32_t get_offset_of_depressedSprite_5() { return static_cast<int32_t>(offsetof(ImageButton_t99868748211E38672C8630E7BA340D9B333EA228, ___depressedSprite_5)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_depressedSprite_5() const { return ___depressedSprite_5; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_depressedSprite_5() { return &___depressedSprite_5; }
	inline void set_depressedSprite_5(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___depressedSprite_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___depressedSprite_5), (void*)value);
	}

	inline static int32_t get_offset_of_pressedSprite_6() { return static_cast<int32_t>(offsetof(ImageButton_t99868748211E38672C8630E7BA340D9B333EA228, ___pressedSprite_6)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_pressedSprite_6() const { return ___pressedSprite_6; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_pressedSprite_6() { return &___pressedSprite_6; }
	inline void set_pressedSprite_6(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___pressedSprite_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pressedSprite_6), (void*)value);
	}

	inline static int32_t get_offset_of_onPress_7() { return static_cast<int32_t>(offsetof(ImageButton_t99868748211E38672C8630E7BA340D9B333EA228, ___onPress_7)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onPress_7() const { return ___onPress_7; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onPress_7() { return &___onPress_7; }
	inline void set_onPress_7(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onPress_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPress_7), (void*)value);
	}

	inline static int32_t get_offset_of_onDepress_8() { return static_cast<int32_t>(offsetof(ImageButton_t99868748211E38672C8630E7BA340D9B333EA228, ___onDepress_8)); }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * get_onDepress_8() const { return ___onDepress_8; }
	inline UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F ** get_address_of_onDepress_8() { return &___onDepress_8; }
	inline void set_onDepress_8(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * value)
	{
		___onDepress_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onDepress_8), (void*)value);
	}
};


// ObstacleFlip
struct  ObstacleFlip_t7AA8DC62C0ADD6136191C85A05986C55A16A7878  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Sprite ObstacleFlip::rhsSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___rhsSprite_4;
	// UnityEngine.Sprite ObstacleFlip::lhsSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___lhsSprite_5;

public:
	inline static int32_t get_offset_of_rhsSprite_4() { return static_cast<int32_t>(offsetof(ObstacleFlip_t7AA8DC62C0ADD6136191C85A05986C55A16A7878, ___rhsSprite_4)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_rhsSprite_4() const { return ___rhsSprite_4; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_rhsSprite_4() { return &___rhsSprite_4; }
	inline void set_rhsSprite_4(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___rhsSprite_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rhsSprite_4), (void*)value);
	}

	inline static int32_t get_offset_of_lhsSprite_5() { return static_cast<int32_t>(offsetof(ObstacleFlip_t7AA8DC62C0ADD6136191C85A05986C55A16A7878, ___lhsSprite_5)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_lhsSprite_5() const { return ___lhsSprite_5; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_lhsSprite_5() { return &___lhsSprite_5; }
	inline void set_lhsSprite_5(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___lhsSprite_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lhsSprite_5), (void*)value);
	}
};


// RepeatingObjectController
struct  RepeatingObjectController_t1828C6BAE63A1910AB583F7A2908A0EB7B5D7148  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.BoxCollider2D RepeatingObjectController::groundCollider
	BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * ___groundCollider_4;
	// System.Boolean RepeatingObjectController::causesSpawn
	bool ___causesSpawn_5;
	// System.Single RepeatingObjectController::groundHorizontalLength
	float ___groundHorizontalLength_6;

public:
	inline static int32_t get_offset_of_groundCollider_4() { return static_cast<int32_t>(offsetof(RepeatingObjectController_t1828C6BAE63A1910AB583F7A2908A0EB7B5D7148, ___groundCollider_4)); }
	inline BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * get_groundCollider_4() const { return ___groundCollider_4; }
	inline BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 ** get_address_of_groundCollider_4() { return &___groundCollider_4; }
	inline void set_groundCollider_4(BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * value)
	{
		___groundCollider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groundCollider_4), (void*)value);
	}

	inline static int32_t get_offset_of_causesSpawn_5() { return static_cast<int32_t>(offsetof(RepeatingObjectController_t1828C6BAE63A1910AB583F7A2908A0EB7B5D7148, ___causesSpawn_5)); }
	inline bool get_causesSpawn_5() const { return ___causesSpawn_5; }
	inline bool* get_address_of_causesSpawn_5() { return &___causesSpawn_5; }
	inline void set_causesSpawn_5(bool value)
	{
		___causesSpawn_5 = value;
	}

	inline static int32_t get_offset_of_groundHorizontalLength_6() { return static_cast<int32_t>(offsetof(RepeatingObjectController_t1828C6BAE63A1910AB583F7A2908A0EB7B5D7148, ___groundHorizontalLength_6)); }
	inline float get_groundHorizontalLength_6() const { return ___groundHorizontalLength_6; }
	inline float* get_address_of_groundHorizontalLength_6() { return &___groundHorizontalLength_6; }
	inline void set_groundHorizontalLength_6(float value)
	{
		___groundHorizontalLength_6 = value;
	}
};


// ScoreDetector
struct  ScoreDetector_tAD5BB67AC0160069A3D0A8FBAA2B1077E8597C2D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 ScoreDetector::pointValue
	int32_t ___pointValue_4;

public:
	inline static int32_t get_offset_of_pointValue_4() { return static_cast<int32_t>(offsetof(ScoreDetector_tAD5BB67AC0160069A3D0A8FBAA2B1077E8597C2D, ___pointValue_4)); }
	inline int32_t get_pointValue_4() const { return ___pointValue_4; }
	inline int32_t* get_address_of_pointValue_4() { return &___pointValue_4; }
	inline void set_pointValue_4(int32_t value)
	{
		___pointValue_4 = value;
	}
};


// ScrollingObjectController
struct  ScrollingObjectController_tFCF317A2D7546A0AFD816DE525D5CF9D5CC1A96C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean ScrollingObjectController::autoDestruct
	bool ___autoDestruct_4;
	// System.Single ScrollingObjectController::offset
	float ___offset_5;
	// System.Single ScrollingObjectController::speed
	float ___speed_6;
	// System.Single ScrollingObjectController::deletePoint
	float ___deletePoint_7;
	// ObstacleController_ObstacleType ScrollingObjectController::obstacleType
	int32_t ___obstacleType_8;

public:
	inline static int32_t get_offset_of_autoDestruct_4() { return static_cast<int32_t>(offsetof(ScrollingObjectController_tFCF317A2D7546A0AFD816DE525D5CF9D5CC1A96C, ___autoDestruct_4)); }
	inline bool get_autoDestruct_4() const { return ___autoDestruct_4; }
	inline bool* get_address_of_autoDestruct_4() { return &___autoDestruct_4; }
	inline void set_autoDestruct_4(bool value)
	{
		___autoDestruct_4 = value;
	}

	inline static int32_t get_offset_of_offset_5() { return static_cast<int32_t>(offsetof(ScrollingObjectController_tFCF317A2D7546A0AFD816DE525D5CF9D5CC1A96C, ___offset_5)); }
	inline float get_offset_5() const { return ___offset_5; }
	inline float* get_address_of_offset_5() { return &___offset_5; }
	inline void set_offset_5(float value)
	{
		___offset_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(ScrollingObjectController_tFCF317A2D7546A0AFD816DE525D5CF9D5CC1A96C, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_deletePoint_7() { return static_cast<int32_t>(offsetof(ScrollingObjectController_tFCF317A2D7546A0AFD816DE525D5CF9D5CC1A96C, ___deletePoint_7)); }
	inline float get_deletePoint_7() const { return ___deletePoint_7; }
	inline float* get_address_of_deletePoint_7() { return &___deletePoint_7; }
	inline void set_deletePoint_7(float value)
	{
		___deletePoint_7 = value;
	}

	inline static int32_t get_offset_of_obstacleType_8() { return static_cast<int32_t>(offsetof(ScrollingObjectController_tFCF317A2D7546A0AFD816DE525D5CF9D5CC1A96C, ___obstacleType_8)); }
	inline int32_t get_obstacleType_8() const { return ___obstacleType_8; }
	inline int32_t* get_address_of_obstacleType_8() { return &___obstacleType_8; }
	inline void set_obstacleType_8(int32_t value)
	{
		___obstacleType_8 = value;
	}
};


// Singleton`1<GameController>
struct  Singleton_1_tBE2C6914C0452E17EFB5BFC36236C7083639A9E9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct Singleton_1_tBE2C6914C0452E17EFB5BFC36236C7083639A9E9_StaticFields
{
public:
	// System.Boolean Singleton`1::m_ShuttingDown
	bool ___m_ShuttingDown_4;
	// System.Object Singleton`1::m_Lock
	RuntimeObject * ___m_Lock_5;
	// T Singleton`1::m_Instance
	GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * ___m_Instance_6;

public:
	inline static int32_t get_offset_of_m_ShuttingDown_4() { return static_cast<int32_t>(offsetof(Singleton_1_tBE2C6914C0452E17EFB5BFC36236C7083639A9E9_StaticFields, ___m_ShuttingDown_4)); }
	inline bool get_m_ShuttingDown_4() const { return ___m_ShuttingDown_4; }
	inline bool* get_address_of_m_ShuttingDown_4() { return &___m_ShuttingDown_4; }
	inline void set_m_ShuttingDown_4(bool value)
	{
		___m_ShuttingDown_4 = value;
	}

	inline static int32_t get_offset_of_m_Lock_5() { return static_cast<int32_t>(offsetof(Singleton_1_tBE2C6914C0452E17EFB5BFC36236C7083639A9E9_StaticFields, ___m_Lock_5)); }
	inline RuntimeObject * get_m_Lock_5() const { return ___m_Lock_5; }
	inline RuntimeObject ** get_address_of_m_Lock_5() { return &___m_Lock_5; }
	inline void set_m_Lock_5(RuntimeObject * value)
	{
		___m_Lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lock_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Instance_6() { return static_cast<int32_t>(offsetof(Singleton_1_tBE2C6914C0452E17EFB5BFC36236C7083639A9E9_StaticFields, ___m_Instance_6)); }
	inline GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * get_m_Instance_6() const { return ___m_Instance_6; }
	inline GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 ** get_address_of_m_Instance_6() { return &___m_Instance_6; }
	inline void set_m_Instance_6(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * value)
	{
		___m_Instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_6), (void*)value);
	}
};


// Singleton`1<ObstacleController>
struct  Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C_StaticFields
{
public:
	// System.Boolean Singleton`1::m_ShuttingDown
	bool ___m_ShuttingDown_4;
	// System.Object Singleton`1::m_Lock
	RuntimeObject * ___m_Lock_5;
	// T Singleton`1::m_Instance
	ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * ___m_Instance_6;

public:
	inline static int32_t get_offset_of_m_ShuttingDown_4() { return static_cast<int32_t>(offsetof(Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C_StaticFields, ___m_ShuttingDown_4)); }
	inline bool get_m_ShuttingDown_4() const { return ___m_ShuttingDown_4; }
	inline bool* get_address_of_m_ShuttingDown_4() { return &___m_ShuttingDown_4; }
	inline void set_m_ShuttingDown_4(bool value)
	{
		___m_ShuttingDown_4 = value;
	}

	inline static int32_t get_offset_of_m_Lock_5() { return static_cast<int32_t>(offsetof(Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C_StaticFields, ___m_Lock_5)); }
	inline RuntimeObject * get_m_Lock_5() const { return ___m_Lock_5; }
	inline RuntimeObject ** get_address_of_m_Lock_5() { return &___m_Lock_5; }
	inline void set_m_Lock_5(RuntimeObject * value)
	{
		___m_Lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lock_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Instance_6() { return static_cast<int32_t>(offsetof(Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C_StaticFields, ___m_Instance_6)); }
	inline ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * get_m_Instance_6() const { return ___m_Instance_6; }
	inline ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 ** get_address_of_m_Instance_6() { return &___m_Instance_6; }
	inline void set_m_Instance_6(ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * value)
	{
		___m_Instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_6), (void*)value);
	}
};


// Singleton`1<PlayerController>
struct  Singleton_1_tEA12A543EBA23A76CB1BF6954851783525A5AF77  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct Singleton_1_tEA12A543EBA23A76CB1BF6954851783525A5AF77_StaticFields
{
public:
	// System.Boolean Singleton`1::m_ShuttingDown
	bool ___m_ShuttingDown_4;
	// System.Object Singleton`1::m_Lock
	RuntimeObject * ___m_Lock_5;
	// T Singleton`1::m_Instance
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * ___m_Instance_6;

public:
	inline static int32_t get_offset_of_m_ShuttingDown_4() { return static_cast<int32_t>(offsetof(Singleton_1_tEA12A543EBA23A76CB1BF6954851783525A5AF77_StaticFields, ___m_ShuttingDown_4)); }
	inline bool get_m_ShuttingDown_4() const { return ___m_ShuttingDown_4; }
	inline bool* get_address_of_m_ShuttingDown_4() { return &___m_ShuttingDown_4; }
	inline void set_m_ShuttingDown_4(bool value)
	{
		___m_ShuttingDown_4 = value;
	}

	inline static int32_t get_offset_of_m_Lock_5() { return static_cast<int32_t>(offsetof(Singleton_1_tEA12A543EBA23A76CB1BF6954851783525A5AF77_StaticFields, ___m_Lock_5)); }
	inline RuntimeObject * get_m_Lock_5() const { return ___m_Lock_5; }
	inline RuntimeObject ** get_address_of_m_Lock_5() { return &___m_Lock_5; }
	inline void set_m_Lock_5(RuntimeObject * value)
	{
		___m_Lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Lock_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Instance_6() { return static_cast<int32_t>(offsetof(Singleton_1_tEA12A543EBA23A76CB1BF6954851783525A5AF77_StaticFields, ___m_Instance_6)); }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * get_m_Instance_6() const { return ___m_Instance_6; }
	inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 ** get_address_of_m_Instance_6() { return &___m_Instance_6; }
	inline void set_m_Instance_6(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * value)
	{
		___m_Instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_6), (void*)value);
	}
};


// UnityEngine.BoxCollider2D
struct  BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87  : public Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// GameController
struct  GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3  : public Singleton_1_tBE2C6914C0452E17EFB5BFC36236C7083639A9E9
{
public:
	// System.Boolean GameController::gameRunning
	bool ___gameRunning_7;
	// UnityEngine.UI.Button GameController::playResumeButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___playResumeButton_8;
	// UnityEngine.UI.Button GameController::quitButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___quitButton_9;
	// UnityEngine.CanvasGroup GameController::pauseCanvasGroup
	CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * ___pauseCanvasGroup_10;
	// UnityEngine.UI.Text GameController::scoreText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___scoreText_11;
	// System.Int32 GameController::score
	int32_t ___score_12;

public:
	inline static int32_t get_offset_of_gameRunning_7() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___gameRunning_7)); }
	inline bool get_gameRunning_7() const { return ___gameRunning_7; }
	inline bool* get_address_of_gameRunning_7() { return &___gameRunning_7; }
	inline void set_gameRunning_7(bool value)
	{
		___gameRunning_7 = value;
	}

	inline static int32_t get_offset_of_playResumeButton_8() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___playResumeButton_8)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_playResumeButton_8() const { return ___playResumeButton_8; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_playResumeButton_8() { return &___playResumeButton_8; }
	inline void set_playResumeButton_8(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___playResumeButton_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playResumeButton_8), (void*)value);
	}

	inline static int32_t get_offset_of_quitButton_9() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___quitButton_9)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_quitButton_9() const { return ___quitButton_9; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_quitButton_9() { return &___quitButton_9; }
	inline void set_quitButton_9(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___quitButton_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quitButton_9), (void*)value);
	}

	inline static int32_t get_offset_of_pauseCanvasGroup_10() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___pauseCanvasGroup_10)); }
	inline CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * get_pauseCanvasGroup_10() const { return ___pauseCanvasGroup_10; }
	inline CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 ** get_address_of_pauseCanvasGroup_10() { return &___pauseCanvasGroup_10; }
	inline void set_pauseCanvasGroup_10(CanvasGroup_tE2C664C60990D1DCCEE0CC6545CC3E80369C7F90 * value)
	{
		___pauseCanvasGroup_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseCanvasGroup_10), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_11() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___scoreText_11)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_scoreText_11() const { return ___scoreText_11; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_scoreText_11() { return &___scoreText_11; }
	inline void set_scoreText_11(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___scoreText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_11), (void*)value);
	}

	inline static int32_t get_offset_of_score_12() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___score_12)); }
	inline int32_t get_score_12() const { return ___score_12; }
	inline int32_t* get_address_of_score_12() { return &___score_12; }
	inline void set_score_12(int32_t value)
	{
		___score_12 = value;
	}
};


// ObstacleController
struct  ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374  : public Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C
{
public:
	// System.Single ObstacleController::lowHeight
	float ___lowHeight_7;
	// System.Single ObstacleController::midHeight
	float ___midHeight_8;
	// System.Single ObstacleController::highHeight
	float ___highHeight_9;
	// UnityEngine.GameObject[] ObstacleController::lowObstacles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___lowObstacles_10;
	// UnityEngine.GameObject[] ObstacleController::midObstacles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___midObstacles_11;
	// UnityEngine.GameObject[] ObstacleController::highObstacles
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ___highObstacles_12;
	// System.Boolean ObstacleController::canSpawn
	bool ___canSpawn_13;
	// System.Single ObstacleController::xOffset
	float ___xOffset_14;
	// System.Int32 ObstacleController::lowCount
	int32_t ___lowCount_15;
	// System.Int32 ObstacleController::midCount
	int32_t ___midCount_16;
	// System.Int32 ObstacleController::highCount
	int32_t ___highCount_17;

public:
	inline static int32_t get_offset_of_lowHeight_7() { return static_cast<int32_t>(offsetof(ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374, ___lowHeight_7)); }
	inline float get_lowHeight_7() const { return ___lowHeight_7; }
	inline float* get_address_of_lowHeight_7() { return &___lowHeight_7; }
	inline void set_lowHeight_7(float value)
	{
		___lowHeight_7 = value;
	}

	inline static int32_t get_offset_of_midHeight_8() { return static_cast<int32_t>(offsetof(ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374, ___midHeight_8)); }
	inline float get_midHeight_8() const { return ___midHeight_8; }
	inline float* get_address_of_midHeight_8() { return &___midHeight_8; }
	inline void set_midHeight_8(float value)
	{
		___midHeight_8 = value;
	}

	inline static int32_t get_offset_of_highHeight_9() { return static_cast<int32_t>(offsetof(ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374, ___highHeight_9)); }
	inline float get_highHeight_9() const { return ___highHeight_9; }
	inline float* get_address_of_highHeight_9() { return &___highHeight_9; }
	inline void set_highHeight_9(float value)
	{
		___highHeight_9 = value;
	}

	inline static int32_t get_offset_of_lowObstacles_10() { return static_cast<int32_t>(offsetof(ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374, ___lowObstacles_10)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_lowObstacles_10() const { return ___lowObstacles_10; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_lowObstacles_10() { return &___lowObstacles_10; }
	inline void set_lowObstacles_10(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___lowObstacles_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lowObstacles_10), (void*)value);
	}

	inline static int32_t get_offset_of_midObstacles_11() { return static_cast<int32_t>(offsetof(ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374, ___midObstacles_11)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_midObstacles_11() const { return ___midObstacles_11; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_midObstacles_11() { return &___midObstacles_11; }
	inline void set_midObstacles_11(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___midObstacles_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___midObstacles_11), (void*)value);
	}

	inline static int32_t get_offset_of_highObstacles_12() { return static_cast<int32_t>(offsetof(ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374, ___highObstacles_12)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get_highObstacles_12() const { return ___highObstacles_12; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of_highObstacles_12() { return &___highObstacles_12; }
	inline void set_highObstacles_12(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		___highObstacles_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highObstacles_12), (void*)value);
	}

	inline static int32_t get_offset_of_canSpawn_13() { return static_cast<int32_t>(offsetof(ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374, ___canSpawn_13)); }
	inline bool get_canSpawn_13() const { return ___canSpawn_13; }
	inline bool* get_address_of_canSpawn_13() { return &___canSpawn_13; }
	inline void set_canSpawn_13(bool value)
	{
		___canSpawn_13 = value;
	}

	inline static int32_t get_offset_of_xOffset_14() { return static_cast<int32_t>(offsetof(ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374, ___xOffset_14)); }
	inline float get_xOffset_14() const { return ___xOffset_14; }
	inline float* get_address_of_xOffset_14() { return &___xOffset_14; }
	inline void set_xOffset_14(float value)
	{
		___xOffset_14 = value;
	}

	inline static int32_t get_offset_of_lowCount_15() { return static_cast<int32_t>(offsetof(ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374, ___lowCount_15)); }
	inline int32_t get_lowCount_15() const { return ___lowCount_15; }
	inline int32_t* get_address_of_lowCount_15() { return &___lowCount_15; }
	inline void set_lowCount_15(int32_t value)
	{
		___lowCount_15 = value;
	}

	inline static int32_t get_offset_of_midCount_16() { return static_cast<int32_t>(offsetof(ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374, ___midCount_16)); }
	inline int32_t get_midCount_16() const { return ___midCount_16; }
	inline int32_t* get_address_of_midCount_16() { return &___midCount_16; }
	inline void set_midCount_16(int32_t value)
	{
		___midCount_16 = value;
	}

	inline static int32_t get_offset_of_highCount_17() { return static_cast<int32_t>(offsetof(ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374, ___highCount_17)); }
	inline int32_t get_highCount_17() const { return ___highCount_17; }
	inline int32_t* get_address_of_highCount_17() { return &___highCount_17; }
	inline void set_highCount_17(int32_t value)
	{
		___highCount_17 = value;
	}
};


// PlayerController
struct  PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85  : public Singleton_1_tEA12A543EBA23A76CB1BF6954851783525A5AF77
{
public:
	// System.Boolean PlayerController::clearing
	bool ___clearing_7;
	// System.Boolean PlayerController::canJump
	bool ___canJump_8;
	// UnityEngine.Coroutine PlayerController::jumpClearRoutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___jumpClearRoutine_9;
	// UnityEngine.Rigidbody2D PlayerController::rb2d
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb2d_10;
	// System.Boolean PlayerController::poweringJump
	bool ___poweringJump_11;
	// UnityEngine.UI.Image PlayerController::powerbarImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___powerbarImage_12;
	// ImageButton PlayerController::jumpButton
	ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * ___jumpButton_13;

public:
	inline static int32_t get_offset_of_clearing_7() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___clearing_7)); }
	inline bool get_clearing_7() const { return ___clearing_7; }
	inline bool* get_address_of_clearing_7() { return &___clearing_7; }
	inline void set_clearing_7(bool value)
	{
		___clearing_7 = value;
	}

	inline static int32_t get_offset_of_canJump_8() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___canJump_8)); }
	inline bool get_canJump_8() const { return ___canJump_8; }
	inline bool* get_address_of_canJump_8() { return &___canJump_8; }
	inline void set_canJump_8(bool value)
	{
		___canJump_8 = value;
	}

	inline static int32_t get_offset_of_jumpClearRoutine_9() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___jumpClearRoutine_9)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_jumpClearRoutine_9() const { return ___jumpClearRoutine_9; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_jumpClearRoutine_9() { return &___jumpClearRoutine_9; }
	inline void set_jumpClearRoutine_9(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___jumpClearRoutine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jumpClearRoutine_9), (void*)value);
	}

	inline static int32_t get_offset_of_rb2d_10() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___rb2d_10)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb2d_10() const { return ___rb2d_10; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb2d_10() { return &___rb2d_10; }
	inline void set_rb2d_10(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb2d_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb2d_10), (void*)value);
	}

	inline static int32_t get_offset_of_poweringJump_11() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___poweringJump_11)); }
	inline bool get_poweringJump_11() const { return ___poweringJump_11; }
	inline bool* get_address_of_poweringJump_11() { return &___poweringJump_11; }
	inline void set_poweringJump_11(bool value)
	{
		___poweringJump_11 = value;
	}

	inline static int32_t get_offset_of_powerbarImage_12() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___powerbarImage_12)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_powerbarImage_12() const { return ___powerbarImage_12; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_powerbarImage_12() { return &___powerbarImage_12; }
	inline void set_powerbarImage_12(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___powerbarImage_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___powerbarImage_12), (void*)value);
	}

	inline static int32_t get_offset_of_jumpButton_13() { return static_cast<int32_t>(offsetof(PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85, ___jumpButton_13)); }
	inline ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * get_jumpButton_13() const { return ___jumpButton_13; }
	inline ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 ** get_address_of_jumpButton_13() { return &___jumpButton_13; }
	inline void set_jumpButton_13(ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * value)
	{
		___jumpButton_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jumpButton_13), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_Sprite_35;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_OverrideSprite_36;
	// UnityEngine.UI.Image_Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_37;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_38;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_39;
	// UnityEngine.UI.Image_FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_40;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_41;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_42;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_43;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_44;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_45;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_46;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_47;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_48;

public:
	inline static int32_t get_offset_of_m_Sprite_35() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Sprite_35)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_Sprite_35() const { return ___m_Sprite_35; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_Sprite_35() { return &___m_Sprite_35; }
	inline void set_m_Sprite_35(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_Sprite_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_36() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_OverrideSprite_36)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_OverrideSprite_36() const { return ___m_OverrideSprite_36; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_OverrideSprite_36() { return &___m_OverrideSprite_36; }
	inline void set_m_OverrideSprite_36(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_OverrideSprite_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_37() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Type_37)); }
	inline int32_t get_m_Type_37() const { return ___m_Type_37; }
	inline int32_t* get_address_of_m_Type_37() { return &___m_Type_37; }
	inline void set_m_Type_37(int32_t value)
	{
		___m_Type_37 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_38() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PreserveAspect_38)); }
	inline bool get_m_PreserveAspect_38() const { return ___m_PreserveAspect_38; }
	inline bool* get_address_of_m_PreserveAspect_38() { return &___m_PreserveAspect_38; }
	inline void set_m_PreserveAspect_38(bool value)
	{
		___m_PreserveAspect_38 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_39() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillCenter_39)); }
	inline bool get_m_FillCenter_39() const { return ___m_FillCenter_39; }
	inline bool* get_address_of_m_FillCenter_39() { return &___m_FillCenter_39; }
	inline void set_m_FillCenter_39(bool value)
	{
		___m_FillCenter_39 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_40() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillMethod_40)); }
	inline int32_t get_m_FillMethod_40() const { return ___m_FillMethod_40; }
	inline int32_t* get_address_of_m_FillMethod_40() { return &___m_FillMethod_40; }
	inline void set_m_FillMethod_40(int32_t value)
	{
		___m_FillMethod_40 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_41() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillAmount_41)); }
	inline float get_m_FillAmount_41() const { return ___m_FillAmount_41; }
	inline float* get_address_of_m_FillAmount_41() { return &___m_FillAmount_41; }
	inline void set_m_FillAmount_41(float value)
	{
		___m_FillAmount_41 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_42() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillClockwise_42)); }
	inline bool get_m_FillClockwise_42() const { return ___m_FillClockwise_42; }
	inline bool* get_address_of_m_FillClockwise_42() { return &___m_FillClockwise_42; }
	inline void set_m_FillClockwise_42(bool value)
	{
		___m_FillClockwise_42 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_43() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_FillOrigin_43)); }
	inline int32_t get_m_FillOrigin_43() const { return ___m_FillOrigin_43; }
	inline int32_t* get_address_of_m_FillOrigin_43() { return &___m_FillOrigin_43; }
	inline void set_m_FillOrigin_43(int32_t value)
	{
		___m_FillOrigin_43 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_44() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_AlphaHitTestMinimumThreshold_44)); }
	inline float get_m_AlphaHitTestMinimumThreshold_44() const { return ___m_AlphaHitTestMinimumThreshold_44; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_44() { return &___m_AlphaHitTestMinimumThreshold_44; }
	inline void set_m_AlphaHitTestMinimumThreshold_44(float value)
	{
		___m_AlphaHitTestMinimumThreshold_44 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_45() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_Tracked_45)); }
	inline bool get_m_Tracked_45() const { return ___m_Tracked_45; }
	inline bool* get_address_of_m_Tracked_45() { return &___m_Tracked_45; }
	inline void set_m_Tracked_45(bool value)
	{
		___m_Tracked_45 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_46() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_UseSpriteMesh_46)); }
	inline bool get_m_UseSpriteMesh_46() const { return ___m_UseSpriteMesh_46; }
	inline bool* get_address_of_m_UseSpriteMesh_46() { return &___m_UseSpriteMesh_46; }
	inline void set_m_UseSpriteMesh_46(bool value)
	{
		___m_UseSpriteMesh_46 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_47() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_PixelsPerUnitMultiplier_47)); }
	inline float get_m_PixelsPerUnitMultiplier_47() const { return ___m_PixelsPerUnitMultiplier_47; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_47() { return &___m_PixelsPerUnitMultiplier_47; }
	inline void set_m_PixelsPerUnitMultiplier_47(float value)
	{
		___m_PixelsPerUnitMultiplier_47 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_48() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E, ___m_CachedReferencePixelsPerUnit_48)); }
	inline float get_m_CachedReferencePixelsPerUnit_48() const { return ___m_CachedReferencePixelsPerUnit_48; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_48() { return &___m_CachedReferencePixelsPerUnit_48; }
	inline void set_m_CachedReferencePixelsPerUnit_48(float value)
	{
		___m_CachedReferencePixelsPerUnit_48 = value;
	}
};

struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_ETC1DefaultUI_34;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_VertScratch_49;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___s_UVScratch_50;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Xy_51;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___s_Uv_52;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * ___m_TrackedTexturelessImages_53;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_54;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_34() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_ETC1DefaultUI_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_ETC1DefaultUI_34() const { return ___s_ETC1DefaultUI_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_ETC1DefaultUI_34() { return &___s_ETC1DefaultUI_34; }
	inline void set_s_ETC1DefaultUI_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_ETC1DefaultUI_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_49() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_VertScratch_49)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_VertScratch_49() const { return ___s_VertScratch_49; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_VertScratch_49() { return &___s_VertScratch_49; }
	inline void set_s_VertScratch_49(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_VertScratch_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_49), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_50() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_UVScratch_50)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_s_UVScratch_50() const { return ___s_UVScratch_50; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_s_UVScratch_50() { return &___s_UVScratch_50; }
	inline void set_s_UVScratch_50(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___s_UVScratch_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_50), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_51() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Xy_51)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Xy_51() const { return ___s_Xy_51; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Xy_51() { return &___s_Xy_51; }
	inline void set_s_Xy_51(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Xy_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_52() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Uv_52)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_s_Uv_52() const { return ___s_Uv_52; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_s_Uv_52() { return &___s_Uv_52; }
	inline void set_s_Uv_52(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___s_Uv_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_52), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_53() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___m_TrackedTexturelessImages_53)); }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * get_m_TrackedTexturelessImages_53() const { return ___m_TrackedTexturelessImages_53; }
	inline List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA ** get_address_of_m_TrackedTexturelessImages_53() { return &___m_TrackedTexturelessImages_53; }
	inline void set_m_TrackedTexturelessImages_53(List_1_tB46CB6C7789F514A8BE08EB5A4F3D9D26AE5E4DA * value)
	{
		___m_TrackedTexturelessImages_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_54() { return static_cast<int32_t>(offsetof(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E_StaticFields, ___s_Initialized_54)); }
	inline bool get_s_Initialized_54() const { return ___s_Initialized_54; }
	inline bool* get_address_of_s_Initialized_54() { return &___s_Initialized_54; }
	inline void set_s_Initialized_54(bool value)
	{
		___s_Initialized_54 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * m_Items[1];

public:
	inline Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * m_Items[1];

public:
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// System.Void Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m629428708A0E543187CADC9B0B21F7363B0DDFEF_gshared (Singleton_1_tED9082D93E67F632D3487C3E0A91F16140913550 * __this, const RuntimeMethod* method);
// T Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Singleton_1_get_Instance_m89AB9D58D2FF17D3D301244164593C989CE1DE93_gshared (const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient>::Invoke(!0)
inline void Action_1_Invoke_mE3A21ED777AB89C3D7028E12C9FFC737AD5214EA (Action_1_tB5B054B813AD8569E849DE94D5861CAD1D2CBFDA * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB5B054B813AD8569E849DE94D5861CAD1D2CBFDA *, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, bool, const RuntimeMethod*))Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, String_t*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_e_mB9E2D5031D7C7D375E366C6D42AC1D71292CE6D8 (String_t* ___msg0, const RuntimeMethod* method);
// System.String GooglePlayGames.BasicApi.Achievement::get_Id()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Achievement_get_Id_m06A23EAD32C162BC0C8488F6FEB9BCD77FBF8804_inline (Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsIncremental()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Achievement_get_IsIncremental_m028E31801A7D4C30F2C46690B3AA54B52ADB2DB0_inline (Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_m95C0BD29B60442754276E97D1FB7ED05E4AC31CE (String_t* ___msg0, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_w_mC5E0B8747075DB3753444575C6297436A1BDCCBB (String_t* ___msg0, const RuntimeMethod* method);
// System.Int32 GooglePlayGames.BasicApi.Achievement::get_TotalSteps()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Achievement_get_TotalSteps_m18E7561B2CE4F8214FA9A1CE5249E671FC0ECC7E_inline (Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesAchievement::.ctor(GooglePlayGames.BasicApi.Achievement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesAchievement__ctor_mC7E3FD1BAD1AC9C6D387086457B6C5AFF994E66E (PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244 * __this, Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * ___ach0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(!0)
inline void Action_1_Invoke_m6D94201F6F60C71FD959534E58DC5F2E0534C16D (Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * __this, IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 *, IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(!0)
inline void Action_1_Invoke_mFE16CD4BDEDFE680B174E7380FA78E7EB5200780 (Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 * __this, IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 *, IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// UnityEngine.SocialPlatforms.IScore[] GooglePlayGames.BasicApi.LeaderboardScoreData::get_Scores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* LeaderboardScoreData_get_Scores_m26448831511DB1ECEC76B84C70D7FC12B1EC13B7 (LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(!0)
inline void Action_1_Invoke_m5C7A22095E708452C272C2BBC5CE4F6E72236861 (Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C * __this, IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C *, IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.PlayGamesPlatform::HandleLoadingScores(GooglePlayGames.PlayGamesLeaderboard,GooglePlayGames.BasicApi.LeaderboardScoreData,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_HandleLoadingScores_mB4164894F292150B23693F650EFC28CA982A1CA0 (PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * __this, PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F * ___board0, LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED * ___scoreData1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m627486A7CFC2016C8A1646442155BE45A8062667 (DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, const RuntimeMethod* method);
// System.String GooglePlayGames.PlayGamesScore::get_leaderboardID()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_leaderboardID_m6B5C53D237D30A5D52265BD384FF8B3EAB18915B_inline (PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD * __this, const RuntimeMethod* method);
// GooglePlayGames.PlayGamesPlatform GooglePlayGames.PlayGamesPlatform::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * PlayGamesPlatform_get_Instance_m429B8A3F0FD9AD738103A7AD27ADA19C363014AB (const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesPlatform::ReportScore(System.Int64,System.String,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesPlatform_ReportScore_m3557FAFAAFB4076CEC634CE45A7440DBBACAA070 (PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * __this, int64_t ___score0, String_t* ___board1, String_t* ___metadata2, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback3, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8210E39355A227AE15DD391EB810AA9B6AB8B26C (int64_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.String GooglePlayGames.PlayGamesUserProfile::get_AvatarURL()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_AvatarURL_mAB1A07F78BC9B6D64D039603F4FDC8E471E8157D_inline (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator GooglePlayGames.PlayGamesUserProfile::LoadImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesUserProfile_LoadImage_m35F861C72C561C981A97ACF7502570213E6BADFD (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, const RuntimeMethod* method);
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunCoroutine_mCDC6CBF287B6D8EBE869A970C5770808A95DC194 (RuntimeObject* ___action0, const RuntimeMethod* method);
// System.Void GooglePlayGames.PlayGamesUserProfile/<LoadImage>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__19__ctor_m144CDC51BE74E36F3A079E9501DAF19634E4045A (U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.StringComparer System.StringComparer::get_Ordinal()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * StringComparer_get_Ordinal_m1F38FBAB170DF80D33FE2A849D30FF2E314D9FDB_inline (const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestTexture::GetTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequestTexture_GetTexture_m45626D1CEA83B5DC281934CC74D383389CD781B9 (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_mB3CC99A8DC3DB1DD44B23008688EB2DF20906FDA (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * DownloadHandlerTexture_GetContent_mF7BCA86CF9F9871A512256173025D3C895EDF744 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___www0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Texture2D::get_blackTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Texture2D_get_blackTexture_mCF4F978DF9B6066794E7130E0C14618216ED0956 (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m77F8D681D4EE6D58F4F235AFF704C3EB165A9646 (Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43 (UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5 * __this, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * Image_get_sprite_m642D753672A8CBCEB67950914B44EF34C62DD137_inline (Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator ObstacleController::SpawnProtection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObstacleController_SpawnProtection_mE059161ECBC4645CF4DA10E1FFDC2094E9359C41 (ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_mC998749E08291DD42CF31C026FAC4F14F746831C (const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void ObstacleController/<SpawnProtection>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnProtectionU3Ed__14__ctor_m71C4757012588252673C2C33B907297676EA7FEA (U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Singleton`1<ObstacleController>::.ctor()
inline void Singleton_1__ctor_m5604B8EA633CE177B97BE705AE69E9CEC33C0CB0 (Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C *, const RuntimeMethod*))Singleton_1__ctor_m629428708A0E543187CADC9B0B21F7363B0DDFEF_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384 (float ___min0, float ___max1, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void ObstacleController::ChanceBasedSpawn(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleController_ChanceBasedSpawn_mE5C3BDDD9D69156167DC73EF93A0B43AB85D0224 (ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___spawnPoint0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * SpriteRenderer_get_sprite_m08636289E3194AF5DF47954C8F01FE7F50E85900 (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// T Singleton`1<PlayerController>::get_Instance()
inline PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * Singleton_1_get_Instance_m90A79C19E9B4B829F681CE86F9C4C972BA05E191 (const RuntimeMethod* method)
{
	return ((  PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_m89AB9D58D2FF17D3D301244164593C989CE1DE93_gshared)(method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611 (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_mF9A738B8149D48B7B1319EBFA5787BAE38DD8DD6 (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Singleton`1<PlayerController>::.ctor()
inline void Singleton_1__ctor_m4B932677A7C359EDFFC4D1647AA5AFBB267E3421 (Singleton_1_tEA12A543EBA23A76CB1BF6954851783525A5AF77 * __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_tEA12A543EBA23A76CB1BF6954851783525A5AF77 *, const RuntimeMethod*))Singleton_1__ctor_m629428708A0E543187CADC9B0B21F7363B0DDFEF_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_constraints(UnityEngine.RigidbodyConstraints2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_constraints_m4F2ED0B8159AF713801762DCA706A4DFBA27F158 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m613B7AC920F2EA886AF0D931005C6CD13F89A160 (Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Physics2D::IgnoreLayerCollision(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics2D_IgnoreLayerCollision_m6F9410A4C90DFF37FF10FBD5E2A8D623F1020820 (int32_t ___layer10, int32_t ___layer21, bool ___ignore2, const RuntimeMethod* method);
// T Singleton`1<GameController>::get_Instance()
inline GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * Singleton_1_get_Instance_m5A838E74F27646695C921997228C24A7D6DB6D09 (const RuntimeMethod* method)
{
	return ((  GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_m89AB9D58D2FF17D3D301244164593C989CE1DE93_gshared)(method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Int32 UnityEngine.Collider2D::GetContacts(UnityEngine.Collider2D[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Collider2D_GetContacts_m3AFD13FC94272B1B309E4C4CE545E70D2F00C921 (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * __this, Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* ___colliders0, const RuntimeMethod* method);
// System.Void ImageButton::set_Interactive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageButton_set_Interactive_m2EF1F97F989694762F2FE513DE2F02B811966A3E (ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Image_get_fillAmount_m5FF6EE8DB33C4A219B3677FB24F50A6E5CCF44F0_inline (Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerController::ClearJumpPowerBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_ClearJumpPowerBar_mC3BE30E707421A60C4A88B5ECE2638A3DC0D72D0 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Single UnityEngine.Animator::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_speed_mCDF58C7C373B9B449A902B9F0974CF5D10806D08 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813 (Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * __this, float ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator PlayerController::IncreaseJumpForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_IncreaseJumpForce_m8A72D2B104A503CD4D855DF9B7A39B099561BF9C (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method);
// System.Void PlayerController/<IncreaseJumpForce>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncreaseJumpForceU3Ed__12__ctor_m05C05F617F7E7B3938699502E2F6A84B204D3D79 (U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void PlayerController/<ClearJumpPowerBar>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearJumpPowerBarU3Ed__13__ctor_m961AC959B8647CF2B545412701E0026CE8C5C27A (U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F (Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single ExtensionMethods::Map(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ExtensionMethods_Map_m6A09FE9569365F0B109871462162A839EBEAFC4B (float ___value0, float ___from11, float ___to12, float ___from23, float ___to24, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m09E1A2E24DABA5BBC613E35772AE2C1C35C6E40C (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void RepeatingObjectController::RepositionBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatingObjectController_RepositionBackground_mF172E93A6B797F4D0E6AE3969F0A4CC4B18F86E2 (RepeatingObjectController_t1828C6BAE63A1910AB583F7A2908A0EB7B5D7148 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// T Singleton`1<ObstacleController>::get_Instance()
inline ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA (const RuntimeMethod* method)
{
	return ((  ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * (*) (const RuntimeMethod*))Singleton_1_get_Instance_m89AB9D58D2FF17D3D301244164593C989CE1DE93_gshared)(method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void GameController::UpdateScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_UpdateScore_m1ACB3479EB5EDB5E57A3EF56DF692BE836FB5F59 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  Collider2D_get_bounds_mB13BA419529917B7F97F5EFC599D8D92B0603359 (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9 (Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, float ___t2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_mEC6ABBD42156C2BF490D01EB20C2DCD0E3CBA25F (U3CU3Ec__DisplayClass30_0_t63D6B41AFB9887EECDF02A2C93C337C87E445B63 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass30_0::<InitializeNearby>b__0(GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0_U3CInitializeNearbyU3Eb__0_m0867C19359B6F9B8427595E91B8BBDC4D87856D4 (U3CU3Ec__DisplayClass30_0_t63D6B41AFB9887EECDF02A2C93C337C87E445B63 * __this, RuntimeObject* ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass30_0_U3CInitializeNearbyU3Eb__0_m0867C19359B6F9B8427595E91B8BBDC4D87856D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral39A1D38061AA77B4A79B46886DFD569D9C2D1281, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___client0;
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A_il2cpp_TypeInfo_var);
		il2cpp_codegen_memory_barrier();
		((PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A_il2cpp_TypeInfo_var))->set_sNearbyConnectionClient_2(L_0);
		Action_1_tB5B054B813AD8569E849DE94D5861CAD1D2CBFDA * L_1 = __this->get_callback_0();
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		Action_1_tB5B054B813AD8569E849DE94D5861CAD1D2CBFDA * L_2 = __this->get_callback_0();
		RuntimeObject* L_3 = ___client0;
		NullCheck(L_2);
		Action_1_Invoke_mE3A21ED777AB89C3D7028E12C9FFC737AD5214EA(L_2, L_3, /*hidden argument*/Action_1_Invoke_mE3A21ED777AB89C3D7028E12C9FFC737AD5214EA_RuntimeMethod_var);
		return;
	}

IL_0027:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralC5024F3031E029718EA095EE1A8D30D214C2E012, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass37_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0__ctor_m51D4AD2A5960C00AC362E5D669C33E99D59EEB8C (U3CU3Ec__DisplayClass37_0_t4402CB4921709DCECAFEE5A246DAF26FAA5FF9D0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass37_0::<Authenticate>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass37_0_U3CAuthenticateU3Eb__0_mF439199396515BF928A465425D2A3D10A69418D9 (U3CU3Ec__DisplayClass37_0_t4402CB4921709DCECAFEE5A246DAF26FAA5FF9D0 * __this, bool ___success0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass37_0_U3CAuthenticateU3Eb__0_mF439199396515BF928A465425D2A3D10A69418D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_0 = __this->get_callback_0();
		bool L_1 = ___success0;
		NullCheck(L_0);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_0, L_1, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_m9BA69A5B2D17EB5CCBF29F21DF64D222E8302703 (U3CU3Ec__DisplayClass47_0_t62C4C9E596B45600D31041CD589AF94AF22AD284 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass47_0::<GetAnotherServerAuthCode>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0_U3CGetAnotherServerAuthCodeU3Eb__0_m741293D5EDCCD16EF2ED0928989FC769098F332D (U3CU3Ec__DisplayClass47_0_t62C4C9E596B45600D31041CD589AF94AF22AD284 * __this, bool ___success0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass47_0_U3CGetAnotherServerAuthCodeU3Eb__0_m741293D5EDCCD16EF2ED0928989FC769098F332D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___success0;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = __this->get_callback_0();
		PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * L_2 = __this->get_U3CU3E4__this_1();
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->get_mClient_5();
		NullCheck(L_3);
		String_t* L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String GooglePlayGames.BasicApi.IPlayGamesClient::GetServerAuthCode() */, IPlayGamesClient_tB929CAE947C17CC89A2E2AB9ADC60C827B6825A8_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_1);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_1, L_4, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		return;
	}

IL_001f:
	{
		String_t* L_5 = ___msg1;
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral16823976FDE6BD558ACAA28E731C6AABDADFAA8F, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3E750EF4B5D1A8799801389FCD60CD6336A82C1B_il2cpp_TypeInfo_var);
		Logger_e_mB9E2D5031D7C7D375E366C6D42AC1D71292CE6D8(L_6, /*hidden argument*/NULL);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_7 = __this->get_callback_0();
		NullCheck(L_7);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_7, (String_t*)NULL, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass52_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_mC4EDAABCA3BDCD80807BDC22D0711C29C12917FF (U3CU3Ec__DisplayClass52_0_t7CF81519D12B515BBF0301F331BDCDF15FC8342F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass52_0::<ReportProgress>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0_U3CReportProgressU3Eb__0_m176103EF3D863BE83AB2E49AFB819122833ECD56 (U3CU3Ec__DisplayClass52_0_t7CF81519D12B515BBF0301F331BDCDF15FC8342F * __this, AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass52_0_U3CReportProgressU3Eb__0_m176103EF3D863BE83AB2E49AFB819122833ECD56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12* L_0 = ___ach0;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3E750EF4B5D1A8799801389FCD60CD6336A82C1B_il2cpp_TypeInfo_var);
		Logger_e_mB9E2D5031D7C7D375E366C6D42AC1D71292CE6D8(_stringLiteral0B0837EB2E6C27BCBDCF831341740CD09AB5362A, /*hidden argument*/NULL);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_1 = __this->get_callback_0();
		NullCheck(L_1);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_1, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
		return;
	}

IL_001a:
	{
		V_0 = 0;
		goto IL_0162;
	}

IL_0021:
	{
		AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12* L_2 = ___ach0;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6 = Achievement_get_Id_m06A23EAD32C162BC0C8488F6FEB9BCD77FBF8804_inline(L_5, /*hidden argument*/NULL);
		String_t* L_7 = __this->get_achievementID_1();
		bool L_8 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_015e;
		}
	}
	{
		AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12* L_9 = ___ach0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		bool L_13 = Achievement_get_IsIncremental_m028E31801A7D4C30F2C46690B3AA54B52ADB2DB0_inline(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00e5;
		}
	}
	{
		double L_14 = __this->get_progress_2();
		double L_15 = L_14;
		RuntimeObject * L_16 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral851CCF432FDDA32757C16391AEFAA7F77A683408, L_16, _stringLiteralA1B024190473A15BBF80FBD244257996F3D8B436, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3E750EF4B5D1A8799801389FCD60CD6336A82C1B_il2cpp_TypeInfo_var);
		Logger_d_m95C0BD29B60442754276E97D1FB7ED05E4AC31CE(L_17, /*hidden argument*/NULL);
		double L_18 = __this->get_progress_2();
		if ((!(((double)L_18) >= ((double)(0.0)))))
		{
			goto IL_00a6;
		}
	}
	{
		double L_19 = __this->get_progress_2();
		if ((!(((double)L_19) <= ((double)(1.0)))))
		{
			goto IL_00a6;
		}
	}
	{
		double L_20 = __this->get_progress_2();
		double L_21 = L_20;
		RuntimeObject * L_22 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral851CCF432FDDA32757C16391AEFAA7F77A683408, L_22, _stringLiteral750A16582AAF833F1109CB1D1CF5C918619D5063, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3E750EF4B5D1A8799801389FCD60CD6336A82C1B_il2cpp_TypeInfo_var);
		Logger_w_mC5E0B8747075DB3753444575C6297436A1BDCCBB(L_23, /*hidden argument*/NULL);
	}

IL_00a6:
	{
		double L_24 = __this->get_progress_2();
		AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12* L_25 = ___ach0;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		int32_t L_29 = Achievement_get_TotalSteps_m18E7561B2CE4F8214FA9A1CE5249E671FC0ECC7E_inline(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		double L_30 = bankers_round(((double)il2cpp_codegen_multiply((double)((double)((double)L_24/(double)(100.0))), (double)(((double)((double)L_29))))));
		V_1 = (((int32_t)((int32_t)L_30)));
		PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * L_31 = __this->get_U3CU3E4__this_3();
		NullCheck(L_31);
		RuntimeObject* L_32 = L_31->get_mClient_5();
		String_t* L_33 = __this->get_achievementID_1();
		int32_t L_34 = V_1;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_35 = __this->get_callback_0();
		NullCheck(L_32);
		InterfaceActionInvoker3< String_t*, int32_t, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(17 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::SetStepsAtLeast(System.String,System.Int32,System.Action`1<System.Boolean>) */, IPlayGamesClient_tB929CAE947C17CC89A2E2AB9ADC60C827B6825A8_il2cpp_TypeInfo_var, L_32, L_33, L_34, L_35);
		return;
	}

IL_00e5:
	{
		double L_36 = __this->get_progress_2();
		if ((!(((double)L_36) >= ((double)(100.0)))))
		{
			goto IL_0132;
		}
	}
	{
		double L_37 = __this->get_progress_2();
		double L_38 = L_37;
		RuntimeObject * L_39 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_38);
		String_t* L_40 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral851CCF432FDDA32757C16391AEFAA7F77A683408, L_39, _stringLiteralE07B915FC8AA3BFF558846E6D7E1018D477E6BC7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3E750EF4B5D1A8799801389FCD60CD6336A82C1B_il2cpp_TypeInfo_var);
		Logger_d_m95C0BD29B60442754276E97D1FB7ED05E4AC31CE(L_40, /*hidden argument*/NULL);
		PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * L_41 = __this->get_U3CU3E4__this_3();
		NullCheck(L_41);
		RuntimeObject* L_42 = L_41->get_mClient_5();
		String_t* L_43 = __this->get_achievementID_1();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_44 = __this->get_callback_0();
		NullCheck(L_42);
		InterfaceActionInvoker2< String_t*, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(14 /* System.Void GooglePlayGames.BasicApi.IPlayGamesClient::UnlockAchievement(System.String,System.Action`1<System.Boolean>) */, IPlayGamesClient_tB929CAE947C17CC89A2E2AB9ADC60C827B6825A8_il2cpp_TypeInfo_var, L_42, L_43, L_44);
		return;
	}

IL_0132:
	{
		double L_45 = __this->get_progress_2();
		double L_46 = L_45;
		RuntimeObject * L_47 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_46);
		String_t* L_48 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(_stringLiteral851CCF432FDDA32757C16391AEFAA7F77A683408, L_47, _stringLiteralA8ACC887501AAE667B7DD99B8035876606121208, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3E750EF4B5D1A8799801389FCD60CD6336A82C1B_il2cpp_TypeInfo_var);
		Logger_d_m95C0BD29B60442754276E97D1FB7ED05E4AC31CE(L_48, /*hidden argument*/NULL);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_49 = __this->get_callback_0();
		NullCheck(L_49);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_49, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
		return;
	}

IL_015e:
	{
		int32_t L_50 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_0162:
	{
		int32_t L_51 = V_0;
		AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12* L_52 = ___ach0;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_53 = __this->get_achievementID_1();
		String_t* L_54 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralE2993E3BA8E949129120C8B951DD861D638A86B5, L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Logger_t3E750EF4B5D1A8799801389FCD60CD6336A82C1B_il2cpp_TypeInfo_var);
		Logger_e_mB9E2D5031D7C7D375E366C6D42AC1D71292CE6D8(L_54, /*hidden argument*/NULL);
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_55 = __this->get_callback_0();
		NullCheck(L_55);
		Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F(L_55, (bool)0, /*hidden argument*/Action_1_Invoke_m45E8F9900F9DB395C48A868A7C6A83BDD7FC692F_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass57_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0__ctor_mED28B52EE79B29B85E199A213F956AEFBB3C1C61 (U3CU3Ec__DisplayClass57_0_t89565AF840CEEB8341D44B2550EA97CAAB6DF4D8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass57_0::<LoadAchievementDescriptions>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0_U3CLoadAchievementDescriptionsU3Eb__0_mF6C512C1D22E4A821C8F8FCA75CE4E2235E0AA7F (U3CU3Ec__DisplayClass57_0_t89565AF840CEEB8341D44B2550EA97CAAB6DF4D8 * __this, AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass57_0_U3CLoadAchievementDescriptionsU3Eb__0_mF6C512C1D22E4A821C8F8FCA75CE4E2235E0AA7F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12* L_0 = ___ach0;
		NullCheck(L_0);
		IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C* L_1 = (IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C*)(IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C*)SZArrayNew(IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C* L_2 = V_0;
		int32_t L_3 = V_1;
		AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12* L_4 = ___ach0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244 * L_8 = (PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244 *)il2cpp_codegen_object_new(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244_il2cpp_TypeInfo_var);
		PlayGamesAchievement__ctor_mC7E3FD1BAD1AC9C6D387086457B6C5AFF994E66E(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_10 = V_1;
		IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		Action_1_tEBF3E04BDB01E6B7B65F9CAE5F1AD49ACAEA4245 * L_12 = __this->get_callback_0();
		IAchievementDescriptionU5BU5D_t04FAD356525D2E66F453432ADC1254CCE11FEB8C* L_13 = V_0;
		NullCheck(L_12);
		Action_1_Invoke_m6D94201F6F60C71FD959534E58DC5F2E0534C16D(L_12, L_13, /*hidden argument*/Action_1_Invoke_m6D94201F6F60C71FD959534E58DC5F2E0534C16D_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_m9C0A94F61074775DCBF7EDAA19FDBF44555E9AFF (U3CU3Ec__DisplayClass58_0_t17DA5222E9852F293C41B6063A8A9EEEB2077D91 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass58_0::<LoadAchievements>b__0(GooglePlayGames.BasicApi.Achievement[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0_U3CLoadAchievementsU3Eb__0_m1DD7DFBAE34CA2D9B17958A402C6C88A7C363FC7 (U3CU3Ec__DisplayClass58_0_t17DA5222E9852F293C41B6063A8A9EEEB2077D91 * __this, AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12* ___ach0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass58_0_U3CLoadAchievementsU3Eb__0_m1DD7DFBAE34CA2D9B17958A402C6C88A7C363FC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002* V_0 = NULL;
	int32_t V_1 = 0;
	{
		AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12* L_0 = ___ach0;
		NullCheck(L_0);
		IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002* L_1 = (IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002*)(IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002*)SZArrayNew(IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_001c;
	}

IL_000d:
	{
		IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002* L_2 = V_0;
		int32_t L_3 = V_1;
		AchievementU5BU5D_t6A4096089ADFEECC29CBA942521CC37BD6295F12* L_4 = ___ach0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244 * L_8 = (PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244 *)il2cpp_codegen_object_new(PlayGamesAchievement_t2767FD7106AC8346E3F845F289953EB3734DA244_il2cpp_TypeInfo_var);
		PlayGamesAchievement__ctor_mC7E3FD1BAD1AC9C6D387086457B6C5AFF994E66E(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (RuntimeObject*)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_10 = V_1;
		IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		Action_1_t808257F8F3D562D9E1162AFCA7BC642626A4B410 * L_12 = __this->get_callback_0();
		IAchievementU5BU5D_t3883232C112B8615104C760EB1F908623788D002* L_13 = V_0;
		NullCheck(L_12);
		Action_1_Invoke_mFE16CD4BDEDFE680B174E7380FA78E7EB5200780(L_12, L_13, /*hidden argument*/Action_1_Invoke_mFE16CD4BDEDFE680B174E7380FA78E7EB5200780_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass62_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0__ctor_m16632A5098A6C762F08B7D6B63360428A44FA2C7 (U3CU3Ec__DisplayClass62_0_t014D9BB400C950A8CC98731687BCAD9C16D20E96 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass62_0::<LoadScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass62_0_U3CLoadScoresU3Eb__0_mF028966B9D39A016E3C4C02D9ED4A1738771C387 (U3CU3Ec__DisplayClass62_0_t014D9BB400C950A8CC98731687BCAD9C16D20E96 * __this, LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED * ___scoreData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass62_0_U3CLoadScoresU3Eb__0_mF028966B9D39A016E3C4C02D9ED4A1738771C387_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tCE03E89D2A2CDDA126F4FED003A9E73E8EA88B5C * L_0 = __this->get_callback_0();
		LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED * L_1 = ___scoreData0;
		NullCheck(L_1);
		IScoreU5BU5D_t64BCFED7B59BE0D35420A0A92BEC5140C035952C* L_2 = LeaderboardScoreData_get_Scores_m26448831511DB1ECEC76B84C70D7FC12B1EC13B7(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Action_1_Invoke_m5C7A22095E708452C272C2BBC5CE4F6E72236861(L_0, L_2, /*hidden argument*/Action_1_Invoke_m5C7A22095E708452C272C2BBC5CE4F6E72236861_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass74_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0__ctor_m6B50CC902FED04330D95040851AB024ACAC55B63 (U3CU3Ec__DisplayClass74_0_t177A778562DE6C03568B1FD6D00BF77063951E0F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass74_0::<LoadScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0_U3CLoadScoresU3Eb__0_mEF4C49EDD51A56399203EB5BF1B9F3AD1C40E007 (U3CU3Ec__DisplayClass74_0_t177A778562DE6C03568B1FD6D00BF77063951E0F * __this, LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED * ___scoreData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass74_0_U3CLoadScoresU3Eb__0_mEF4C49EDD51A56399203EB5BF1B9F3AD1C40E007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * L_0 = __this->get_U3CU3E4__this_0();
		RuntimeObject* L_1 = __this->get_board_1();
		LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED * L_2 = ___scoreData0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_3 = __this->get_callback_2();
		NullCheck(L_0);
		PlayGamesPlatform_HandleLoadingScores_mB4164894F292150B23693F650EFC28CA982A1CA0(L_0, ((PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F *)CastclassClass((RuntimeObject*)L_1, PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F_il2cpp_TypeInfo_var)), L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass77_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass77_0__ctor_m11D7BF5073ACB19DE032CF14C7353BEB81EC75BA (U3CU3Ec__DisplayClass77_0_tF533F2032DAAE876E577DBF1FFCF94A82D26B73E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesPlatform_<>c__DisplayClass77_0::<HandleLoadingScores>b__0(GooglePlayGames.BasicApi.LeaderboardScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass77_0_U3CHandleLoadingScoresU3Eb__0_m89CE233F4DD6CB1F4F47A770FD7A992A8696ACF2 (U3CU3Ec__DisplayClass77_0_tF533F2032DAAE876E577DBF1FFCF94A82D26B73E * __this, LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED * ___nextScoreData0, const RuntimeMethod* method)
{
	{
		PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * L_0 = __this->get_U3CU3E4__this_0();
		PlayGamesLeaderboard_tB749C43A23970408BC67BC87DCDBF1FB97868C0F * L_1 = __this->get_board_1();
		LeaderboardScoreData_t2B2EA298E0AF9A07A80734F851212916F688E0ED * L_2 = ___nextScoreData0;
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_3 = __this->get_callback_2();
		NullCheck(L_0);
		PlayGamesPlatform_HandleLoadingScores_mB4164894F292150B23693F650EFC28CA982A1CA0(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesScore::.ctor(System.DateTime,System.String,System.UInt64,System.String,System.UInt64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesScore__ctor_m18FBC0A8EA7603F5760481BFD338F7B643377ACB (PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD * __this, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___date0, String_t* ___leaderboardId1, uint64_t ___rank2, String_t* ___playerId3, uint64_t ___value4, String_t* ___metadata5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesScore__ctor_m18FBC0A8EA7603F5760481BFD338F7B643377ACB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_mPlayerId_3(L_0);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_mMetadata_4(L_1);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_2;
		memset((&L_2), 0, sizeof(L_2));
		DateTime__ctor_m627486A7CFC2016C8A1646442155BE45A8062667((&L_2), ((int32_t)1970), 1, 1, 0, 0, 0, /*hidden argument*/NULL);
		__this->set_mDate_5(L_2);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_3 = ___date0;
		__this->set_mDate_5(L_3);
		String_t* L_4 = PlayGamesScore_get_leaderboardID_m6B5C53D237D30A5D52265BD384FF8B3EAB18915B_inline(__this, /*hidden argument*/NULL);
		__this->set_mLbId_0(L_4);
		uint64_t L_5 = ___rank2;
		__this->set_mRank_2(L_5);
		String_t* L_6 = ___playerId3;
		__this->set_mPlayerId_3(L_6);
		uint64_t L_7 = ___value4;
		__this->set_mValue_1(L_7);
		String_t* L_8 = ___metadata5;
		__this->set_mMetadata_4(L_8);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesScore::ReportScore(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesScore_ReportScore_m2BF5A23981253056C97A5E8A860D96D26658E412 (PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD * __this, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesScore_ReportScore_m2BF5A23981253056C97A5E8A860D96D26658E412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A_il2cpp_TypeInfo_var);
		PlayGamesPlatform_t8493F288949F3CB81E96D775F02A9B9147C9A79A * L_0 = PlayGamesPlatform_get_Instance_m429B8A3F0FD9AD738103A7AD27ADA19C363014AB(/*hidden argument*/NULL);
		int64_t L_1 = __this->get_mValue_1();
		String_t* L_2 = __this->get_mLbId_0();
		String_t* L_3 = __this->get_mMetadata_4();
		Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * L_4 = ___callback0;
		NullCheck(L_0);
		PlayGamesPlatform_ReportScore_m3557FAFAAFB4076CEC634CE45A7440DBBACAA070(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.String GooglePlayGames.PlayGamesScore::get_leaderboardID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_leaderboardID_m6B5C53D237D30A5D52265BD384FF8B3EAB18915B (PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mLbId_0();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesScore::set_leaderboardID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesScore_set_leaderboardID_m6F44D60C93387C4F90ECB24E77AD03E04D6D7511 (PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_mLbId_0(L_0);
		return;
	}
}
// System.Int64 GooglePlayGames.PlayGamesScore::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PlayGamesScore_get_value_m4BCD54DF4668EFF9ABF2348E01FAF8BB4A778194 (PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_mValue_1();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesScore::set_value(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesScore_set_value_m21BC127FA1B5828607958BEB36F8065CBCAD372C (PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_mValue_1(L_0);
		return;
	}
}
// System.DateTime GooglePlayGames.PlayGamesScore::get_date()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  PlayGamesScore_get_date_mFE7BB1AE4F9D53BB82CFE90E3C9EE470EDA4DAC4 (PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD * __this, const RuntimeMethod* method)
{
	{
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_0 = __this->get_mDate_5();
		return L_0;
	}
}
// System.String GooglePlayGames.PlayGamesScore::get_formattedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_formattedValue_m099669151BACF9C887EE0244362640321F83A7F8 (PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD * __this, const RuntimeMethod* method)
{
	{
		int64_t* L_0 = __this->get_address_of_mValue_1();
		String_t* L_1 = Int64_ToString_m8210E39355A227AE15DD391EB810AA9B6AB8B26C((int64_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String GooglePlayGames.PlayGamesScore::get_userID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_userID_m8A80F8C471F889F9169AEB61E4A233B0062BF750 (PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mPlayerId_3();
		return L_0;
	}
}
// System.Int32 GooglePlayGames.PlayGamesScore::get_rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesScore_get_rank_m03511788D5730376355843B22E0ED5D541E870DF (PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_mRank_2();
		return (((int32_t)((int32_t)L_0)));
	}
}
// System.String GooglePlayGames.PlayGamesScore::get_metaData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_metaData_mB13B582EAE2F97FFCD7AE5DB8D474A731668C8A4 (PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mMetadata_4();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile__ctor_m26C54E493F3B8BA80BB75F4B38969A8CEA734DEF (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___displayName0;
		__this->set_mDisplayName_0(L_0);
		String_t* L_1 = ___playerId1;
		__this->set_mPlayerId_1(L_1);
		String_t* L_2 = ___avatarUrl2;
		__this->set_mAvatarUrl_2(L_2);
		il2cpp_codegen_memory_barrier();
		__this->set_mImageLoading_3(0);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile::ResetIdentity(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile_ResetIdentity_mE49BEA8BEE53F949A8E69D514C4760A1CAFECE65 (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___displayName0;
		__this->set_mDisplayName_0(L_0);
		String_t* L_1 = ___playerId1;
		__this->set_mPlayerId_1(L_1);
		String_t* L_2 = __this->get_mAvatarUrl_2();
		String_t* L_3 = ___avatarUrl2;
		bool L_4 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		__this->set_mImage_4((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL);
		String_t* L_5 = ___avatarUrl2;
		__this->set_mAvatarUrl_2(L_5);
	}

IL_002a:
	{
		il2cpp_codegen_memory_barrier();
		__this->set_mImageLoading_3(0);
		return;
	}
}
// System.String GooglePlayGames.PlayGamesUserProfile::get_userName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_userName_m5B092B4190199A87E143501B65E1F99DE4201239 (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mDisplayName_0();
		return L_0;
	}
}
// System.String GooglePlayGames.PlayGamesUserProfile::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_id_mF543DF3660FFA86931C05987AD3576A419474708 (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mPlayerId_1();
		return L_0;
	}
}
// System.Boolean GooglePlayGames.PlayGamesUserProfile::get_isFriend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesUserProfile_get_isFriend_mDD4BD272067873574EACBD23F8D9D03DDB8C3095 (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// UnityEngine.SocialPlatforms.UserState GooglePlayGames.PlayGamesUserProfile::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesUserProfile_get_state_m2335C7388C30C23BEA2628700E49393134ED54EF (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * PlayGamesUserProfile_get_image_m631FAB918D3DCC702DAA4D3469FC7BD93E8222E8 (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesUserProfile_get_image_m631FAB918D3DCC702DAA4D3469FC7BD93E8222E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_mImageLoading_3();
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_004e;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = __this->get_mImage_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_3 = PlayGamesUserProfile_get_AvatarURL_mAB1A07F78BC9B6D64D039603F4FDC8E471E8157D_inline(__this, /*hidden argument*/NULL);
		bool L_4 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004e;
		}
	}
	{
		String_t* L_5 = PlayGamesUserProfile_get_AvatarURL_mAB1A07F78BC9B6D64D039603F4FDC8E471E8157D_inline(__this, /*hidden argument*/NULL);
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral12D7948F6A3F9300B064A719814E82CA34E4A5CA, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_6, /*hidden argument*/NULL);
		il2cpp_codegen_memory_barrier();
		__this->set_mImageLoading_3(1);
		RuntimeObject* L_7 = PlayGamesUserProfile_LoadImage_m35F861C72C561C981A97ACF7502570213E6BADFD(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PlayGamesHelperObject_tD1050B62E48DADEEC8592DB770B2E997921FD18F_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunCoroutine_mCDC6CBF287B6D8EBE869A970C5770808A95DC194(L_7, /*hidden argument*/NULL);
	}

IL_004e:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_8 = __this->get_mImage_4();
		return L_8;
	}
}
// System.String GooglePlayGames.PlayGamesUserProfile::get_AvatarURL()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_AvatarURL_mAB1A07F78BC9B6D64D039603F4FDC8E471E8157D (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mAvatarUrl_2();
		return L_0;
	}
}
// System.Collections.IEnumerator GooglePlayGames.PlayGamesUserProfile::LoadImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayGamesUserProfile_LoadImage_m35F861C72C561C981A97ACF7502570213E6BADFD (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesUserProfile_LoadImage_m35F861C72C561C981A97ACF7502570213E6BADFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57 * L_0 = (U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57 *)il2cpp_codegen_object_new(U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57_il2cpp_TypeInfo_var);
		U3CLoadImageU3Ed__19__ctor_m144CDC51BE74E36F3A079E9501DAF19634E4045A(L_0, 0, /*hidden argument*/NULL);
		U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Boolean GooglePlayGames.PlayGamesUserProfile::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesUserProfile_Equals_m2652936326265547E0B694AC5BF0D7F8AE62FDFB (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesUserProfile_Equals_m2652936326265547E0B694AC5BF0D7F8AE62FDFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		if ((!(((RuntimeObject*)(PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A *)__this) == ((RuntimeObject*)(RuntimeObject *)L_1))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_000b:
	{
		RuntimeObject * L_2 = ___obj0;
		V_0 = ((PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A *)IsInstClass((RuntimeObject*)L_2, PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A_il2cpp_TypeInfo_var));
		PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_il2cpp_TypeInfo_var);
		StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * L_4 = StringComparer_get_Ordinal_m1F38FBAB170DF80D33FE2A849D30FF2E314D9FDB_inline(/*hidden argument*/NULL);
		String_t* L_5 = __this->get_mPlayerId_1();
		PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_mPlayerId_1();
		NullCheck(L_4);
		bool L_8 = VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(11 /* System.Boolean System.StringComparer::Equals(System.String,System.String) */, L_4, L_5, L_7);
		return L_8;
	}
}
// System.Int32 GooglePlayGames.PlayGamesUserProfile::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayGamesUserProfile_GetHashCode_mA7883CB96B1D03563B62B325A3A0FD202D2EE48D (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesUserProfile_GetHashCode_mA7883CB96B1D03563B62B325A3A0FD202D2EE48D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		String_t* L_3 = __this->get_mPlayerId_1();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_3);
		return ((int32_t)((int32_t)L_2^(int32_t)L_4));
	}
}
// System.String GooglePlayGames.PlayGamesUserProfile::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_ToString_mDCB410AE7A195790EB929AC63A59EE2B04CC2A1C (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayGamesUserProfile_ToString_mDCB410AE7A195790EB929AC63A59EE2B04CC2A1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_mDisplayName_0();
		String_t* L_1 = __this->get_mPlayerId_1();
		String_t* L_2 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralC837A43528CC5B0BE6EC554F2990669ECDF370F6, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PlayGamesUserProfile_<LoadImage>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__19__ctor_m144CDC51BE74E36F3A079E9501DAF19634E4045A (U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile_<LoadImage>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__19_System_IDisposable_Dispose_mACDC724D4071180FB03E2904301ED5A587B40AAD (U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GooglePlayGames.PlayGamesUserProfile_<LoadImage>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadImageU3Ed__19_MoveNext_m1EA976F7481F7FD2EE3D2208A52E243B28BCA1EF (U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadImageU3Ed__19_MoveNext_m1EA976F7481F7FD2EE3D2208A52E243B28BCA1EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5 = PlayGamesUserProfile_get_AvatarURL_mAB1A07F78BC9B6D64D039603F4FDC8E471E8157D_inline(L_4, /*hidden argument*/NULL);
		bool L_6 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_00c8;
		}
	}
	{
		PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = PlayGamesUserProfile_get_AvatarURL_mAB1A07F78BC9B6D64D039603F4FDC8E471E8157D_inline(L_7, /*hidden argument*/NULL);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_9 = UnityWebRequestTexture_GetTexture_m45626D1CEA83B5DC281934CC74D383389CD781B9(L_8, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_9);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_10 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_10);
		UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD(L_10, /*hidden argument*/NULL);
		goto IL_0064;
	}

IL_004d:
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005d:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0064:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_11 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_11);
		bool L_12 = UnityWebRequest_get_isDone_mB3CC99A8DC3DB1DD44B23008688EB2DF20906FDA(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_004d;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_13 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_13);
		String_t* L_14 = UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0091;
		}
	}
	{
		PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * L_15 = V_1;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_16 = __this->get_U3CwwwU3E5__2_3();
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_17 = DownloadHandlerTexture_GetContent_mF7BCA86CF9F9871A512256173025D3C895EDF744(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		L_15->set_mImage_4(L_17);
		goto IL_00b6;
	}

IL_0091:
	{
		PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * L_18 = V_1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_19 = Texture2D_get_blackTexture_mCF4F978DF9B6066794E7130E0C14618216ED0956(/*hidden argument*/NULL);
		NullCheck(L_18);
		L_18->set_mImage_4(L_19);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_20 = __this->get_U3CwwwU3E5__2_3();
		NullCheck(L_20);
		String_t* L_21 = UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC(L_20, /*hidden argument*/NULL);
		String_t* L_22 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralB692C108018DFA4D7440FEF397D0CCA8C678E070, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_22, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * L_23 = V_1;
		NullCheck(L_23);
		il2cpp_codegen_memory_barrier();
		L_23->set_mImageLoading_3(0);
		__this->set_U3CwwwU3E5__2_3((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)NULL);
		goto IL_00e6;
	}

IL_00c8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralECF6120DE188550139F123682DCBA1D92BB018E6, /*hidden argument*/NULL);
		PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * L_24 = V_1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_25 = Texture2D_get_blackTexture_mCF4F978DF9B6066794E7130E0C14618216ED0956(/*hidden argument*/NULL);
		NullCheck(L_24);
		L_24->set_mImage_4(L_25);
		PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * L_26 = V_1;
		NullCheck(L_26);
		il2cpp_codegen_memory_barrier();
		L_26->set_mImageLoading_3(0);
	}

IL_00e6:
	{
		return (bool)0;
	}
}
// System.Object GooglePlayGames.PlayGamesUserProfile_<LoadImage>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0DC3E1930DDA13365CC49BD27B21239A1241A884 (U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GooglePlayGames.PlayGamesUserProfile_<LoadImage>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__19_System_Collections_IEnumerator_Reset_mEB5DE10876A8396F24F82102B639953CF8465460 (U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadImageU3Ed__19_System_Collections_IEnumerator_Reset_mEB5DE10876A8396F24F82102B639953CF8465460_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadImageU3Ed__19_System_Collections_IEnumerator_Reset_mEB5DE10876A8396F24F82102B639953CF8465460_RuntimeMethod_var);
	}
}
// System.Object GooglePlayGames.PlayGamesUserProfile_<LoadImage>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__19_System_Collections_IEnumerator_get_Current_mEDC691F805FD36F0BC97A55E6C2754CF37366F1F (U3CLoadImageU3Ed__19_t6C7914CE7CBA350F4DE0FC0E8E9BD88FE6F3EA57 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.PluginVersion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginVersion__ctor_m492A36F5A6C804F8254096C80B59312EAFE1AC76 (PluginVersion_tB0E519E7845CD35129B206E909BC0EF6A24D6BE9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ReportProgress_t9005E71F3F2926AA8F3AACA34E376CD5254022BD (ReportProgress_t9005E71F3F2926AA8F3AACA34E376CD5254022BD * __this, String_t* ___id0, double ___progress1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, double, Il2CppMethodPointer);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___id0' to native representation
	char* ____id0_marshaled = NULL;
	____id0_marshaled = il2cpp_codegen_marshal_string(___id0);

	// Marshaling of parameter '___callback2' to native representation
	Il2CppMethodPointer ____callback2_marshaled = NULL;
	____callback2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback2));

	// Native function invocation
	il2cppPInvokeFunc(____id0_marshaled, ___progress1, ____callback2_marshaled);

	// Marshaling cleanup of parameter '___id0' native representation
	il2cpp_codegen_marshal_free(____id0_marshaled);
	____id0_marshaled = NULL;

}
// System.Void GooglePlayGames.ReportProgress::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportProgress__ctor_m34B8A963374200C5AA8DA583656E5D8C74C8C102 (ReportProgress_t9005E71F3F2926AA8F3AACA34E376CD5254022BD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void GooglePlayGames.ReportProgress::Invoke(System.String,System.Double,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportProgress_Invoke_m79286495B75A57978108AB8A4CB08CABC76528EF (ReportProgress_t9005E71F3F2926AA8F3AACA34E376CD5254022BD * __this, String_t* ___id0, double ___progress1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___id0, ___progress1, ___callback2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___progress1, ___callback2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(targetMethod, ___id0, ___progress1, ___callback2);
					else
						GenericVirtActionInvoker2< double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(targetMethod, ___id0, ___progress1, ___callback2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___id0, ___progress1, ___callback2);
					else
						VirtActionInvoker2< double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___id0, ___progress1, ___callback2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___id0, ___progress1, ___callback2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___id0, ___progress1, ___callback2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(targetMethod, targetThis, ___id0, ___progress1, ___callback2);
					else
						GenericVirtActionInvoker3< String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(targetMethod, targetThis, ___id0, ___progress1, ___callback2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___id0, ___progress1, ___callback2);
					else
						VirtActionInvoker3< String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___id0, ___progress1, ___callback2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, double, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___id0, ___progress1, ___callback2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult GooglePlayGames.ReportProgress::BeginInvoke(System.String,System.Double,System.Action`1<System.Boolean>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReportProgress_BeginInvoke_mE00000758478E8F36ACF71DCC2CC8C3712E21AAA (ReportProgress_t9005E71F3F2926AA8F3AACA34E376CD5254022BD * __this, String_t* ___id0, double ___progress1, Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___callback2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * _____callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReportProgress_BeginInvoke_mE00000758478E8F36ACF71DCC2CC8C3712E21AAA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___id0;
	__d_args[1] = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &___progress1);
	__d_args[2] = ___callback2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)_____callback3, (RuntimeObject*)___object4);
}
// System.Void GooglePlayGames.ReportProgress::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReportProgress_EndInvoke_m3264A06541759859AACF83A9207D5384542373C4 (ReportProgress_t9005E71F3F2926AA8F3AACA34E376CD5254022BD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ImageButton::get_Interactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImageButton_get_Interactive_mFDDCDE03D0B57D0194BDD07E1B2FD92632CE4B61 (ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_interactive_4();
		return L_0;
	}
}
// System.Void ImageButton::set_Interactive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageButton_set_Interactive_m2EF1F97F989694762F2FE513DE2F02B811966A3E (ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ImageButton_set_Interactive_m2EF1F97F989694762F2FE513DE2F02B811966A3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		__this->set_interactive_4(L_0);
		bool L_1 = __this->get_interactive_4();
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_2 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(__this, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_3 = __this->get_depressedSprite_5();
		NullCheck(L_2);
		Image_set_sprite_m77F8D681D4EE6D58F4F235AFF704C3EB165A9646(L_2, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0021:
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_4 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(__this, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_5 = __this->get_pressedSprite_6();
		NullCheck(L_4);
		Image_set_sprite_m77F8D681D4EE6D58F4F235AFF704C3EB165A9646(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ImageButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageButton_Start_m4F26F59978910F5BEFA1D8EC444C2E84DB492D57 (ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ImageButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageButton_Update_mA84F3DE1A8293E784E61724AFBC292020EC19346 (ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ImageButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageButton_OnPointerDown_mA72EC84C155614417383C260E804B968141A244C (ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___pointerEventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ImageButton_OnPointerDown_mA72EC84C155614417383C260E804B968141A244C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_interactive_4();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_1 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(__this, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_2 = __this->get_pressedSprite_6();
		NullCheck(L_1);
		Image_set_sprite_m77F8D681D4EE6D58F4F235AFF704C3EB165A9646(L_1, L_2, /*hidden argument*/NULL);
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_3 = __this->get_onPress_7();
		NullCheck(L_3);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_3, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void ImageButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageButton_OnPointerUp_m51FEFAA6FE33BE6683895D52AE03F41A760A4F85 (ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * __this, PointerEventData_tC18994283B7753E430E316A62D9E45BA6D644C63 * ___pointerEventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ImageButton_OnPointerUp_m51FEFAA6FE33BE6683895D52AE03F41A760A4F85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_interactive_4();
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_1 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(__this, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_2 = __this->get_depressedSprite_5();
		NullCheck(L_1);
		Image_set_sprite_m77F8D681D4EE6D58F4F235AFF704C3EB165A9646(L_1, L_2, /*hidden argument*/NULL);
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_3 = __this->get_onDepress_8();
		NullCheck(L_3);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_3, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void ImageButton::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageButton_OnApplicationQuit_mCE35B7643C19D39FFD86CD4AD30AE2EBA8BBAD5E (ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * __this, const RuntimeMethod* method)
{
	{
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_0 = __this->get_onPress_7();
		NullCheck(L_0);
		UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43(L_0, /*hidden argument*/NULL);
		UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * L_1 = __this->get_onDepress_8();
		NullCheck(L_1);
		UnityEventBase_RemoveAllListeners_m7EC34F9A8A4F1990D14EBF9E77BA62718F1C5D43(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ImageButton::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageButton_OnValidate_mB999CA0E393EA34C004974CE6FFF28550BF859E7 (ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ImageButton_OnValidate_mB999CA0E393EA34C004974CE6FFF28550BF859E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_interactive_4();
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_1 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(__this, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		NullCheck(L_1);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_2 = Image_get_sprite_m642D753672A8CBCEB67950914B44EF34C62DD137_inline(L_1, /*hidden argument*/NULL);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_3 = __this->get_depressedSprite_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_5 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(__this, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_6 = __this->get_depressedSprite_5();
		NullCheck(L_5);
		Image_set_sprite_m77F8D681D4EE6D58F4F235AFF704C3EB165A9646(L_5, L_6, /*hidden argument*/NULL);
		return;
	}

IL_0032:
	{
		bool L_7 = __this->get_interactive_4();
		if (L_7)
		{
			goto IL_0063;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_8 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(__this, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		NullCheck(L_8);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_9 = Image_get_sprite_m642D753672A8CBCEB67950914B44EF34C62DD137_inline(L_8, /*hidden argument*/NULL);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_10 = __this->get_pressedSprite_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_12 = Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925(__this, /*hidden argument*/Component_GetComponent_TisImage_t18FED07D8646917E1C563745518CF3DD57FF0B3E_m899DB55B6934969ACEB9F317359AFB8745F88925_RuntimeMethod_var);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_13 = __this->get_pressedSprite_6();
		NullCheck(L_12);
		Image_set_sprite_m77F8D681D4EE6D58F4F235AFF704C3EB165A9646(L_12, L_13, /*hidden argument*/NULL);
	}

IL_0063:
	{
		return;
	}
}
// System.Void ImageButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageButton__ctor_m5DDCD8367A44C511F78E93501DCB1D5F1BD2FA0A (ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * __this, const RuntimeMethod* method)
{
	{
		__this->set_interactive_4((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObstacleController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleController_Start_mE3E7D5AF77E3FC0440685B38C43CC1B45882EAE4 (ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ObstacleController_SpawnProtection_mE059161ECBC4645CF4DA10E1FFDC2094E9359C41(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ObstacleController::ChanceBasedSpawn(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleController_ChanceBasedSpawn_mE5C3BDDD9D69156167DC73EF93A0B43AB85D0224 (ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___spawnPoint0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObstacleController_ChanceBasedSpawn_mE5C3BDDD9D69156167DC73EF93A0B43AB85D0224_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = Random_get_value_mC998749E08291DD42CF31C026FAC4F14F746831C(/*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Random_get_value_mC998749E08291DD42CF31C026FAC4F14F746831C(/*hidden argument*/NULL);
		if ((((float)L_1) > ((float)(0.5f))))
		{
			goto IL_0021;
		}
	}
	{
		float L_2 = __this->get_xOffset_14();
		G_B3_0 = ((float)((float)((-L_2))/(float)(2.0f)));
		goto IL_002d;
	}

IL_0021:
	{
		float L_3 = __this->get_xOffset_14();
		G_B3_0 = ((float)((float)L_3/(float)(2.0f)));
	}

IL_002d:
	{
		V_1 = G_B3_0;
		int32_t L_4 = __this->get_lowCount_15();
		if ((((int32_t)L_4) >= ((int32_t)3)))
		{
			goto IL_0086;
		}
	}
	{
		float L_5 = V_0;
		if ((!(((float)L_5) < ((float)(0.45f)))))
		{
			goto IL_0086;
		}
	}
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_6 = __this->get_lowObstacles_10();
		NullCheck(L_6);
		int32_t L_7 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = ___spawnPoint0;
		float L_10 = L_9.get_x_0();
		float L_11 = V_1;
		float L_12 = __this->get_lowHeight_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), ((float)il2cpp_codegen_add((float)L_10, (float)L_11)), L_12, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_8, L_13, L_14, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		int32_t L_15 = __this->get_lowCount_15();
		__this->set_lowCount_15(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1)));
		RuntimeObject* L_16 = ObstacleController_SpawnProtection_mE059161ECBC4645CF4DA10E1FFDC2094E9359C41(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_16, /*hidden argument*/NULL);
		return;
	}

IL_0086:
	{
		int32_t L_17 = __this->get_midCount_16();
		if ((((int32_t)L_17) >= ((int32_t)2)))
		{
			goto IL_00e4;
		}
	}
	{
		float L_18 = V_0;
		if ((!(((float)L_18) < ((float)(0.8f)))))
		{
			goto IL_00e4;
		}
	}
	{
		float L_19 = V_0;
		if ((!(((float)L_19) > ((float)(0.45f)))))
		{
			goto IL_00e4;
		}
	}
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_20 = __this->get_midObstacles_11();
		NullCheck(L_20);
		int32_t L_21 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_23 = ___spawnPoint0;
		float L_24 = L_23.get_x_0();
		float L_25 = __this->get_midHeight_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_26), L_24, L_25, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_27 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_22, L_26, L_27, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		int32_t L_28 = __this->get_midCount_16();
		__this->set_midCount_16(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)));
		RuntimeObject* L_29 = ObstacleController_SpawnProtection_mE059161ECBC4645CF4DA10E1FFDC2094E9359C41(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_29, /*hidden argument*/NULL);
		return;
	}

IL_00e4:
	{
		int32_t L_30 = __this->get_highCount_17();
		if ((((int32_t)L_30) >= ((int32_t)1)))
		{
			goto IL_0143;
		}
	}
	{
		float L_31 = V_0;
		if ((!(((float)L_31) <= ((float)(1.0f)))))
		{
			goto IL_0143;
		}
	}
	{
		float L_32 = V_0;
		if ((!(((float)L_32) > ((float)(0.8f)))))
		{
			goto IL_0143;
		}
	}
	{
		GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* L_33 = __this->get_highObstacles_12();
		NullCheck(L_33);
		int32_t L_34 = 0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_36 = ___spawnPoint0;
		float L_37 = L_36.get_x_0();
		float L_38 = V_1;
		float L_39 = __this->get_highHeight_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_40), ((float)il2cpp_codegen_add((float)L_37, (float)L_38)), L_39, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_41 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_35, L_40, L_41, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		int32_t L_42 = __this->get_highCount_17();
		__this->set_highCount_17(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
		RuntimeObject* L_43 = ObstacleController_SpawnProtection_mE059161ECBC4645CF4DA10E1FFDC2094E9359C41(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_43, /*hidden argument*/NULL);
	}

IL_0143:
	{
		return;
	}
}
// System.Collections.IEnumerator ObstacleController::SpawnProtection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObstacleController_SpawnProtection_mE059161ECBC4645CF4DA10E1FFDC2094E9359C41 (ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObstacleController_SpawnProtection_mE059161ECBC4645CF4DA10E1FFDC2094E9359C41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800 * L_0 = (U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800 *)il2cpp_codegen_object_new(U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800_il2cpp_TypeInfo_var);
		U3CSpawnProtectionU3Ed__14__ctor_m71C4757012588252673C2C33B907297676EA7FEA(L_0, 0, /*hidden argument*/NULL);
		U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void ObstacleController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleController__ctor_m8B394085520686A6A26C92ED422071455E422D23 (ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObstacleController__ctor_m8B394085520686A6A26C92ED422071455E422D23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_canSpawn_13((bool)1);
		__this->set_xOffset_14((4.096f));
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m5604B8EA633CE177B97BE705AE69E9CEC33C0CB0(__this, /*hidden argument*/Singleton_1__ctor_m5604B8EA633CE177B97BE705AE69E9CEC33C0CB0_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObstacleController_<SpawnProtection>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnProtectionU3Ed__14__ctor_m71C4757012588252673C2C33B907297676EA7FEA (U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ObstacleController_<SpawnProtection>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnProtectionU3Ed__14_System_IDisposable_Dispose_m3AECFCED835083D75C8DB3107FD00FB776453357 (U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ObstacleController_<SpawnProtection>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnProtectionU3Ed__14_MoveNext_mFA8F577EEED9492B88CF71ADBAA47A70E6B50878 (U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSpawnProtectionU3Ed__14_MoveNext_mFA8F577EEED9492B88CF71ADBAA47A70E6B50878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		float L_4 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384((2.0f), (5.0f), /*hidden argument*/NULL);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_5 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0041:
	{
		__this->set_U3CU3E1__state_0((-1));
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_6 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_7), (24.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		ObstacleController_ChanceBasedSpawn_mE5C3BDDD9D69156167DC73EF93A0B43AB85D0224(L_6, L_7, /*hidden argument*/NULL);
		return (bool)0;
	}
}
// System.Object ObstacleController_<SpawnProtection>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnProtectionU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1417986058656A87AFF8A60457750224AD4E86A4 (U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ObstacleController_<SpawnProtection>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnProtectionU3Ed__14_System_Collections_IEnumerator_Reset_m67C0BA24AD780738CA9D33F77F1FD9556270A4D4 (U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSpawnProtectionU3Ed__14_System_Collections_IEnumerator_Reset_m67C0BA24AD780738CA9D33F77F1FD9556270A4D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CSpawnProtectionU3Ed__14_System_Collections_IEnumerator_Reset_m67C0BA24AD780738CA9D33F77F1FD9556270A4D4_RuntimeMethod_var);
	}
}
// System.Object ObstacleController_<SpawnProtection>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnProtectionU3Ed__14_System_Collections_IEnumerator_get_Current_m90B18C4073C72173312A2433A1C1993D08210A8D (U3CSpawnProtectionU3Ed__14_t626DC30A73F5AD1BDEADD29EF33A9FB8F5429800 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ObstacleFlip::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleFlip_Start_mD598A8594FC7A245EC16B252CEAFC2C44F0B16A9 (ObstacleFlip_t7AA8DC62C0ADD6136191C85A05986C55A16A7878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObstacleFlip_Start_mD598A8594FC7A245EC16B252CEAFC2C44F0B16A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_0 = Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var);
		NullCheck(L_0);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_1 = SpriteRenderer_get_sprite_m08636289E3194AF5DF47954C8F01FE7F50E85900(L_0, /*hidden argument*/NULL);
		__this->set_rhsSprite_4(L_1);
		return;
	}
}
// System.Void ObstacleFlip::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleFlip_Update_m8546D9CCC816C3CBFAD9E51851687852BC28B999 (ObstacleFlip_t7AA8DC62C0ADD6136191C85A05986C55A16A7878 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObstacleFlip_Update_m8546D9CCC816C3CBFAD9E51851687852BC28B999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tEA12A543EBA23A76CB1BF6954851783525A5AF77_il2cpp_TypeInfo_var);
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_3 = Singleton_1_get_Instance_m90A79C19E9B4B829F681CE86F9C4C972BA05E191(/*hidden argument*/Singleton_1_get_Instance_m90A79C19E9B4B829F681CE86F9C4C972BA05E191_RuntimeMethod_var);
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		if ((!(((float)L_2) < ((float)L_7))))
		{
			goto IL_00a1;
		}
	}
	{
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_8 = Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var);
		NullCheck(L_8);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_9 = SpriteRenderer_get_sprite_m08636289E3194AF5DF47954C8F01FE7F50E85900(L_8, /*hidden argument*/NULL);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_10 = __this->get_lhsSprite_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a1;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_22), ((-L_15)), L_18, L_21, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_12, L_22, /*hidden argument*/NULL);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_23 = Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_24 = __this->get_lhsSprite_5();
		NullCheck(L_23);
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_23, L_24, /*hidden argument*/NULL);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_25 = Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mCC209A7A6A8D6878F0CB813ED5722A59C2262693_RuntimeMethod_var);
		NullCheck(L_25);
		SpriteRenderer_set_flipX_mF9A738B8149D48B7B1319EBFA5787BAE38DD8DD6(L_25, (bool)1, /*hidden argument*/NULL);
	}

IL_00a1:
	{
		return;
	}
}
// System.Void ObstacleFlip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstacleFlip__ctor_m458593B2630DDC9F2753EEBC9CD0CAE1881ED6A7 (ObstacleFlip_t7AA8DC62C0ADD6136191C85A05986C55A16A7878 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_m648E40092E37395F4307411E855445886113CD60 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController__ctor_m648E40092E37395F4307411E855445886113CD60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_canJump_8((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tEA12A543EBA23A76CB1BF6954851783525A5AF77_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m4B932677A7C359EDFFC4D1647AA5AFBB267E3421(__this, /*hidden argument*/Singleton_1__ctor_m4B932677A7C359EDFFC4D1647AA5AFBB267E3421_RuntimeMethod_var);
		return;
	}
}
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_mC0C9B9461D0BDAC48EC43715818A4BA63C4F45EF (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_mC0C9B9461D0BDAC48EC43715818A4BA63C4F45EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb2d_10(L_0);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_1 = __this->get_rb2d_10();
		NullCheck(L_1);
		Rigidbody2D_set_constraints_m4F2ED0B8159AF713801762DCA706A4DFBA27F158(L_1, 4, /*hidden argument*/NULL);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_2 = __this->get_powerbarImage_12();
		NullCheck(L_2);
		Image_set_fillAmount_m613B7AC920F2EA886AF0D931005C6CD13F89A160(L_2, (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var);
		Physics2D_IgnoreLayerCollision_m6F9410A4C90DFF37FF10FBD5E2A8D623F1020820(((int32_t)9), ((int32_t)10), (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m38903EF1C8F12B9388303741F8040EE26C33DC33 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Update_m38903EF1C8F12B9388303741F8040EE26C33DC33_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tBE2C6914C0452E17EFB5BFC36236C7083639A9E9_il2cpp_TypeInfo_var);
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_0 = Singleton_1_get_Instance_m5A838E74F27646695C921997228C24A7D6DB6D09(/*hidden argument*/Singleton_1_get_Instance_m5A838E74F27646695C921997228C24A7D6DB6D09_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1 = L_0->get_gameRunning_7();
		if (!L_1)
		{
			goto IL_00f9;
		}
	}
	{
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_2 = Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B_RuntimeMethod_var);
		Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* L_3 = (Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE*)(Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE*)SZArrayNew(Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE_il2cpp_TypeInfo_var, (uint32_t)1);
		Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* L_4 = L_3;
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_5 = Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B_RuntimeMethod_var);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *)L_5);
		NullCheck(L_2);
		int32_t L_6 = Collider2D_GetContacts_m3AFD13FC94272B1B309E4C4CE545E70D2F00C921(L_2, L_4, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0043;
		}
	}
	{
		__this->set_canJump_8((bool)0);
		ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * L_7 = __this->get_jumpButton_13();
		NullCheck(L_7);
		ImageButton_set_Interactive_m2EF1F97F989694762F2FE513DE2F02B811966A3E(L_7, (bool)0, /*hidden argument*/NULL);
		goto IL_00d6;
	}

IL_0043:
	{
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_8 = Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B_RuntimeMethod_var);
		Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* L_9 = (Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE*)(Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE*)SZArrayNew(Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE_il2cpp_TypeInfo_var, (uint32_t)1);
		Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* L_10 = L_9;
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_11 = Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B_RuntimeMethod_var);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *)L_11);
		NullCheck(L_8);
		int32_t L_12 = Collider2D_GetContacts_m3AFD13FC94272B1B309E4C4CE545E70D2F00C921(L_8, L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0094;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_13 = __this->get_powerbarImage_12();
		NullCheck(L_13);
		float L_14 = Image_get_fillAmount_m5FF6EE8DB33C4A219B3677FB24F50A6E5CCF44F0_inline(L_13, /*hidden argument*/NULL);
		if ((!(((float)L_14) > ((float)(0.0f)))))
		{
			goto IL_0094;
		}
	}
	{
		__this->set_canJump_8((bool)1);
		ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * L_15 = __this->get_jumpButton_13();
		NullCheck(L_15);
		ImageButton_set_Interactive_m2EF1F97F989694762F2FE513DE2F02B811966A3E(L_15, (bool)1, /*hidden argument*/NULL);
		RuntimeObject* L_16 = PlayerController_ClearJumpPowerBar_mC3BE30E707421A60C4A88B5ECE2638A3DC0D72D0(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_16, /*hidden argument*/NULL);
		goto IL_00d6;
	}

IL_0094:
	{
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_17 = Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B_RuntimeMethod_var);
		Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* L_18 = (Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE*)(Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE*)SZArrayNew(Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE_il2cpp_TypeInfo_var, (uint32_t)1);
		Collider2DU5BU5D_tE7ADA0C1D125B4C684675B9A026E18C3857903AE* L_19 = L_18;
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_20 = Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B_RuntimeMethod_var);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *)L_20);
		NullCheck(L_17);
		int32_t L_21 = Collider2D_GetContacts_m3AFD13FC94272B1B309E4C4CE545E70D2F00C921(L_17, L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00d6;
		}
	}
	{
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_22 = __this->get_powerbarImage_12();
		NullCheck(L_22);
		float L_23 = Image_get_fillAmount_m5FF6EE8DB33C4A219B3677FB24F50A6E5CCF44F0_inline(L_22, /*hidden argument*/NULL);
		if ((!(((float)L_23) == ((float)(0.0f)))))
		{
			goto IL_00d6;
		}
	}
	{
		__this->set_canJump_8((bool)1);
		ImageButton_t99868748211E38672C8630E7BA340D9B333EA228 * L_24 = __this->get_jumpButton_13();
		NullCheck(L_24);
		ImageButton_set_Interactive_m2EF1F97F989694762F2FE513DE2F02B811966A3E(L_24, (bool)1, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_25 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		NullCheck(L_25);
		float L_26 = Animator_get_speed_mCDF58C7C373B9B449A902B9F0974CF5D10806D08(L_25, /*hidden argument*/NULL);
		if ((!(((float)L_26) < ((float)(1.0f)))))
		{
			goto IL_0127;
		}
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_27 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		NullCheck(L_27);
		Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813(L_27, (1.0f), /*hidden argument*/NULL);
		return;
	}

IL_00f9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tBE2C6914C0452E17EFB5BFC36236C7083639A9E9_il2cpp_TypeInfo_var);
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_28 = Singleton_1_get_Instance_m5A838E74F27646695C921997228C24A7D6DB6D09(/*hidden argument*/Singleton_1_get_Instance_m5A838E74F27646695C921997228C24A7D6DB6D09_RuntimeMethod_var);
		NullCheck(L_28);
		bool L_29 = L_28->get_gameRunning_7();
		if (L_29)
		{
			goto IL_0127;
		}
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_30 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		NullCheck(L_30);
		float L_31 = Animator_get_speed_mCDF58C7C373B9B449A902B9F0974CF5D10806D08(L_30, /*hidden argument*/NULL);
		if ((!(((float)L_31) > ((float)(0.0f)))))
		{
			goto IL_0127;
		}
	}
	{
		Animator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A * L_32 = Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719(__this, /*hidden argument*/Component_GetComponent_TisAnimator_tF1A88E66B3B731DDA75A066DBAE9C55837660F5A_mEA6C8FBABE309599A828D6BB8777278BCFB28719_RuntimeMethod_var);
		NullCheck(L_32);
		Animator_set_speed_mEA558D196D84684744A642A56AFBF22F16448813(L_32, (0.0f), /*hidden argument*/NULL);
	}

IL_0127:
	{
		return;
	}
}
// System.Void PlayerController::BeginJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_BeginJump_mE70151C49F1D11CD990F21352B6BA26A18BCC208 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	{
		__this->set_poweringJump_11((bool)1);
		RuntimeObject* L_0 = PlayerController_IncreaseJumpForce_m8A72D2B104A503CD4D855DF9B7A39B099561BF9C(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::EndJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_EndJump_mD72DB42B6DF841E1545C0AA7B68054CF699B6754 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	{
		__this->set_poweringJump_11((bool)0);
		return;
	}
}
// System.Collections.IEnumerator PlayerController::IncreaseJumpForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_IncreaseJumpForce_m8A72D2B104A503CD4D855DF9B7A39B099561BF9C (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_IncreaseJumpForce_m8A72D2B104A503CD4D855DF9B7A39B099561BF9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA * L_0 = (U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA *)il2cpp_codegen_object_new(U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA_il2cpp_TypeInfo_var);
		U3CIncreaseJumpForceU3Ed__12__ctor_m05C05F617F7E7B3938699502E2F6A84B204D3D79(L_0, 0, /*hidden argument*/NULL);
		U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator PlayerController::ClearJumpPowerBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerController_ClearJumpPowerBar_mC3BE30E707421A60C4A88B5ECE2638A3DC0D72D0 (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_ClearJumpPowerBar_mC3BE30E707421A60C4A88B5ECE2638A3DC0D72D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9 * L_0 = (U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9 *)il2cpp_codegen_object_new(U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9_il2cpp_TypeInfo_var);
		U3CClearJumpPowerBarU3Ed__13__ctor_m961AC959B8647CF2B545412701E0026CE8C5C27A(L_0, 0, /*hidden argument*/NULL);
		U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter2D_m2FB7FDCCF04D10F2634F3B03BCAD0008E7F182BB (PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * __this, Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnCollisionEnter2D_m2FB7FDCCF04D10F2634F3B03BCAD0008E7F182BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t45DC963DE1229CFFC7D0B666800F0AE93688764D * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Collision2D_get_gameObject_m209F9F15585DE3F9270E0D9BFB050950AD301A5F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralEE94E3AAD2CF31058A38FDBC06701327E3A18760, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController_<ClearJumpPowerBar>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearJumpPowerBarU3Ed__13__ctor_m961AC959B8647CF2B545412701E0026CE8C5C27A (U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerController_<ClearJumpPowerBar>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearJumpPowerBarU3Ed__13_System_IDisposable_Dispose_m5357C7FAAF27222D8F128B7336AAF568940236FC (U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerController_<ClearJumpPowerBar>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CClearJumpPowerBarU3Ed__13_MoveNext_m65768125C0B3715CFD20C7F0BC5DB3E0DE87FC1D (U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_clearing_7();
		if (L_5)
		{
			goto IL_0076;
		}
	}
	{
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_clearing_7((bool)1);
		goto IL_005d;
	}

IL_002f:
	{
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_7 = V_1;
		NullCheck(L_7);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_8 = L_7->get_powerbarImage_12();
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_9 = L_8;
		NullCheck(L_9);
		float L_10 = Image_get_fillAmount_m5FF6EE8DB33C4A219B3677FB24F50A6E5CCF44F0_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_9);
		Image_set_fillAmount_m613B7AC920F2EA886AF0D931005C6CD13F89A160(L_9, ((float)il2cpp_codegen_subtract((float)L_10, (float)(0.01f))), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0056:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_005d:
	{
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_11 = V_1;
		NullCheck(L_11);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_12 = L_11->get_powerbarImage_12();
		NullCheck(L_12);
		float L_13 = Image_get_fillAmount_m5FF6EE8DB33C4A219B3677FB24F50A6E5CCF44F0_inline(L_12, /*hidden argument*/NULL);
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_002f;
		}
	}
	{
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_14 = V_1;
		NullCheck(L_14);
		L_14->set_clearing_7((bool)0);
	}

IL_0076:
	{
		return (bool)0;
	}
}
// System.Object PlayerController_<ClearJumpPowerBar>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearJumpPowerBarU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1971754CF16FC9591B619CCA742D8ACB56AA21FF (U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerController_<ClearJumpPowerBar>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CClearJumpPowerBarU3Ed__13_System_Collections_IEnumerator_Reset_m5D2FBFBA73AA1134F39C44F2106D358984DF5744 (U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CClearJumpPowerBarU3Ed__13_System_Collections_IEnumerator_Reset_m5D2FBFBA73AA1134F39C44F2106D358984DF5744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CClearJumpPowerBarU3Ed__13_System_Collections_IEnumerator_Reset_m5D2FBFBA73AA1134F39C44F2106D358984DF5744_RuntimeMethod_var);
	}
}
// System.Object PlayerController_<ClearJumpPowerBar>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CClearJumpPowerBarU3Ed__13_System_Collections_IEnumerator_get_Current_mEBA1806550FF123DA2995089AA9568B39B2572EF (U3CClearJumpPowerBarU3Ed__13_tC3C49F7C5C27A34DD3A2F751E541D4C8DA3A5BE9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController_<IncreaseJumpForce>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncreaseJumpForceU3Ed__12__ctor_m05C05F617F7E7B3938699502E2F6A84B204D3D79 (U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void PlayerController_<IncreaseJumpForce>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncreaseJumpForceU3Ed__12_System_IDisposable_Dispose_m5CFD4C9511061B1F928A1F65FD55BEA5C864DB82 (U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean PlayerController_<IncreaseJumpForce>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIncreaseJumpForceU3Ed__12_MoveNext_m3B360BAB874AE94B41DC24107D01840B845B6C3A (U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIncreaseJumpForceU3Ed__12_MoveNext_m3B360BAB874AE94B41DC24107D01840B845B6C3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00e8;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_canJump_8();
		if (!L_5)
		{
			goto IL_012a;
		}
	}
	{
		__this->set_U3CcurrentHoldU3E5__2_3((0.0f));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		__this->set_U3CjumpU3E5__3_4(L_6);
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_7 = V_1;
		NullCheck(L_7);
		L_7->set_canJump_8((bool)0);
		goto IL_00ef;
	}

IL_004e:
	{
		float L_8 = __this->get_U3CcurrentHoldU3E5__2_3();
		float L_9 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_U3CcurrentHoldU3E5__2_3(((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)(5.0f), (float)L_9)))));
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		float L_11 = __this->get_U3CcurrentHoldU3E5__2_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_10, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_11, (float)(5.0f))), (float)(5.0f))), /*hidden argument*/NULL);
		__this->set_U3CjumpU3E5__3_4(L_12);
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_13 = V_1;
		NullCheck(L_13);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_14 = L_13->get_powerbarImage_12();
		float L_15 = __this->get_U3CcurrentHoldU3E5__2_3();
		float L_16 = ExtensionMethods_Map_m6A09FE9569365F0B109871462162A839EBEAFC4B(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_15, (float)(5.0f))), (float)(5.0f))), (5.0f), (20.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		Image_set_fillAmount_m613B7AC920F2EA886AF0D931005C6CD13F89A160(L_14, L_16, /*hidden argument*/NULL);
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = L_17->get_poweringJump_11();
		if (!L_18)
		{
			goto IL_010c;
		}
	}
	{
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_19 = V_1;
		NullCheck(L_19);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_20 = L_19->get_powerbarImage_12();
		NullCheck(L_20);
		float L_21 = Image_get_fillAmount_m5FF6EE8DB33C4A219B3677FB24F50A6E5CCF44F0_inline(L_20, /*hidden argument*/NULL);
		if ((((float)L_21) >= ((float)(1.0f))))
		{
			goto IL_010c;
		}
	}
	{
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00e8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00ef:
	{
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_22 = V_1;
		NullCheck(L_22);
		bool L_23 = L_22->get_poweringJump_11();
		if (!L_23)
		{
			goto IL_010c;
		}
	}
	{
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_24 = V_1;
		NullCheck(L_24);
		Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * L_25 = L_24->get_powerbarImage_12();
		NullCheck(L_25);
		float L_26 = Image_get_fillAmount_m5FF6EE8DB33C4A219B3677FB24F50A6E5CCF44F0_inline(L_25, /*hidden argument*/NULL);
		if ((((float)L_26) < ((float)(1.0f))))
		{
			goto IL_004e;
		}
	}

IL_010c:
	{
		PlayerController_t4CE339054014370D89B89922EDC0EA2766589C85 * L_27 = V_1;
		NullCheck(L_27);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_28 = L_27->get_rb2d_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_29 = __this->get_U3CjumpU3E5__3_4();
		NullCheck(L_28);
		Rigidbody2D_AddForce_m09E1A2E24DABA5BBC613E35772AE2C1C35C6E40C(L_28, L_29, 1, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_30 = __this->get_address_of_U3CjumpU3E5__3_4();
		il2cpp_codegen_initobj(L_30, sizeof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D ));
	}

IL_012a:
	{
		return (bool)0;
	}
}
// System.Object PlayerController_<IncreaseJumpForce>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIncreaseJumpForceU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m323889AE6BCE3415643B7B3151259D0B2FAFB2AB (U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void PlayerController_<IncreaseJumpForce>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIncreaseJumpForceU3Ed__12_System_Collections_IEnumerator_Reset_mA6E5C4E0539B01AEF7A36B518D28D9149B2FBC1E (U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIncreaseJumpForceU3Ed__12_System_Collections_IEnumerator_Reset_mA6E5C4E0539B01AEF7A36B518D28D9149B2FBC1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CIncreaseJumpForceU3Ed__12_System_Collections_IEnumerator_Reset_mA6E5C4E0539B01AEF7A36B518D28D9149B2FBC1E_RuntimeMethod_var);
	}
}
// System.Object PlayerController_<IncreaseJumpForce>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CIncreaseJumpForceU3Ed__12_System_Collections_IEnumerator_get_Current_m5417C80E765D3994CBA96720F342E726860CC0A5 (U3CIncreaseJumpForceU3Ed__12_t55D25C131103630CE83C7678CFB12579931C85AA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RepeatingObjectController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatingObjectController_Awake_m589B1F1D5F9431AD872E58B283CBBA501B03290B (RepeatingObjectController_t1828C6BAE63A1910AB583F7A2908A0EB7B5D7148 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RepeatingObjectController_Awake_m589B1F1D5F9431AD872E58B283CBBA501B03290B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_0 = Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B_RuntimeMethod_var);
		__this->set_groundCollider_4(L_0);
		return;
	}
}
// System.Void RepeatingObjectController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatingObjectController_Update_mB2960B4933C9B2B584AB639B282CEBAFF1CF16E6 (RepeatingObjectController_t1828C6BAE63A1910AB583F7A2908A0EB7B5D7148 * __this, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		float L_3 = __this->get_groundHorizontalLength_6();
		if ((!(((float)L_2) < ((float)((-L_3))))))
		{
			goto IL_001f;
		}
	}
	{
		RepeatingObjectController_RepositionBackground_mF172E93A6B797F4D0E6AE3969F0A4CC4B18F86E2(__this, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void RepeatingObjectController::RepositionBackground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatingObjectController_RepositionBackground_mF172E93A6B797F4D0E6AE3969F0A4CC4B18F86E2 (RepeatingObjectController_t1828C6BAE63A1910AB583F7A2908A0EB7B5D7148 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RepeatingObjectController_RepositionBackground_mF172E93A6B797F4D0E6AE3969F0A4CC4B18F86E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		float L_0 = __this->get_groundHorizontalLength_6();
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_0), ((float)il2cpp_codegen_multiply((float)L_0, (float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_3, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = V_0;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_4, L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_1, L_7, /*hidden argument*/NULL);
		bool L_8 = __this->get_causesSpawn_5();
		if (!L_8)
		{
			goto IL_012c;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_012c;
		}
	}
	{
		V_1 = 0;
		goto IL_011b;
	}

IL_0061:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		bool L_16 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_15, _stringLiteral36A883E762D4A1748155C266A886E7DBB18EDF8A, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0097;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C_il2cpp_TypeInfo_var);
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_17 = Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA(/*hidden argument*/Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA_RuntimeMethod_var);
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_lowCount_15();
		NullCheck(L_18);
		L_18->set_lowCount_15(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
		goto IL_0101;
	}

IL_0097:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		String_t* L_23 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		String_t* L_24 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_25 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_24, _stringLiteralF235F22D8E81D65DBC3BAAC227B59ACE629D0FFF, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C_il2cpp_TypeInfo_var);
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_26 = Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA(/*hidden argument*/Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA_RuntimeMethod_var);
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_27 = L_26;
		NullCheck(L_27);
		int32_t L_28 = L_27->get_midCount_16();
		NullCheck(L_27);
		L_27->set_midCount_16(((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1)));
		goto IL_0101;
	}

IL_00cd:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_30 = V_1;
		NullCheck(L_29);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		String_t* L_32 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		String_t* L_33 = String_ToLower_m5287204D93C9DDC4DF84581ADD756D0FDE2BA5A8(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		bool L_34 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_33, _stringLiteral9235AFD3E98802411861A961AA9CF61E90C1C977, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0101;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C_il2cpp_TypeInfo_var);
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_35 = Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA(/*hidden argument*/Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA_RuntimeMethod_var);
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_36 = L_35;
		NullCheck(L_36);
		int32_t L_37 = L_36->get_highCount_17();
		NullCheck(L_36);
		L_36->set_highCount_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1)));
	}

IL_0101:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_39 = V_1;
		NullCheck(L_38);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_41 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_41, /*hidden argument*/NULL);
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_011b:
	{
		int32_t L_43 = V_1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_44 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_44);
		int32_t L_45 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_44, /*hidden argument*/NULL);
		if ((((int32_t)L_43) < ((int32_t)L_45)))
		{
			goto IL_0061;
		}
	}

IL_012c:
	{
		return;
	}
}
// System.Void RepeatingObjectController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatingObjectController__ctor_mB4C791BE189887AA9317E86D5D916D651934F985 (RepeatingObjectController_t1828C6BAE63A1910AB583F7A2908A0EB7B5D7148 * __this, const RuntimeMethod* method)
{
	{
		__this->set_groundHorizontalLength_6((24.5f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScoreDetector::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDetector_OnTriggerEnter2D_mC70C1E8183931E607F53E8871CDAE9FBACCE56F6 (ScoreDetector_tAD5BB67AC0160069A3D0A8FBAA2B1077E8597C2D * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreDetector_OnTriggerEnter2D_mC70C1E8183931E607F53E8871CDAE9FBACCE56F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = GameObject_get_layer_m0DE90D8A3D3AA80497A3A80FBEAC2D207C16B9C8(L_1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tBE2C6914C0452E17EFB5BFC36236C7083639A9E9_il2cpp_TypeInfo_var);
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_3 = Singleton_1_get_Instance_m5A838E74F27646695C921997228C24A7D6DB6D09(/*hidden argument*/Singleton_1_get_Instance_m5A838E74F27646695C921997228C24A7D6DB6D09_RuntimeMethod_var);
		int32_t L_4 = __this->get_pointValue_4();
		NullCheck(L_3);
		GameController_UpdateScore_m1ACB3479EB5EDB5E57A3EF56DF692BE836FB5F59(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void ScoreDetector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDetector__ctor_m601FBEDC65A0F2C2714D0E9415B38DCD7EC76E6E (ScoreDetector_tAD5BB67AC0160069A3D0A8FBAA2B1077E8597C2D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScrollingObjectController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingObjectController_Start_m997B3215ECF65FEDFA44032C7CD1B95DCBF2ABDD (ScrollingObjectController_tFCF317A2D7546A0AFD816DE525D5CF9D5CC1A96C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollingObjectController_Start_m997B3215ECF65FEDFA44032C7CD1B95DCBF2ABDD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		BoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87 * L_0 = Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_tA3DD87FE6F65C39F0A81CDB4BEC0EDB370486E87_mD4BABFD1DC7C524ACC853125D82D011DC1CC5E5B_RuntimeMethod_var);
		NullCheck(L_0);
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_1 = Collider2D_get_bounds_mB13BA419529917B7F97F5EFC599D8D92B0603359(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Bounds_get_extents_mBA4B2196036DD5A858BDAD53BC71A778B41841C9((Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 *)(&V_0), /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		__this->set_offset_5(L_3);
		return;
	}
}
// System.Void ScrollingObjectController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingObjectController_Update_m24F05C5B1E345CD04D2A92C0043F334DAACC470C (ScrollingObjectController_tFCF317A2D7546A0AFD816DE525D5CF9D5CC1A96C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollingObjectController_Update_m24F05C5B1E345CD04D2A92C0043F334DAACC470C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tBE2C6914C0452E17EFB5BFC36236C7083639A9E9_il2cpp_TypeInfo_var);
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_0 = Singleton_1_get_Instance_m5A838E74F27646695C921997228C24A7D6DB6D09(/*hidden argument*/Singleton_1_get_Instance_m5A838E74F27646695C921997228C24A7D6DB6D09_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1 = L_0->get_gameRunning_7();
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_7, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_8, L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_speed_6();
		float L_12 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Vector2_Lerp_m85DD66409D128B4F175627F89FA9D8751B75589F(L_5, L_10, ((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_13, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_2, L_14, /*hidden argument*/NULL);
	}

IL_0057:
	{
		bool L_15 = __this->get_autoDestruct_4();
		if (!L_15)
		{
			goto IL_00d7;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		float L_19 = __this->get_deletePoint_7();
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_20 = __this->get_obstacleType_8();
		V_0 = L_20;
		int32_t L_21 = V_0;
		switch (L_21)
		{
			case 0:
			{
				goto IL_0092;
			}
			case 1:
			{
				goto IL_00a6;
			}
			case 2:
			{
				goto IL_00ba;
			}
		}
	}
	{
		goto IL_00cc;
	}

IL_0092:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C_il2cpp_TypeInfo_var);
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_22 = Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA(/*hidden argument*/Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA_RuntimeMethod_var);
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24 = L_23->get_lowCount_15();
		NullCheck(L_23);
		L_23->set_lowCount_15(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)));
		goto IL_00cc;
	}

IL_00a6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C_il2cpp_TypeInfo_var);
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_25 = Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA(/*hidden argument*/Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA_RuntimeMethod_var);
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_26 = L_25;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_midCount_16();
		NullCheck(L_26);
		L_26->set_midCount_16(((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1)));
		goto IL_00cc;
	}

IL_00ba:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Singleton_1_tAD33BE6FBFAF8FD9AC0584252CB287B59B428A2C_il2cpp_TypeInfo_var);
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_28 = Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA(/*hidden argument*/Singleton_1_get_Instance_m76BABB85FC6CA40E593A55DAA0A3D1AA2CAB3AFA_RuntimeMethod_var);
		ObstacleController_t053FACE707297E0557C1E5D8381E01B414CAD374 * L_29 = L_28;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_highCount_17();
		NullCheck(L_29);
		L_29->set_highCount_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)));
	}

IL_00cc:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_31, /*hidden argument*/NULL);
	}

IL_00d7:
	{
		return;
	}
}
// System.Void ScrollingObjectController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingObjectController__ctor_m510EB2C19665C7279A258419FE35F705AB782286 (ScrollingObjectController_tFCF317A2D7546A0AFD816DE525D5CF9D5CC1A96C * __this, const RuntimeMethod* method)
{
	{
		__this->set_speed_6((1.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* Achievement_get_Id_m06A23EAD32C162BC0C8488F6FEB9BCD77FBF8804_inline (Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mId_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Achievement_get_IsIncremental_m028E31801A7D4C30F2C46690B3AA54B52ADB2DB0_inline (Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_mIsIncremental_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Achievement_get_TotalSteps_m18E7561B2CE4F8214FA9A1CE5249E671FC0ECC7E_inline (Achievement_tD205CF044C9CE8F63327AA9C6C6FBBE5BB899D09 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mTotalSteps_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesScore_get_leaderboardID_m6B5C53D237D30A5D52265BD384FF8B3EAB18915B_inline (PlayGamesScore_tDABC5E6393D5259B9CD2E8241529CBC161C0A9AD * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mLbId_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* PlayGamesUserProfile_get_AvatarURL_mAB1A07F78BC9B6D64D039603F4FDC8E471E8157D_inline (PlayGamesUserProfile_t6C16C949C8EDAAF9BEA8604C591FB3CD02BD157A * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mAvatarUrl_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * StringComparer_get_Ordinal_m1F38FBAB170DF80D33FE2A849D30FF2E314D9FDB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringComparer_get_Ordinal_m1F38FBAB170DF80D33FE2A849D30FF2E314D9FDBAssemblyU2DCSharp4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_il2cpp_TypeInfo_var);
		StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE * L_0 = ((StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_StaticFields*)il2cpp_codegen_static_fields_for(StringComparer_t588BC7FEF85D6E7425E0A8147A3D5A334F1F82DE_il2cpp_TypeInfo_var))->get__ordinal_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * Image_get_sprite_m642D753672A8CBCEB67950914B44EF34C62DD137_inline (Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * __this, const RuntimeMethod* method)
{
	{
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_0 = __this->get_m_Sprite_35();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float Image_get_fillAmount_m5FF6EE8DB33C4A219B3677FB24F50A6E5CCF44F0_inline (Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_m_FillAmount_41();
		return L_0;
	}
}
