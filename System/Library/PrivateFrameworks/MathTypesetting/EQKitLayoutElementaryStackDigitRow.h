//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EQKitLayoutElementaryStackDigitRow : NSObject
{
    NSArray *mColumnBoxes;	// 8 = 0x8
    long long mAlignmentShift;	// 16 = 0x10
    unsigned long long mFirstColumnIndex;	// 24 = 0x18
    double mFollowingSpace;	// 32 = 0x20
}

@property(readonly, nonatomic) double followingSpace; // @synthesize followingSpace=mFollowingSpace;
@property(nonatomic) unsigned long long firstColumnIndex; // @synthesize firstColumnIndex=mFirstColumnIndex;
@property(readonly, nonatomic) long long alignmentShift; // @synthesize alignmentShift=mAlignmentShift;
- (id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(__wrap_iter_8fb6ff7c)arg2 iterMax:(__wrap_iter_8fb6ff7c)arg3 previousRow:(id)arg4 layoutManager:(const void *)arg5;	// IMP=0x0000000000033490
- (id)p_crossoutDigitBox:(id)arg1 crossout:(int)arg2 layoutManager:(const void *)arg3;	// IMP=0x0000000000033326
@property(readonly, nonatomic) _Bool spansStack;
- (void)populateMaxColumnWidths:(__wrap_iter_8fb6ff7c)arg1;	// IMP=0x00000000000331fb
@property(readonly, nonatomic) unsigned long long columnCount;
- (void)dealloc;	// IMP=0x00000000000331aa
- (id)initWithChildren:(id)arg1 decimalPoint:(unsigned long long)arg2 position:(long long)arg3 followingSpace:(double)arg4;	// IMP=0x0000000000033132

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

