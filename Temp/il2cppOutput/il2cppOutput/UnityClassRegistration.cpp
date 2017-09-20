struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

}

void RegisterAllClasses()
{
	//Total: 64 classes
	//0. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//6. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//7. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//8. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//9. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//10. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//11. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//12. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//13. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//14. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//15. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//16. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//17. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//18. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//19. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//20. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//21. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//22. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//23. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//24. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//25. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//26. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//27. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//28. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//29. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//30. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//31. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//32. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//33. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//34. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//35. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//36. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//37. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//38. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//39. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//40. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//41. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//42. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//43. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//44. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//45. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//46. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//47. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//48. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//49. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//50. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//51. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//52. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//53. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//54. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//55. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//56. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//57. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//58. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//59. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//60. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//61. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//62. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//63. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

}
