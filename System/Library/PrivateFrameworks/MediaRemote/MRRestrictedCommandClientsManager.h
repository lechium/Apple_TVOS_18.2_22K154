//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MRRestrictedCommandClientsManager : NSObject
{
    NSArray *_lastAcceptedTokens;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x00600000001e1aa7
- (void).cxx_destruct;	// IMP=0x00000000001e203a
@property(retain, nonatomic) NSArray *lastAcceptedTokens; // @synthesize lastAcceptedTokens=_lastAcceptedTokens;
- (id)_restrictCommandClientsTo:(id)arg1;	// IMP=0x00000000001e1e98
- (void)republishStateIfNeeded;	// IMP=0x00000000001e1c74
- (id)restrictCommandClientsTo:(id)arg1;	// IMP=0x00000000001e1afc

@end

