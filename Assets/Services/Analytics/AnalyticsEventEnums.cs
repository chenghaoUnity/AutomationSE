namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// The type of in-game store. 
    /// </summary>
    public enum StoreType
    {
        /// <summary>Contains items purchasable with in-game currency only.</summary>
        Soft = 0,
        /// <summary>Contains items purchasable with real-world money.</summary>
        Premium,
    }

    /// <summary>
    /// The way in which an item, consumable, or currency was acquired.
    /// </summary>
    public enum AcquisitionType
    {
        /// <summary>Not directly purchased with real-world money.</summary>
        Soft = 0,
        /// <summary>Purchased with real-world money.</summary>
        Premium,
    }

    /// <summary>
    /// The source through which an item, consumable, or currency was acquired.
    /// </summary>
    public enum AcquisitionSource
    {
        /// <summary>No available source, or source unknown.</summary>
        None = 0,
        /// <summary>Purchased using currency or consumable resources.</summary>
        Store,
        /// <summary>Awarded through an achievement or other in-game interaction.</summary>
        Earned,
        /// <summary>Granted as a promotion of some in-game feature or through cross promotion.</summary>
        Promotion,
        /// <summary>Granted without motive other than good feelings.</summary>
        Gift,
        /// <summary>Granted as a reward for watching an advertisement.</summary>
        RewardedAd,
        /// <summary>Granted periodically.</summary>
        TimedReward,
        /// <summary>Granted through social engagement.</summary>
        SocialReward,
    }

    /// <summary>
    /// The advertising or mediation network service provider.
    /// </summary>
    public enum AdvertisingNetwork
    {
        None = 0,
        Aarki,
        AdAction,
        AdapTv,
        Adcash,
        AdColony,
        AdMob,
        AerServ,
        Airpush,
        Altrooz,
        Ampush,
        AppleSearch,
        AppLift,
        AppLovin,
        Appnext,
        AppNexus,
        Appoday,
        Appodeal,
        AppsUnion,
        Avazu,
        BlueStacks,
        Chartboost,
        ClickDealer,
        CPAlead,
        CrossChannel,
        CrossInstall,
        Epom,
        Facebook,
        Fetch,
        Fiksu,
        Flurry,
        Fuse,
        Fyber,
        Glispa,
        Google,
        GrowMobile,
        HeyZap,
        HyperMX,
        Iddiction,
        IndexExchange,
        InMobi,
        Instagram,
        Instal,
        Ipsos,
        IronSource,
        Jirbo,
        Kimia,
        Leadbolt,
        Liftoff,
        Manage,
        Matomy,
        MediaBrix,
        MillenialMedia,
        Minimob,
        MobAir,
        MobileCore,
        Mobobeat,
        Mobusi,
        Mobvista,
        MoPub,
        Motive,
        Msales,
        NativeX,
        OpenX,
        Pandora,
        PropellerAds,
        Revmob,
        RubiconProject,
        SiriusAd,
        Smaato,
        SponsorPay,
        SpotXchange,
        StartApp,
        Tapjoy,
        Taptica,
        Tremor,
        TrialPay,
        Twitter,
        UnityAds,
        Vungle,
        Yeahmobi,
        YuMe,
    }

    /// <summary>
    /// The authorization network used with in-game login sessions.
    /// </summary>
    public enum AuthorizationNetwork
    {
        None = 0,
        Internal,
        Facebook,
        Twitter,
        Google,
        GameCenter,
    }

    /// <summary>
    /// The social network used with social engagements.
    /// </summary>
    public enum SocialNetwork
    {
        None = 0,
        Facebook,
        Twitter,
        Instagram,
        GooglePlus,
        Pinterest,
        WeChat,
        Weibo,
        QQ,
        Zhihu,
        VK,
        OK_ru,
    }

    /// <summary>
    /// The media type or mode used for social engagements.
    /// </summary>
    public enum ShareType
    {
        None = 0,
        TextOnly,
        Image,
        Video,
        Invite,
        Achievement,
    }

    /// <summary>
    /// The name of the in-game screen or interface type.
    /// </summary>
    public enum ScreenName
    {
        None = 0,
        MainMenu,
        Settings,
        Map,
        Lose,
        Win,
        Credits,
        Title,
        IAPPromo,
        CrossPromo,
        FeaturePromo,
        Hint,
        Pause,
        Inventory,
        Leaderboard,
        Achievements,
        Lobby,
    }
}