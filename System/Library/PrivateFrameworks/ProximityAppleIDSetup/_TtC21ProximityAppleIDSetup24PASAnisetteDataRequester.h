//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/SwiftNativeNSObject.h>

@class MISSING_TYPE, NSData, NSString, NSURLRequest;

__attribute__((visibility("hidden")))
@interface _TtC21ProximityAppleIDSetup24PASAnisetteDataRequester : SwiftNativeNSObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *messageSessionProvider;	// 112 = 0x70
}

- (id)init;	// IMP=0x00000000000ada20
- (void)fetchPeerAttestationDataForRequest:(NSURLRequest *)arg1 completion:(void (^)(AKAttestationData *, NSError *))arg2;	// IMP=0x00000000000ad730
- (void)legacyAnisetteDataForDSID:(NSString *)arg1 withCompletion:(void (^)(AKAnisetteData *, NSError *))arg2;	// IMP=0x00000000000accf0
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(void (^)(AKAnisetteData *, NSError *))arg2;	// IMP=0x00000000000ac570
- (void)eraseAnisetteWithCompletion:(void (^)(_Bool, NSError *))arg1;	// IMP=0x00000000000abc10
- (void)syncAnisetteWithSIMData:(NSData *)arg1 completion:(void (^)(_Bool, NSError *))arg2;	// IMP=0x00000000000ab620
- (void)provisionAnisetteWithCompletion:(void (^)(_Bool, NSError *))arg1;	// IMP=0x00000000000ab000

@end

