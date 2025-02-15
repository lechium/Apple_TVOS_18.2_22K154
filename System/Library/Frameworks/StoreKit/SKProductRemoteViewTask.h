//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSExtension, NSMutableArray, NSString, NSURL, SKProductPageRemoteViewController, SKRemoteProductViewController, SKStoreProductViewController, ServiceCardContainerViewController, _UIResilientRemoteViewContainerViewController;
@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface SKProductRemoteViewTask : NSObject
{
    _Bool _isClientEntitled;	// 8 = 0x8
    _Bool _isAskToBuy;	// 9 = 0x9
    NSString *_extensionID;	// 16 = 0x10
    _Bool _isFetchingExtension;	// 24 = 0x18
    _Bool _isPreview;	// 25 = 0x19
    _Bool _didLoad;	// 26 = 0x1a
    _Bool _visibleInClientWindow;	// 27 = 0x1b
    NSString *_logKey;	// 32 = 0x20
    NSString *_hostApplicationOverride;	// 40 = 0x28
    NSDictionary *_cachedParameters;	// 48 = 0x30
    NSDictionary *_lookupResult;	// 56 = 0x38
    NSError *_lookupError;	// 64 = 0x40
    NSURL *_deepLinkURL;	// 72 = 0x48
    NSExtension *_productPageExtension;	// 80 = 0x50
    id <NSCopying> _extensionRequest;	// 88 = 0x58
    NSMutableArray *_entitledConfigurationActions;	// 96 = 0x60
    NSMutableArray *_configurationActions;	// 104 = 0x68
    _UIResilientRemoteViewContainerViewController *_extensionRemoteContainerViewController;	// 112 = 0x70
    SKProductPageRemoteViewController *_extensionRemoteViewController;	// 120 = 0x78
    ServiceCardContainerViewController *_extensionRemoteCardContainerViewController;	// 128 = 0x80
    SKRemoteProductViewController *_uiServiceRemoteViewController;	// 136 = 0x88
    SKStoreProductViewController *_storeController;	// 144 = 0x90
}

+ (id)_unknownErrorWithUserInfo:(id)arg1;	// IMP=0x00100000000325f0
+ (id)_unavailableErrorWithUserInfo:(id)arg1;	// IMP=0x0010000000032594
- (void).cxx_destruct;	// IMP=0x0000000000032649
- (void)finishImmediately;	// IMP=0x0000000000032514
- (void)setAskToBuy:(_Bool)arg1;	// IMP=0x0000000000032359
- (void)setUsageContext:(id)arg1;	// IMP=0x00000000000321b0
- (void)setScriptContextDictionary:(id)arg1;	// IMP=0x0000000000032007
- (void)setShowsStoreButton:(id)arg1;	// IMP=0x0000000000031e47
- (void)setProductPageStyle:(id)arg1;	// IMP=0x0000000000031c9e
- (void)setPromptString:(id)arg1;	// IMP=0x0000000000031af5
- (void)setShowsRightBarButton:(_Bool)arg1;	// IMP=0x000000000003193c
- (void)setRightBarButtonTitle:(id)arg1;	// IMP=0x0000000000031793
- (void)setCancelButtonTitle:(id)arg1;	// IMP=0x00000000000315ea
- (id)_hostApplicationIdentifier;	// IMP=0x000000000003157b
- (void)setHostBundleIdentifier:(id)arg1;	// IMP=0x000000000003156a
- (void)setClientIdentifier:(id)arg1;	// IMP=0x00000000000313c1
- (void)setAffiliateIdentifier:(id)arg1;	// IMP=0x0000000000031218
- (void)setAdditionalBuyParameters:(id)arg1;	// IMP=0x000000000003106f
- (void)loadProductWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030bc2
- (void)loadProductWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030b33
- (void)loadProductWithPageDictionary:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030aa4
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000030a07
- (void)productPageRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;	// IMP=0x0000000000030960
- (void)productPageRemoteViewController:(id)arg1 userDidInteractWithProduct:(unsigned long long)arg2;	// IMP=0x0000000000030859
- (void)productPageRemoteViewControllerLoadDidFinish:(id)arg1;	// IMP=0x0000000000030739
- (void)productPageRemoteViewController:(id)arg1 finishWithResult:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000030649
- (void)_finishWithResult:(long long)arg1;	// IMP=0x0000000000030459
- (id)_productIDFromParameters:(id)arg1;	// IMP=0x00000000000302fb
- (id)_keyProfileForProductLookup;	// IMP=0x00000000000302df
- (void)_killExtensionIfNecessary;	// IMP=0x000000000003021c
- (void)_showExtensionFromUIService;	// IMP=0x000000000002fefa
- (void)_didReceiveExtensionRemoteViewController:(id)arg1;	// IMP=0x000000000002fb5e
- (void)_showExtensionWithID:(id)arg1;	// IMP=0x000000000002f60b
- (void)_addChildController:(id)arg1 toController:(id)arg2;	// IMP=0x000000000002f489
- (void)_loadUIServiceIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ef3a
- (void)_showErrorController;	// IMP=0x000000000002edac
- (_Bool)_isProductUnavailableError:(id)arg1;	// IMP=0x000000000002ed16
- (_Bool)_isViewControllerDescendant:(id)arg1 ofViewController:(id)arg2;	// IMP=0x000000000002ec5f
- (void)_displayItemIfNeeded;	// IMP=0x000000000002e940
- (void)_executeConfigurationActionsForExtension:(id)arg1;	// IMP=0x000000000002e6c7
- (void)_executeConfigurationActionsForUIService:(id)arg1;	// IMP=0x000000000002e46c
- (void)_addConfigurationAction:(CDUnknownBlockType)arg1 needsEntitlement:(_Bool)arg2;	// IMP=0x000000000002e1fc
- (void)setVisibleInClientWindow:(id)arg1;	// IMP=0x000000000002e0ea
- (void)setPreview:(id)arg1;	// IMP=0x000000000002df1d
- (void)setPresentationStyle:(id)arg1;	// IMP=0x000000000002de6a
- (void)storeProductViewControllerWillDismiss;	// IMP=0x000000000002dcdc
- (void)storeProductViewControllerWillDisappear;	// IMP=0x000000000002dba6
- (long long)extensionControllerState;	// IMP=0x000000000002db80
- (void)storeProductViewControllerDidAppear;	// IMP=0x000000000002db6e
- (void)storeProductViewControllerWillAppear;	// IMP=0x000000000002db5c
- (void)lookupProductWithParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002d54c
- (void)_dismissProductViewControllerWithResult:(long long)arg1;	// IMP=0x000000000002d3f5
- (void)dealloc;	// IMP=0x000000000002d2ff
- (id)initWithStoreController:(id)arg1;	// IMP=0x000000000002d0e1
- (void)performLookupWithURL:(NSURL *)arg1 logKey:(NSString *)arg2 keyProfile:(NSString *)arg3 completionHandler:(void (^)(SKProductLookupResponse *, NSError *))arg4;	// IMP=0x00000000000d14bd
- (void)performLookupWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 logKey:(NSString *)arg3 keyProfile:(NSString *)arg4 completionHandler:(void (^)(SKProductLookupResponse *, NSError *))arg5;	// IMP=0x00000000000cf216

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

