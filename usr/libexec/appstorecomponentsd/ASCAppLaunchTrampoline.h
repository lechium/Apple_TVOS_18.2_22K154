//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol ASCAppLaunchTrampolineWorkspace;

@interface ASCAppLaunchTrampoline : NSObject
{
    NSObject<ASCAppLaunchTrampolineWorkspace> *_workspace;	// 8 = 0x8
}

+ (id)log;	// IMP=0x00200000000057e9
- (void);	// IMP=0x0020000000007536
@property(readonly, nonatomic) NSObject<ASCAppLaunchTrampolineWorkspace> *workspace; // @synthesize workspace=_workspace;
- (id)productPageURLForAdamId:(id)arg1 deeplink:(id)arg2 eventId:(id)arg3 encodedMetrics:(id)arg4 sourceApplication:(id)arg5;	// IMP=0x0010000000007246
- (id)productPageURLForAdamId:(id)arg1 eventId:(id)arg2 encodedMetrics:(id)arg3 sourceApplication:(id)arg4;	// IMP=0x001000000000721c
- (id)productPageURLForAdamId:(id)arg1 eventId:(id)arg2 encodedMetrics:(id)arg3;	// IMP=0x0010000000007207
- (id)productPageURLForAdamId:(id)arg1 eventId:(id)arg2;	// IMP=0x00100000000071f2
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2 universalLinkRequired:(_Bool)arg3 workspace:(id)arg4;	// IMP=0x0010000000006f3c
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2 workspace:(id)arg3;	// IMP=0x0010000000006c8c
- (id)handleURL:(id)arg1 workspace:(id)arg2;	// IMP=0x0010000000005958
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2 universalLinkRequired:(_Bool)arg3;	// IMP=0x0010000000005942
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2;	// IMP=0x001000000000592c
- (id)handleURL:(id)arg1;	// IMP=0x0010000000005916
- (id)initWithWorkspace:(id)arg1;	// IMP=0x001000000000589f
- (id)init;	// IMP=0x0010000000005845

@end

