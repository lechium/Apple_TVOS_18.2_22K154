//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _IDSCurrentServerTimeProvider : NSObject
{
    id _apsConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001e37fd
@property(readonly, nonatomic) id apsConnection; // @synthesize apsConnection=_apsConnection;
- (unsigned long long)serverTimeInNanoSeconds;	// IMP=0x00000000001e3716
- (_Bool)isAccurate;	// IMP=0x00000000001e3700
- (id)init;	// IMP=0x00000000001e35b4

@end

