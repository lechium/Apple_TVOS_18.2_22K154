//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBSUserPresentationRequest;
@protocol OS_dispatch_queue;

@interface CDRequesterViewService : NSObject
{
    PBSUserPresentationRequest *_request;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _dismissedHandler;	// 24 = 0x18
}

+ (id)learnMoreViewServiceWithRequest:(id)arg1;	// IMP=0x0040000000008c81
+ (id)storeAuthenticationViewServiceWithRequest:(id)arg1;	// IMP=0x0010000000008a30
+ (id)restrictedAccessViewServiceWithRequest:(id)arg1;	// IMP=0x0010000000008799
+ (id)sharingViewServiceWithRequest:(id)arg1;	// IMP=0x00100000000085f3
+ (id)systemAuthenticationViewServiceWithSystemAuthenticationRequest:(id)arg1;	// IMP=0x00100000000083fb
+ (id)appSignInViewServiceWithRequest:(id)arg1 applicationBundleIdentifier:(id)arg2 authKitAccount:(id)arg3;	// IMP=0x00100000000081c6
- (void).cxx_destruct;	// IMP=0x002000000000a1b6
@property(copy, nonatomic) CDUnknownBlockType dismissedHandler; // @synthesize dismissedHandler=_dismissedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)sessionFailed:(id)arg1;	// IMP=0x0010000000009b4c
- (void)sessionFinished;	// IMP=0x00100000000099a3
- (void)deviceStartedAuthentication:(id)arg1;	// IMP=0x00100000000096e0
- (void)deviceTappedNotification:(id)arg1;	// IMP=0x001000000000941d
- (void)fetchAppIconWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000091d1
- (void)invalidate;	// IMP=0x001000000000906a
- (void)activate;	// IMP=0x0010000000008ed2
- (id)_initWithRequest:(id)arg1;	// IMP=0x0010000000008140

@end

