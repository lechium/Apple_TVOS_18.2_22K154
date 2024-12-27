//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICPlayActivityEvent, NSString;

__attribute__((visibility("hidden")))
@interface MPCReportingPlaybackActivityEvent : NSObject
{
    _Bool _shouldReportToStore;	// 8 = 0x8
    ICPlayActivityEvent *_playActivityEvent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002fb9a2
@property(nonatomic) _Bool shouldReportToStore; // @synthesize shouldReportToStore=_shouldReportToStore;
@property(copy, nonatomic) ICPlayActivityEvent *playActivityEvent; // @synthesize playActivityEvent=_playActivityEvent;
- (unsigned long long)reportingEventType;	// IMP=0x00000000002fb96c
- (_Bool)isValidReportingEvent;	// IMP=0x00000000002fb95e
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

