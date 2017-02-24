namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Store type.
    /// </summary>
    public enum StoreType
    {
        Soft = 0,
        Premium,
    }

    /// <summary>
    /// Acquisition type.
    /// </summary>
    public enum AcquisitionType
    {
        Soft = 0,
        Premium,
    }

    /// <summary>
    /// Acquisition source.
    /// </summary>
    public enum AcquisitionSource
    {
        None = 0,
        Store,
        Earned,
        Promotion,
        Gift,
        RewardedAd,
        TimedReward,
        SocialReward,
    }

    /// <summary>
    /// Advertising network.
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
    /// Authorization network.
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
    /// Social network.
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
    /// Share type.
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
    /// Screen name.
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