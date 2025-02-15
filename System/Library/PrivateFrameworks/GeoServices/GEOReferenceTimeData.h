//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEOReferenceTimeData : NSObject
{
    double _refTime;	// 8 = 0x8
    double _refError;	// 16 = 0x10
    double _kernTime;	// 24 = 0x18
    struct timeval _kernBoottime;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000108de79
@property(readonly, nonatomic) struct timeval kernBootTime; // @synthesize kernBootTime=_kernBoottime;
@property(readonly, nonatomic) double kernTime; // @synthesize kernTime=_kernTime;
@property(readonly, nonatomic) double refError; // @synthesize refError=_refError;
@property(readonly, nonatomic) double refTime; // @synthesize refTime=_refTime;
- (id)description;	// IMP=0x000000000108e18e
- (double)currentReferenceTime;	// IMP=0x000000000108e091
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000108dfd5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000108def4
- (id)initWithRefTime:(double)arg1 refError:(double)arg2 kernTime:(double)arg3 bootTime:(struct timeval)arg4;	// IMP=0x000000000108de81

@end

