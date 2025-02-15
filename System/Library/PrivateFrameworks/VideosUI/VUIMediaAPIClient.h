//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMediaTokenService, AMSURLSession, NSString;

__attribute__((visibility("hidden")))
@interface VUIMediaAPIClient : NSObject
{
    AMSURLSession *_session;	// 8 = 0x8
    AMSMediaTokenService *_tokenService;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00600000001553d6
+ (id)getPlatformClientIdentifier;	// IMP=0x00600000001553c9
+ (void)initializeWithAppleTVClientIdentifier;	// IMP=0x00600000001552d8
- (void).cxx_destruct;	// IMP=0x0000000000155a88
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain, nonatomic) AMSMediaTokenService *tokenService; // @synthesize tokenService=_tokenService;
@property(retain, nonatomic) AMSURLSession *session; // @synthesize session=_session;
- (id)_createTokenServiceWithSession:(id)arg1;	// IMP=0x0000000000155972
- (id)_createSession;	// IMP=0x000000000015586f
- (void)fetchContentForUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000015549f
- (id)initWithClientIdentifier:(id)arg1;	// IMP=0x000000000015541a

@end

