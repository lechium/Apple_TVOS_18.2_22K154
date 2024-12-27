//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE, NSString, PFFairPlayAsset, PFFairPlayKeyResponseData;

@interface _TtC18PodcastsFoundation27ICContentFairPlayKeySession : _TtCs12_SwiftObject
{
    MISSING_TYPE *id;	// 16 = 0x10
    MISSING_TYPE *asset;	// 32 = 0x20
    MISSING_TYPE *bypassCache;	// 40 = 0x28
    MISSING_TYPE *keyResponseData;	// 48 = 0x30
    MISSING_TYPE *keyStore;	// 56 = 0x38
    MISSING_TYPE *requestContext;	// 64 = 0x40
    MISSING_TYPE *keyCertificateURL;	// 0 = 0x0
    MISSING_TYPE *urlConfiguration;	// 0 = 0x0
    MISSING_TYPE *pendingProcessCompletion;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_delegateWrapper;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_logPrefix;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_session;	// 0 = 0x0
}

- (void)stopAndInvalidateKeysWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003d74c0
- (void)renewKey;	// IMP=0x00000000003d73e0
- (void)processKeyWith:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003d70b0
- (void)deregister;	// IMP=0x00000000003d6fa0
- (void)register;	// IMP=0x00000000003d6f20
- (void)resumeAutomaticKeyRenewal;	// IMP=0x00000000003d6e90
- (void)pauseAutomaticKeyRenewal;	// IMP=0x00000000003d6e40
@property(nonatomic, retain) PFFairPlayKeyResponseData *keyResponseData; // @synthesize keyResponseData;
@property(nonatomic, readonly) NSString *keyStoreFilePath;
@property(nonatomic) _Bool bypassCache; // @synthesize bypassCache;
@property(nonatomic, readonly) PFFairPlayAsset *asset; // @synthesize asset;
@property(nonatomic, readonly) NSString *id;

@end

