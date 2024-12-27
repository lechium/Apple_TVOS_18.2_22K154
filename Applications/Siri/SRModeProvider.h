//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SASRequestOptions, SRModeSystemState;

@interface SRModeProvider : NSObject
{
    SRModeSystemState *_systemState;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001663b
- (unsigned long long)internalModeOverride;	// IMP=0x001000000001649e
- (void)_setSystemState:(id)arg1;	// IMP=0x001000000001648d
@property(retain, nonatomic) SASRequestOptions *requestOptions;
@property(nonatomic) _Bool userTouchedSnippet;
- (_Bool)displayOnlyModeForInterstitialsAndErrors;	// IMP=0x0010000000016104
- (unsigned long long)_modeForSiriSettings;	// IMP=0x001000000001604e
- (unsigned long long)currentMode;	// IMP=0x0010000000015dbb
- (id)init;	// IMP=0x0010000000015d65

@end

