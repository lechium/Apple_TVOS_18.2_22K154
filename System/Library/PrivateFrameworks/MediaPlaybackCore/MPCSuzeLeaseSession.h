//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSuzeLeaseSession;

__attribute__((visibility("hidden")))
@interface MPCSuzeLeaseSession : NSObject
{
    ICSuzeLeaseSession *_icSuzeLeaseSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002efa34
@property(readonly, nonatomic) ICSuzeLeaseSession *icSuzeLeaseSession; // @synthesize icSuzeLeaseSession=_icSuzeLeaseSession;
- (void)endAutomaticallyRefreshingLease;	// IMP=0x00000000002efa14
- (void)beginAutomaticallyRefreshingLease;	// IMP=0x00000000002ef9fe
- (id)initWithICSuzeLeaseSession:(id)arg1;	// IMP=0x00000000002ef993

@end

