//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, SEMProvisionalResourceManager, SEMSkitWrapper;

@interface SEMSkitReader : NSObject
{
    NSURL *_directoryURL;	// 8 = 0x8
    NSString *_description;	// 16 = 0x10
    SEMProvisionalResourceManager *_resourceManager;	// 24 = 0x18
    SEMSkitWrapper *_skit;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x0010000000048ede
- (void).cxx_destruct;	// IMP=0x0000000000049eaa
- (id)matchSpans:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000049a24
- (void)prewarm;	// IMP=0x00000000000498ac
- (_Bool)isEmpty;	// IMP=0x00000000000498a4
- (id)indexLocale;	// IMP=0x00000000000497c4
- (_Bool)deactivate;	// IMP=0x00000000000496ce
- (CDUnknownBlockType)_deactivationBlock;	// IMP=0x0000000000049518
- (CDUnknownBlockType)_activationBlock;	// IMP=0x000000000004936e
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000492ed
- (id)init;	// IMP=0x0000000000049289
- (id)initWithSkitDirectoryURL:(id)arg1 description:(id)arg2 lifespan:(double)arg3;	// IMP=0x0000000000048f21
- (id)initWithSkitDirectoryURL:(id)arg1 description:(id)arg2;	// IMP=0x0000000000048f07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

