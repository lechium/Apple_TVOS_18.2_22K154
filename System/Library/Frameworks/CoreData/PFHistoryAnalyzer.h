//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFHistoryAnalyzerOptions;

__attribute__((visibility("hidden")))
@interface PFHistoryAnalyzer : NSObject
{
    PFHistoryAnalyzerOptions *_options;	// 8 = 0x8
}

- (_Bool)processTransaction:(id)arg1 withContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002e3354
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)arg1;	// IMP=0x00000000002e3325
- (void)dealloc;	// IMP=0x00000000002e28e8
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000002e287e
- (id)init;	// IMP=0x00000000002e286a

@end

