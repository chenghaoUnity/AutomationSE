using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics.Experimental;

public class SEDemoMonetization : SEDemo 
{
    public string adPlacementId;

    int m_CurrencyBalance;

    public void AdComplete ()
    {
        DebugSend<AdCompletePayload>(
            AdCompletePayload.CreateInstance(adPlacementId)
        );
    }

    public void AdOffer ()
    {
        DebugSend<AdOfferPayload>(
            AdOfferPayload.CreateInstance(adPlacementId)
        );
    }

    public void AdSkip ()
    {
        DebugSend<AdSkipPayload>(
            AdSkipPayload.CreateInstance(adPlacementId)
        );
    }

    public void AdStart ()
    {
        DebugSend<AdStartPayload>(
            AdStartPayload.CreateInstance(adPlacementId)
        );
    }

    public void CurrencyPurchase ()
    {
        DebugSend<CurrencyPurchasedPayload>(
            CurrencyPurchasedPayload.CreateInstance("test_item", 1, ++m_CurrencyBalance, "test_store", "test_coin")
        );
    }

    public void CurrencySpend ()
    {
        DebugSend<CurrencySpentPayload>(
            CurrencySpentPayload.CreateInstance("test_item", 1, ++m_CurrencyBalance, "test_store", "test_coin")
        );
    }

    public void PostAdAction ()
    {
        DebugSend<PostAdActionPayload>(
            PostAdActionPayload.CreateInstance(adPlacementId)
        );
    }

    public void StoreItemClick ()
    {
        DebugSend<StoreItemClickedPayload>(
            StoreItemClickedPayload.CreateInstance("test_item")
        );
    }

    public void StoreOpen ()
    {
        DebugSend<StoreOpenedPayload>(
            StoreOpenedPayload.CreateInstance("test_store")
        );
    }
}
