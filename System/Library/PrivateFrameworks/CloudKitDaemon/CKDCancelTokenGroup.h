//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CKDCancelTokenGroup : NSObject
{
    NSMutableArray *_cancelTokens;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003de74e
@property(retain, nonatomic) NSMutableArray *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
- (void)cancel;	// IMP=0x00000000003de564
- (void)removeAllCancelTokens;	// IMP=0x00000000003de4d3
- (void)removeCancelToken:(id)arg1;	// IMP=0x00000000003de41b
- (void)addCancelToken:(id)arg1 withOperation:(id)arg2;	// IMP=0x00000000003de306
- (id)init;	// IMP=0x00000000003de2b0

@end

